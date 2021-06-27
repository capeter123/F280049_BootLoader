/*
 * can_get_function.c
 *
 *  Created on: 2021. 6. 19.
 *      Author: sniper79
 */

#include "bootrom.h"
#include "commands.h"
#include "erase.h"
#include "verify.h"
#include "driverlib.h"
#include "device.h"
#include "stdint.h"

//
// Defines
//
#define MSG_DATA_LENGTH    2
#define TX_MSG_OBJ_ID      2
#define RX_MSG_OBJ_ID      1


//
// Function Prototypes (Private)
//
void canPinmuxOption(uint32_t BootMode);
void canInit(uint32_t BootMode);
uint16_t canCheck(void);
uint16_t canReadMsg(void);
uint16_t canGetWordData(void);
uint16_t canGetOnlyWordData(void);
void canFlush(void);
void sendACK(void);
void sendNAK(void);
uint16_t canGetPacket(uint16_t* length, uint16_t* data);
uint32_t canGetFunction(uint32_t BootMode);

inline uint16_t canGetACK(void);
void canSendWord(uint16_t word);
void canSendChecksum(void);

//
// Function Prototypes (External)
//
extern uint32_t canBoot(uint32_t BootMode);
extern void sharedErase(uint32_t sectors);
extern void copyData(void);
extern void verifyData(void);
extern uint32_t getLongData(void);
extern void readReservedFn(void);


//
// Globals
//
typedef struct
{
    uint16_t status;
    uint32_t address;
} StatusCode;

StatusCode statusCode;
uint16_t checksum;

//
// getWordData is a pointer to the function that interfaces to the peripheral.
// Each loader assigns this pointer to it's particular getWordData function.
//
extern uint16fptr getWordData;

uint16_t txMsgData[2];
uint16_t rxMsgData[2];

//
// Function Prototypes (Private)
//
uint16_t canGetWordData(void);


uint32_t canGetFunction(uint32_t BootMode)
{
    volatile uint32_t EntryAddr;
    uint16_t command;
    uint16_t data[10]; // 16*10 = 128 + 32
    uint16_t length;

    uint16_t wordData[2];

    //
    // Assign GetWordData to the SCI-A version of the
    // function. GetWordData is a pointer to a function.
    //
    getWordData = canGetWordData;

    //
    // Initialize the CAN-A port for communications with the host.
    //
    canInit(BootMode);
    //canCheck();

    //
    // check CAN communication similar to the SCI_lockAutobaud(SCIA_BASE)
    // echo back the CAN communication success
    uint16_t tmp = canReadMsg();
    wordData[0] = tmp & 0x00FF;
    wordData[1] = (tmp >> 8) & 0x00FF;
    CAN_sendMessage(CANA_BASE,TX_MSG_OBJ_ID, MSG_DATA_LENGTH, wordData);

    //
    // get user command through console.
    //
    command = canGetPacket(&length, data);
    //command = canReadMsg();

    while (command != RESET_CPU1)
    {
        //
        // reset the statusCode
        statusCode.status = NO_ERROR;
        statusCode.address = 0x12345678;
        checksum = 0;

        //
        // CPU1_UNLOCK_Z1
        //
        if (command == CPU1_UNLOCK_Z1)
        {
            //
            // driverlib struct for csmKey.
            //
            DCSM_CSMPasswordKey psCMDKey;

            psCMDKey.csmKey0 = (uint32_t)data[0] | ((uint32_t)data[1] << 16);
            psCMDKey.csmKey1 = (uint32_t)data[2] | ((uint32_t)data[3] << 16);
            psCMDKey.csmKey2 = (uint32_t)data[4] | ((uint32_t)data[5] << 16);
            psCMDKey.csmKey3 = (uint32_t)data[6] | ((uint32_t)data[7] << 16);


            //
            // Unlock the zone 1, driverlib.
            //
            DCSM_unlockZone1CSM(&psCMDKey);

            //
            // check if it is unlocked.
            //
            if(DCSM_getZone1CSMSecurityStatus() == DCSM_STATUS_LOCKED) {
                statusCode.status = UNLOCK_ERROR;
            }
        }

        //
        // CPU1_UNLOCK_Z2
        //
        else if (command == CPU1_UNLOCK_Z2)
        {
            //
            // driver lib implementation of csmKeys
            //
            DCSM_CSMPasswordKey psCMDKey;

            psCMDKey.csmKey0 = (uint32_t) data[0] | ((uint32_t) data[1] << 16);
            psCMDKey.csmKey1 = (uint32_t) data[2] | ((uint32_t) data[3] << 16);
            psCMDKey.csmKey2 = (uint32_t) data[4] | ((uint32_t) data[5] << 16);
            psCMDKey.csmKey3 = (uint32_t) data[6] | ((uint32_t) data[7] << 16);

            //
            // Unlock the zone 2, driverlib.
            //
            DCSM_unlockZone2CSM(&psCMDKey);

            //
            // check if zone 2 is unlocked.
            //
            if (DCSM_getZone2CSMSecurityStatus() == DCSM_STATUS_LOCKED)
            {
                statusCode.status = UNLOCK_ERROR;
            }
        }

        //
        // DFU_CPU1
        //
        else if (command == DFU_CPU1)
        {
            // loads application into CPU1_FLASH
            EntryAddr = canBoot(BootMode);
            if (statusCode.status == NO_ERROR)
            {
                statusCode.address = EntryAddr;
            }
        }

        //
        // ERASE_CPU1
        //
        else if (command == ERASE_CPU1)
        {
            uint32_t sectors = (uint32_t)(((uint32_t)data[1] << 16) | (uint32_t)data[0]);

            sharedErase(sectors);
        }

        //
        // VERIFY_CPU1
        //
        else if (command == VERIFY_CPU1)
        {
            //verifyData();
        }

        //
        // RUN_CPU1
        //
        else if (command == RUN_CPU1)
        {
            EntryAddr = (uint32_t)(((uint32_t)data[1] << 16) | (uint32_t)data[0]);
            return EntryAddr;
        }

        //
        // COMMAND_ERROR
        //
        else
        {
            statusCode.status = COMMAND_ERROR;
        }

        //
        // Send the packet and if NAK send again
        //
        //while (canSendPacket(command, statusCode.status, 6, (uint16_t*)&statusCode.address))
        {

        }

        //
        // Get next packet
        //
        command = canGetPacket(&length, data); // get next packet
        //command = canReadMsg();

    } // while (command != RESET_CPU1)

    //
    // Reset with WatchDog Timeout
    //
    EALLOW;
    SysCtl_setWatchdogMode(SYSCTL_WD_MODE_RESET);
    SysCtl_enableWatchdog();
    EDIS;

    while(1)
    {

    }
}

uint16_t canGetWordData(void)
{
    uint16_t wordData[2];
    //uint16_t byteData;
    uint16_t status;

    wordData[0] = 0x0000;
    wordData[1] = 0x0000;
    //*(uint16 *)wordData = 0;

    //byteData = 0x0000;

    // wait until received data from MBOX1
    while(CAN_getNewDataFlags(CANA_BASE) != RX_MSG_OBJ_ID)
    {

    }


    // fetch the LSB/MSB and verify back to the host
    status = (uint16_t)CAN_readMessage(CANA_BASE, RX_MSG_OBJ_ID, wordData);
    if (!status) // if the cana rx fail,
    {

    }
    //rxMsgData[0] = wordData;

    // fetch the MSB and verify back to the host
    //status = (uint16_t)CAN_readMessage(CANA_BASE, RX_MSG_OBJ_ID, &byteData);
    //if (!status) // if the cana rx fail,
    //{

    //}
    //rxMsgData[1] = byteData;

    // form checksum
    checksum += wordData[0] + wordData[1];

    // form the wordData form the MSB:LSB
    //wordData |= (byteData << 8);

    // clear all message box

    return (wordData[0] + (wordData[1] << 8));
}

//
// canGetOnlyWordData -  This routine fetches two bytes from the SCI-A
//                        port and puts them together to form a single
//                        16-bit value.  It is assumed that the host is
//                        sending the data in the order LSB followed by MSB.
//
uint16_t canGetOnlyWordData(void)
{
    uint16_t wordData[2];
    uint16_t status;

    wordData[0] = 0x0000;
    wordData[1] = 0x0000;
    // wait until received data from MBOX1
    while(CAN_getNewDataFlags(CANA_BASE) != RX_MSG_OBJ_ID)
    {

    }

    // fetch the LSB/MSB and verify back to the host
    status = (uint16_t)CAN_readMessage(CANA_BASE, RX_MSG_OBJ_ID, wordData);
    if (!status) // if the cana rx fail,
    {

    }

    // compute checksum
    checksum += wordData[0] + wordData[1];

    return (wordData[0] + (wordData[1] << 8));
}


// Initialize the CAN-A for communications with the host
void canInit(uint32_t BootMode)
{
    canPinmuxOption(BootMode);

    // Initialize the CAN controllers
    CAN_initModule(CANA_BASE);

    // Set up the CAN bus bit rate to CANA_BAUDRATE
    // This function sets up the CAN bus timing for a nominal configuration.
    // You can achieve more control over the CAN bus timing by using the
    // function CANBitTimingSet() instead of this one, if needed.
    // Additionally, consult the device data sheet for more information about
    // the CAN module clocking.
    //
    CAN_setBitRate(CANA_BASE, DEVICE_SYSCLK_FREQ, 100000UL, 20);

    //
    // Initialize the transmit message object used for sending CAN messages.
    // Message Object Parameters:
    //      Message Object ID Number: 1
    //      Message Identifier: 0x1
    //      Message Frame: Standard
    //      Message Type: Transmit
    //      Message ID Mask: 0x0
    //      Message Object Flags: Transmit Interrupt
    //      Message Data Length: 4 Bytes
    //
    CAN_setupMessageObject(CANA_BASE, TX_MSG_OBJ_ID, 0x1, CAN_MSG_FRAME_STD,
                           CAN_MSG_OBJ_TYPE_TX, 0, CAN_MSG_OBJ_NO_FLAGS,
                           MSG_DATA_LENGTH);

    //
    // Initialize the receive message object used for receiving CAN messages.
    // Message Object Parameters:
    //      Message Object ID Number: 2
    //      Message Identifier: 0x1
    //      Message Frame: Standard
    //      Message Type: Receive
    //      Message ID Mask: 0x0
    //      Message Object Flags: Receive Interrupt
    //      Message Data Length: 4 Bytes
    //
    CAN_setupMessageObject(CANA_BASE, RX_MSG_OBJ_ID, 0x1, CAN_MSG_FRAME_STD,
                           CAN_MSG_OBJ_TYPE_RX, 0, CAN_MSG_OBJ_NO_FLAGS,
                           MSG_DATA_LENGTH);

    //
    // Start CAN module A and B operations
    //
    CAN_startModule(CANA_BASE);
}

void canPinmuxOption(uint32_t BootMode)
{
    if (BootMode == CAN_BOOT)
    {
        // Configure GPIO30 as CANA_RX
        // Configure GPIO31 as CANA_TX
        GPIO_setPinConfig(GPIO_30_CANRXA);
        GPIO_setPinConfig(GPIO_31_CANTXA);
    }
}

// 통신 확인용...?
uint16_t canCheck(void)
{
    bool status;
    uint16_t wordData[2];
    //uint16_t txMsgData[2];

    //
    // Setup send and receive buffers
    //
    //txMsgData[0] = 0x01;
    //txMsgData[1] = 0x02;
    //*(uint16_t *)rxMsgData = 0;
    //*(uint16_t *)wordData = 0;
    wordData[0] = 0x0000;
    wordData[1] = 0x0000;

    //
    // Wait until we correctly read an 'A' or 'a' and lock
    //
    do {
        // wait until received data from MBOX1
        while(CAN_getNewDataFlags(CANA_BASE) != RX_MSG_OBJ_ID)
        {

        }

        status = (uint16_t)CAN_readMessage(CANA_BASE, RX_MSG_OBJ_ID, wordData);
        if (!status) // if the cana rx fail,
        {

        }

        //rxMsgData[0] = byteData[0];
        //rxMsgData[1] = byteData[1];

        // echo
        CAN_sendMessage(CANA_BASE,TX_MSG_OBJ_ID, MSG_DATA_LENGTH, wordData);

        //DEVICE_DELAY_US(500000);
    }
    while(wordData[0] != 0x41);

    return (wordData[0] + (wordData[1] << 8));
}

uint16_t canReadMsg(void)
{
    bool status;
    uint16_t wordData[2];

    wordData[0] = 0x0000;
    wordData[1] = 0x0000;

    // wait until received data from MBOX1
    while(CAN_getNewDataFlags(CANA_BASE) != RX_MSG_OBJ_ID)
    { }

    status = (uint16_t)CAN_readMessage(CANA_BASE, RX_MSG_OBJ_ID, wordData);
    if (!status) // if the cana rx fail,
    { }

    return (wordData[0] + (wordData[1] << 8));
}

//
// canGetPacket -  This routine receives the packet, returns the
//                 command and puts the data length in Uin16* length
//                 and data in uint16_t* data
//
uint16_t canGetPacket(uint16_t* length, uint16_t* data)
{
    if(canGetOnlyWordData() != 0x1BE4)
    {
        sendNAK();

        //
        // start packet error
        //
        return(100);
    }

    *length = canGetOnlyWordData();

    //
    // checksum of command and data
    //
    checksum = 0;
    uint16_t command = canGetOnlyWordData();

    int i = 0;
    for (i = 0; i < (*length)/2; i++)
    {
        *(data+i) = canGetOnlyWordData();
    }

    uint16_t dataChecksum = checksum;
    if (dataChecksum != canGetOnlyWordData())
    {
        sendNAK();

        //
        // checksum error
        //
        return(101);
    }

    if (canGetOnlyWordData() != 0xE41B)
    {
        sendNAK();

        //
        // end packet error
        //
        return(102);
    }

    sendACK();
    return(command);
}

//
// canSendPacket -  Sends a Packet to the host which contains
//                  status in the data and address.  It sends the
//                  statusCode global variable contents.  It then waits
//                  for an ACK or NAK from the host.
//
uint16_t sciSendPacket(uint16_t command, uint16_t status, uint16_t length,
                      uint16_t* data)
{
    int i;

    canFlush();

    //
    // driverlib's version of delay
    //
    DEVICE_DELAY_US(100000);
    canSendWord(0x1BE4);
    canSendWord(length);

    checksum = 0;
    canSendWord(command);
    canSendWord(status);

    for(i = 0; i < (length-2)/2; i++)
    {
        canSendWord(*(data + i));
    }

    canSendChecksum();
    canSendWord(0xE41B);

    //
    // Receive an ACK or NAK
    //
    return canGetACK();
}


//
// sendNAK - This routine transmits NAK.
//
void sendNAK(void)
{
    uint16_t byteData[2] = { NAK, NAK };

    //
    // write NotAcKowledged.
    //
    CAN_sendMessage(CANA_BASE,TX_MSG_OBJ_ID, MSG_DATA_LENGTH, byteData);

    canFlush();
}

//
// sendACK - This routine transmits ACK.
//
void sendACK(void)
{
    uint16_t byteData[2] = { ACK, ACK };

    //
    // write ACKowledged.
    //
    CAN_sendMessage(CANA_BASE,TX_MSG_OBJ_ID, MSG_DATA_LENGTH, byteData);

    canFlush();
}

//
// canFlush - This routine flushes CANA.
//
void canFlush(void)
{
    //
    // wait while TX is busy.
    //
    while(CAN_getStatus(CANA_BASE) != CAN_STATUS_TXOK)
    {
    }
}


//
// canGetACK - Gets 1-byte ACK from the host.
//
inline uint16_t canGetACK(void)
{
    uint16_t wordData;

    wordData = canReadMsg() & 0x00FF;

    if (wordData != ACK)
    {
        return 1;
    }

    return 0;
}

//
// canSendWord - Sends a uint16_t word.
//
void canSendWord(uint16_t word)
{
    uint16_t byteData[2] = {0, 0};

    // send LSB of word
    byteData[0] = word & 0xFF;
    byteData[1] = word & 0xFF;
    CAN_sendMessage(CANA_BASE,TX_MSG_OBJ_ID, MSG_DATA_LENGTH, byteData);

    checksum += word & 0xFF;

    canFlush();
    canGetACK();

    // send MSB of word
    byteData[0] = (word>>8) & 0xFF;
    byteData[1] = (word>>8) & 0xFF;

    checksum += (word>>8) & 0xFF;

    canFlush();
    canGetACK();
}

//
// canSendChecksum - Sends the Global checksum value
//
void canSendChecksum(void)
{
    uint16_t byteData[2] = {0, 0};

    // send LSB of word
    byteData[0] = checksum & 0xFF;
    byteData[1] = checksum & 0xFF;
    CAN_sendMessage(CANA_BASE,TX_MSG_OBJ_ID, MSG_DATA_LENGTH, byteData);

    canFlush();
    canGetACK();

    // send MSB of word
    byteData[0] = (checksum>>8) & 0xFF;
    byteData[0] = (checksum>>8) & 0xFF;
    CAN_sendMessage(CANA_BASE,TX_MSG_OBJ_ID, MSG_DATA_LENGTH, byteData);

    canFlush();
    canGetACK();
}










