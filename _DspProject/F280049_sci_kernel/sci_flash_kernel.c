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
extern uint32_t sciGetFunction(uint32_t  BootMode);
extern void sciaFlush(void);

#pragma CODE_SECTION(Error,".TI.ramfunc");

#define GPIO_SW1            32

uint16_t u16_modeSw;

//
// Main
//
uint32_t main(void)
{
    uint32_t EntryAddr;

    // flush SCIA TX port by waiting while it is busy
    sciaFlush(); // 여기에 있을 필요가 있나?

    // initialize device
    Device_init();
    Device_initGPIO();

    // LED for GPIO24
    GPIO_setDirectionMode(24, GPIO_DIR_MODE_OUT);
    GPIO_setQualificationMode(24, GPIO_QUAL_SYNC);
    //GPIO_setDirectionMode(24, GPIO_DIR_MODE_IN);
    //GPIO_setQualificationMode(24, GPIO_QUAL_6SAMPLE);
    //GPIO_setQualificationPeriod(24, 30);
    GPIO_setPinConfig(GPIO_24_GPIO24);

    // external input for GPIO32
    GPIO_setDirectionMode(32, GPIO_DIR_MODE_IN);
    GPIO_setQualificationMode(32, GPIO_QUAL_6SAMPLE);
    GPIO_setQualificationPeriod(32, 30);
    GPIO_setPinConfig(GPIO_32_GPIO32);

    // init interrupt and vectorTable
    Interrupt_initModule();
    Interrupt_initVectorTable();


    // Enable Global Interrupt(INTM) and realtime interrupt(DBGM)
    EINT;
    ERTM;

    // initialize flash sectors, fapi + driverlib
    initFlashSectors();

    GPIO_writePin(24, 1);

    while(1) {
        //u16_modeSw = GPIO_readPin(24) | (GPIO_readPin(32) << 1);
        u16_modeSw = GPIO_readPin(32);

        if (u16_modeSw == 0) {
            GPIO_writePin(24, 0); // start boot mode;
            break;
        }
    }

    // parameter SCI_BOOT for GPIO28(RX), GPIO29(TX) is default.
    EntryAddr = sciGetFunction(SCI_BOOT);

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
