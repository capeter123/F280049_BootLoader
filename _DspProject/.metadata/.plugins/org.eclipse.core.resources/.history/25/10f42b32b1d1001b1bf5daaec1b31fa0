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

//
// getWordData is a pointer to the function that interfaces to the peripheral.
// Each loader assigns this pointer to it's particular getWordData function.
//
extern uint16fptr getWordData;

//
// Function Prototypes
//
extern uint16_t canGetWordData(void);
extern void copyData(void);
uint32_t getLongData(void);
extern void readReservedFn(void);
extern void Error(Fapi_StatusType status);
uint32_t canBoot(uint32_t BootMode);

//
// uint32_t canBoot - This module is the main SCI boot routine.
//                    It will load code via the SCI-A port.
//                    It will return a entry point address back
//                    to the InitBoot routine which in turn calls
//                    the ExitBoot routine.
//
uint32_t canBoot(uint32_t BootMode)
{
    statusCode.status = NO_ERROR;
    statusCode.address = 0x12345678;

    uint32_t EntryAddr;

    //
    // Assign getWordData to the CAN-A version of the
    // function; getWordData is a pointer to a function.
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

    EntryAddr = getLongData();

    copyData();

    uint16_t x = 0;
    for(x = 0; x < 32676; x++){}
    for(x = 0; x < 32676; x++){}

    return EntryAddr;
}
