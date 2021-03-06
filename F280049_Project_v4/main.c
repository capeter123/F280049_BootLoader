//#############################################################################
//
// FILE:   empty_driverlib_main.c
//
// TITLE:  Empty Project
//
// Empty Project Example
//
// This example is an empty project setup for Driverlib development.
//
//#############################################################################
// $TI Release: F28004x Support Library v1.12.00.00 $
// $Release Date: Fri Feb 12 18:57:27 IST 2021 $
// $Copyright:
// Copyright (C) 2021 Texas Instruments Incorporated - http://www.ti.com/
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//#############################################################################

//
// Included Files
//
#include "driverlib.h"
#include "device.h"
#include "F021_F28004x_C28x.h"

#define GPIO_LED1                           32
#define GPIO_LED2                           24
#define GPIO_LED1_PIN_CONFIG                GPIO_32_GPIO32
#define GPIO_LED2_PIN_CONFIG                GPIO_24_GPIO24
#define BOOT_LOADER_START_ADDR              0x80000 // boot loader entry point from the can boot kernel
#define BOOT_START_METHOD                   1 // CAN Command: 1


// Definition for Boot Loader
#define CHECK_FW_KEY_ADDR       0x9F000
#define ENTRY_BOOT_KEY_HIGH      0x12
#define ENTRY_BOOT_KEY_LOW       0x34

// CAN
#define MSG_DATA_LENGTH    2
#define TX_MSG_OBJ_ID      2
#define RX_MSG_OBJ_ID      1

// Function Proto-Type
void GPIO_HAL_Init();

__interrupt void CAN_Isr(void);
void CAN_Init(void);

void initFlashSectors(void);
void eraseDfuStatus(void);
void jumpToDfu(void);
void watchDogReset(void);
void Error(Fapi_StatusType status);

// global variables
volatile uint32_t errorFlag = 0;
uint16_t rxMsgData[2];

//
// Main
//
void main(void)
{
    Device_init();
    Device_initGPIO();

    GPIO_HAL_Init();
    CAN_Init();

    Interrupt_initModule();
    Interrupt_initVectorTable();

    EINT;
    ERTM;

    Interrupt_register(INT_CANA0, &CAN_Isr);
    Interrupt_enable(INT_CANA0);
    CAN_enableGlobalInterrupt(CANA_BASE, CAN_GLOBAL_INT_CANINT0);

    rxMsgData[0] = 0;
    rxMsgData[1] = 0;

    for(;;) {
        GPIO_togglePin(GPIO_LED2);
        GPIO_togglePin(GPIO_LED1);

        if ((BOOT_START_METHOD == 1) && (rxMsgData[1] == ENTRY_BOOT_KEY_HIGH) && (rxMsgData[0] == ENTRY_BOOT_KEY_LOW)) {
            // boot mode start from CAN message.
            jumpToDfu();
        }

        DEVICE_DELAY_US(500000);
    }
}

void GPIO_HAL_Init()
{
    GPIO_setDirectionMode(GPIO_LED1, GPIO_DIR_MODE_OUT);
    GPIO_setQualificationMode(GPIO_LED1, GPIO_QUAL_SYNC);
    GPIO_setPinConfig(GPIO_LED1_PIN_CONFIG);

    GPIO_setDirectionMode(GPIO_LED2, GPIO_DIR_MODE_OUT);
    GPIO_setQualificationMode(GPIO_LED2, GPIO_QUAL_SYNC);
    GPIO_setPinConfig(GPIO_LED2_PIN_CONFIG);
}

void CAN_Init(void)
{
    GPIO_setPinConfig(GPIO_30_CANRXA);
    GPIO_setPinConfig(GPIO_31_CANTXA);

    CAN_initModule(CANA_BASE);
    CAN_setBitRate(CANA_BASE, DEVICE_SYSCLK_FREQ, 100000UL, 20);

    CAN_enableInterrupt(CANA_BASE, CAN_INT_IE0 | CAN_INT_ERROR | CAN_INT_STATUS);

    //
    // Initialize the transmit message object used for sending CAN messages.
    // Message Object Parameters:
    //      Message Object ID Number: 1
    //      Message Identifier: 0x1
    //      Message Frame: Standard
    //      Message Type: Transmit
    //      Message ID Mask: 0x0
    //      Message Object Flags: Transmit Interrupt
    //      Message Data Length: 2 Bytes
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
    //      Message Data Length: 2 Bytes
    //
    CAN_setupMessageObject(CANA_BASE, RX_MSG_OBJ_ID, 0x1, CAN_MSG_FRAME_STD,
                           CAN_MSG_OBJ_TYPE_RX, 0, CAN_MSG_OBJ_RX_INT_ENABLE, //CAN_MSG_OBJ_NO_FLAGS,
                           MSG_DATA_LENGTH);

    //
    // Start CAN module A and B operations
    //
    CAN_startModule(CANA_BASE);
}

__interrupt void CAN_Isr(void)
{
    uint32_t status;

    status = CAN_getInterruptCause(CANA_BASE);

    if (status == CAN_INT_INT0ID_STATUS)
    {
        status = CAN_getStatus(CANA_BASE);

        if (((status & ~(CAN_STATUS_TXOK | CAN_STATUS_RXOK)) != 7) &&
            ((status & ~(CAN_STATUS_TXOK | CAN_STATUS_RXOK)) != 0))
        {
            errorFlag = 1;
        }
    }
    else if (status == RX_MSG_OBJ_ID)
    {
        CAN_readMessage(CANA_BASE, RX_MSG_OBJ_ID, rxMsgData);
        CAN_clearInterruptStatus(CANA_BASE, RX_MSG_OBJ_ID);
        errorFlag = 0;
    }
    else
    {

    }

    CAN_clearGlobalInterruptStatus(CANA_BASE, CAN_GLOBAL_INT_CANINT0);
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP9);
}

void watchDogReset(void)
{
    EALLOW;
    SysCtl_setWatchdogMode(SYSCTL_WD_MODE_RESET);
    SysCtl_enableWatchdog();
    EDIS;

    while(1)
    {

    }
}

// initFlashSectors - Initialize the flash API
void initFlashSectors(void)
{
    Fapi_StatusType oReturnCheck;

    EALLOW;

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

void jumpToDfu(void)
{
    uint16_t i;

    for (i=0; i<20; i++) {
        GPIO_togglePin(GPIO_LED2);
        DEVICE_DELAY_US(100000);
    }

    // initialize flash sectors, fapi + driverlib
    initFlashSectors();
    eraseDfuStatus();

    // reset by watchdog
    watchDogReset();
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
//
// End of File
//
