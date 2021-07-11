/*
 * verify.c
 *
 *  Created on: 2021. 6. 19.
 *      Author: sniper79
 */

#include "bootrom.h"
#include "commands.h"
#include "F021_F28004x_C28x.h"

//
//Include Flash API example header file
//
#include "flash_programming_c28.h"
#include "assert.h"

//
// getWordData is a pointer to the function that interfaces to the peripheral.
// Each loader assigns this pointer to it's particular getWordData function.
//
extern uint16fptr getWordData;

typedef struct
{
   uint16_t status;
   uint32_t address;
}  StatusCode;
extern StatusCode statusCode;

//
// because of ECC, must be multiple of 64 bits, or 4 words, BUFFER_SIZE % 4 == 0
//
#define BUFFER_SIZE                0x80

//
// Function prototypes
//
extern void canSendChecksum(void);
void verifyData(void);
extern uint32_t getLongData(void);
extern void readReservedFn(void);
extern uint16_t canGetWordData(void);


//
// void verifyData(void) - This routine copies multiple blocks of data from the host
//                         and verifies that data with the flash in the device.
//                         An error is returned if the flash is not verified.
//
//                         Multiple blocks of data are copied until a block
//                         size of 00 00 is encountered.
//
void verifyData()
{
    statusCode.status = NO_ERROR;
    statusCode.address = 0x12346578;

    struct HEADER {
    uint16_t BlockSize;
    uint32_t DestAddr;
    } BlockHeader;

    uint16_t wordData;
    uint16_t i,j,k;
    uint16_t Buffer[BUFFER_SIZE];
    uint16_t miniBuffer[4];
    int fail = 0;

    assert(BUFFER_SIZE % 4 == 0);

    //
    // Assign GetWordData to the SCI-A version of the
    // function. GetWordData is a pointer to a function.
    //
    getWordData = canGetWordData;

    //
    // If the KeyValue was invalid, abort the load
    // and return the flash entry point.
    //
    if (canGetWordData() != 0x08AA)
    {
        statusCode.status = VERIFY_ERROR;
        statusCode.address = FLASH_ENTRY_POINT;
    }

    //
    // reads and discards 8 reserved words
    //
    readReservedFn();

    //
    // uint32_t EntryAddr = GetLongData();
    //
    getLongData();

    //
    // Send checksum to satisfy before we begin
    //
#if checksum_enable
    canSendChecksum();
#endif

    //
    // Get the size in words of the first block
    //
    BlockHeader.BlockSize = (*getWordData)();

    //
    // While the block size is > 0 copy the data
    // to the DestAddr.  There is no error checking
    // as it is assumed the DestAddr is a valid
    // memory location
    //

    EALLOW;
    while(BlockHeader.BlockSize != (uint16_t)0x0000)
    {
       Fapi_StatusType oReturnCheck;
       Fapi_FlashStatusWordType oFlashStatusWord;
       BlockHeader.DestAddr = getLongData();
       for(i = 0; i < BlockHeader.BlockSize; i += 0)
       {
           if(BlockHeader.BlockSize < BUFFER_SIZE)
           {
               for(j = 0; j < BlockHeader.BlockSize; j++)
               {
                   wordData = (*getWordData)();
                   Buffer[j] = wordData;
                   i++;
               }
               for(j = BlockHeader.BlockSize; j < BUFFER_SIZE; j++)
               {
                   Buffer[j] = 0xFFFF;
               }
           }

           //
           // BlockHeader.BlockSize >= BUFFER_SIZE
           //
           else
           {

               //
               // less than one BUFFER_SIZE left
               //
               if((BlockHeader.BlockSize - i) < BUFFER_SIZE)
               {

                   //
                   // fill Buffer with rest of data
                   //
                   for(j = 0; j < BlockHeader.BlockSize - i; j++)
                   {
                       wordData = (*getWordData)();
                       Buffer[j] = wordData;
                   }

                   //
                   // increment i outside here so it doesn't affect loop above
                   //
                   i += j;

                   //
                   // fill the rest with 0xFFFF
                   //
                   for(; j < BUFFER_SIZE; j++)
                   {
                       Buffer[j] = 0xFFFF;
                   }
               }
               else
               {

                   //
                   // fill up like normal, up to BUFFER_SIZE
                   //
                   for(j = 0; j < BUFFER_SIZE; j++)
                   {
                       wordData = (*getWordData)();
                       Buffer[j] = wordData;
                       i++;
                   }
               }
           }

           for(k = 0; k < (BUFFER_SIZE / 4); k++)
           {
               miniBuffer[0] = Buffer[k * 4 + 0];
               miniBuffer[1] = Buffer[k * 4 + 1];
               miniBuffer[2] = Buffer[k * 4 + 2];
               miniBuffer[3] = Buffer[k * 4 + 3];

               //
               // check that miniBuffer is not already all erased data
               //
               if(!((miniBuffer[0] == 0xFFFF) && (miniBuffer[1] == 0xFFFF) && (miniBuffer[2] == 0xFFFF)
                       && (miniBuffer[3] == 0xFFFF)))
               {
                    while(Fapi_checkFsmForReady() == Fapi_Status_FsmBusy);

                    for(j = 0; j < 4; j += 2)
                    {
                       uint32_t toVerify = miniBuffer[j+1];
                       toVerify = toVerify << 16;
                       toVerify |= miniBuffer[j];
                       oReturnCheck = Fapi_doVerify((uint32_t *)(BlockHeader.DestAddr+j),
                              1,
                              (uint32_t *)(&toVerify),
                              &oFlashStatusWord);
                       if(oReturnCheck != Fapi_Status_Success)
                       {
                           //
                           // first fail
                           //
                           if(fail == 0)
                           {
                                statusCode.status = VERIFY_ERROR;
                                statusCode.address = oFlashStatusWord.au32StatusWord[0];
                           }
                           fail++;
                       }
                    } //for j; for Fapi_doVerify
               } //check if miniBuffer does not contain all already erased data
               BlockHeader.DestAddr += 0x4;
           } //for(int k); loads miniBuffer with Buffer elements
#if checksum_enable
           canSendChecksum();
#endif
       }

       //
       // get the size of the next block
       //
       BlockHeader.BlockSize = (*getWordData)();
    }
    EDIS;
    return;
}
