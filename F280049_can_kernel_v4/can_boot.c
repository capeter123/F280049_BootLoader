/*
 * can_boot.c
 *
 *  Created on: 2021. 6. 19.
 *      Author: sniper79
 */

#include "bootrom.h"
#include "commands.h"
#include "driverlib.h"
#include "Types.h"

//
// Globals
//
typedef struct
{
   uint16_t status;
   uint32_t address;
}  StatusCode;
extern StatusCode statusCode;

extern uint16fptr getWordData;
extern uint16_t txMsgData[8];
extern uint16_t rxMsgData[8];


// Function Prototypes
extern uint16_t canGetWordData(void);
extern void copyData(void);
uint32_t getLongData(void);
extern void readReservedFn(void);
extern void Error(Fapi_StatusType status);
uint32_t canBoot(uint32_t BootMode);

uint32_t canBoot(uint32_t BootMode)
{
    uint32_t EntryAddr;

    statusCode.status = NO_ERROR;
    statusCode.address = 0x12345678;

    getWordData = canGetWordData;

    if (canGetWordData() != 0x08AA)
    {
        statusCode.status = VERIFY_ERROR;
        statusCode.address = FLASH_ENTRY_POINT;
    }

    // reads and discards 8 reserved words
    readReservedFn();

    EntryAddr = getLongData();

    copyData();

    uint16_t x = 0;
    for(x = 0; x < 32676; x++){}
    for(x = 0; x < 32676; x++){}

    return EntryAddr;
}
