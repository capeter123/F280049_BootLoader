/*
 * verify.c
 *
 *  Created on: 2021. 6. 19.
 *      Author: sniper79
 */

#include "bootrom.h"
#include "commands.h"
#include "F021_F28004x_C28x.h"
#include "flash_programming_c28.h"
#include "assert.h"


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

// Function prototypes
void verifyData(void);
extern void canSendChecksum(void);
extern uint32_t getLongData(void);
extern void readReservedFn(void);
extern uint16_t canGetWordData(void);


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

    getWordData = canGetWordData;

    if (canGetWordData() != 0x08AA)
    {
        statusCode.status = VERIFY_ERROR;
        statusCode.address = FLASH_ENTRY_POINT;
    }

    // reads and discards 8 reserved words
    readReservedFn();

    getLongData();

#if checksum_enable
    canSendChecksum();
#endif

    BlockHeader.BlockSize = (*getWordData)();

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
