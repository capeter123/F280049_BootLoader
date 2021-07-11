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

#define GPIO_LED1                           32
#define GPIO_LED2                           24
#define GPIO_LED1_PIN_CONFIG                GPIO_32_GPIO32
#define GPIO_LED2_PIN_CONFIG                GPIO_24_GPIO24
#define LED_MODE                            0
#define BOOT_LOADER                         0x9B000

void GPIO_HAL_Init();

//
// Main
//
uint32_t main(void)
{
    volatile uint32_t EntryAddr;
    uint16_t i;

    Device_init();
    Device_initGPIO();
    GPIO_HAL_Init();
    Interrupt_initModule();
    Interrupt_initVectorTable();

    for(;;) {
        GPIO_togglePin(GPIO_LED2);

        if ((LED_MODE == 0) && (GPIO_readPin(GPIO_LED1) == 0)) {

            for (i=0; i<20; i++) {
                GPIO_togglePin(GPIO_LED2);
                DEVICE_DELAY_US(100000);
            }

            EntryAddr = (uint32_t)BOOT_LOADER;
            break;
        }
        else {
            GPIO_togglePin(GPIO_LED1);
        }

        DEVICE_DELAY_US(250000);
    }

    i = 0;

    return EntryAddr;
}

void GPIO_HAL_Init()
{
    if (LED_MODE) {
        GPIO_setDirectionMode(GPIO_LED1, GPIO_DIR_MODE_OUT);
        GPIO_setQualificationMode(GPIO_LED1, GPIO_QUAL_SYNC);
        GPIO_setPinConfig(GPIO_LED1_PIN_CONFIG);
    }
    else {
        GPIO_setDirectionMode(GPIO_LED1, GPIO_DIR_MODE_IN);
        GPIO_setQualificationMode(GPIO_LED1, GPIO_QUAL_6SAMPLE);
        GPIO_setQualificationPeriod(GPIO_LED1, 30);
        GPIO_setPinConfig(GPIO_LED1_PIN_CONFIG);
    }

    GPIO_setDirectionMode(GPIO_LED2, GPIO_DIR_MODE_OUT);
    GPIO_setQualificationMode(GPIO_LED2, GPIO_QUAL_SYNC);
    GPIO_setPinConfig(GPIO_LED2_PIN_CONFIG);
}
//
// End of File
//
