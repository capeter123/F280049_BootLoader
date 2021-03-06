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

#define USER_FW_ENTRY_ADDR      0x90000    // flash bank sector 0
#define CHECK_FW_KEY_ADDR       0x9F000
#define FW_KEY_VALUE1           0xAAAA
#define FW_KEY_VALUE2           0xBBBB

// Function prototypes
void initFlashSectors(void);
void Error(Fapi_StatusType status);
void GPIO_HAL_Init(void);
void writeDfuStatus(void);
void eraseDfuStatus(void);
Fapi_StatusType checkDfuStatus(void);

extern uint32_t canGetFunction(uint32_t BootMode);
extern void sciaFlush(void);
extern void canInit(uint32_t BootMode);
extern void canKeyCheck(uint16_t word);

//
// Main
//
uint32_t main(void)
{
    uint32_t EntryAddr;
    uint16_t i;

    // initialize device
    Device_init();
    Device_initGPIO();
    GPIO_HAL_Init();

    // init interrupt and vectorTable
    Interrupt_initModule();
    Interrupt_initVectorTable();

    // initialize flash sectors, fapi + driverlib
    initFlashSectors();

    // Enable Global Interrupt(INTM) and realtime interrupt(DBGM)
    EINT;
    ERTM;

    GPIO_writePin(24, 1);
    GPIO_writePin(32, 1);

    // check user fw
    // if user fw ok -> change entry addr
    if(checkDfuStatus() == Fapi_Status_Success) {
        for (i=0; i<20; i++) {
            GPIO_togglePin(24);
            DEVICE_DELAY_US(100000);
        }

        return USER_FW_ENTRY_ADDR;
    }
    else {
        for (i=0; i<20; i++) {
            GPIO_togglePin(32);
            DEVICE_DELAY_US(100000);
        }

        EntryAddr = canGetFunction(CAN_BOOT);
    }

    return EntryAddr;
}

void GPIO_HAL_Init(void)
{
    GPIO_setDirectionMode(32, GPIO_DIR_MODE_OUT);
    GPIO_setQualificationMode(32, GPIO_QUAL_SYNC);
    GPIO_setPinConfig(GPIO_32_GPIO32);

    GPIO_setDirectionMode(24, GPIO_DIR_MODE_OUT);
    GPIO_setQualificationMode(24, GPIO_QUAL_SYNC);
    GPIO_setPinConfig(GPIO_24_GPIO24);
}

Fapi_StatusType checkDfuStatus(void)
{
    uint32_t FwRev;
    uint32_t toVerify = FW_KEY_VALUE2;

    toVerify = (toVerify << 16) | FW_KEY_VALUE1;
    FwRev = HWREG((uint32_t)CHECK_FW_KEY_ADDR);

    if (toVerify != FwRev) {
        return Fapi_Error_Fail;
    }

    return Fapi_Status_Success;
}

void writeDfuStatus(void)
{
    Fapi_StatusType oReturnCheck;
    uint16_t u16_DataBuffer[2];

    u16_DataBuffer[0] = FW_KEY_VALUE1;
    u16_DataBuffer[1] = FW_KEY_VALUE2;

    EALLOW;

    // Issue program command
    oReturnCheck = Fapi_issueProgrammingCommand((uint32_t *)CHECK_FW_KEY_ADDR, u16_DataBuffer,
                                                sizeof(u16_DataBuffer), 0, 0, Fapi_AutoEccGeneration);

    // Wait until the flash program operation is over
    while (Fapi_checkFsmForReady() != Fapi_Status_FsmReady) { }

    if (oReturnCheck != Fapi_Status_Success)
    {
        Error(oReturnCheck);
    }

    EDIS;
}

void eraseDfuStatus(void)
{
    Fapi_StatusType oReturnCheck;
    Fapi_FlashStatusWordType oFlashStatusWord;

    EALLOW;

    oReturnCheck = Fapi_issueAsyncCommandWithAddress(Fapi_EraseSector, (uint32_t *)CHECK_FW_KEY_ADDR);

    // wait until AsyncCommand is done.
    while (Fapi_checkFsmForReady() != Fapi_Status_FsmReady)
    {
    }

    oReturnCheck = Fapi_doBlankCheck((uint32_t *)CHECK_FW_KEY_ADDR, 1, &oFlashStatusWord);
    if (oReturnCheck != Fapi_Status_Success)
    {
    }

    while (Fapi_checkFsmForReady() == Fapi_Status_FsmBusy)
    {
    }

    EDIS;
}

// initFlashSectors - Initialize the flash API
void initFlashSectors(void)
{
    EALLOW;

    Fapi_StatusType oReturnCheck;

    oReturnCheck = Fapi_initializeAPI(F021_CPU0_BASE_ADDRESS, 100);
    if (oReturnCheck != Fapi_Status_Success)
    {
        Error(oReturnCheck);
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
