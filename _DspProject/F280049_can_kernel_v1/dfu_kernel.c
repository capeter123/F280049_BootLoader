//#############################################################################
//
// FILE:  main.c
// TITLE: SCI Flash Kernel
//
//#############################################################################

//
// Included Files
//
#include "driverlib.h"
#include "device.h"
#include "string.h"
#include "erase.h"
#include "flash_programming_c28.h"
#include "F021_F28004x_C28x.h"
#include "bootrom.h"
#include "flash.h"
#include "gpio.h"

// Function prototypes
void initFlashSectors(void);
void Error(Fapi_StatusType status);
extern uint32_t sciGetFunction(uint32_t BootMode);
extern uint32_t canGetFunction(uint32_t BootMode);
extern void sciaFlush(void);

#pragma CODE_SECTION(Error,".TI.ramfunc");

//
// Main
//
uint32_t main(void)
{
    uint32_t EntryAddr;

    // initialize device
    Device_init();
    Device_initGPIO();

    // init interrupt and vectorTable
    Interrupt_initModule();
    Interrupt_initVectorTable();

    // Enable Global Interrupt(INTM) and realtime interrupt(DBGM)
    EINT;
    ERTM;

    // initialize flash sectors, fapi + driverlib
    initFlashSectors();

    EntryAddr = canGetFunction(CAN_BOOT);

    return EntryAddr;
}

// initFlashSectors - Initialize the flash API
void initFlashSectors(void)
{
    EALLOW;

    Fapi_StatusType oReturnCheck;

    oReturnCheck = Fapi_initializeAPI(F021_CPU0_BASE_ADDRESS, 100);
    if (oReturnCheck != Fapi_Status_Success)
    {
        Error(oReturnCheck); // LED로 표시하게 할까?
    }

    oReturnCheck = Fapi_setActiveFlashBank(Fapi_FlashBank0);
    if (oReturnCheck != Fapi_Status_Success)
    {
        Error(oReturnCheck);
    }

    EDIS;

    // enable Error correction
    Flash_enableECC(FLASH0ECC_BASE);
}

// Error - Error function that will halt debugger
void Error(Fapi_StatusType status)
{
    // Error code will be in the status parameter
    __asm("    ESTOP0");;
}

//
// End of File
//
