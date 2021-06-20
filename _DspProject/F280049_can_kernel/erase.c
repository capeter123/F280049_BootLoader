/*
 * erase.c
 *
 *  Created on: 2021. 6. 19.
 *      Author: sniper79
 */

#include "bootrom.h"
#include "commands.h"
#include "F021_F28004x_C28x.h"
#include "flash_programming_c28.h"
#include "erase.h"
#include "Types.h"

//
// Globals
//
typedef struct
{
    uint16_t status;
    uint32_t address;
} StatusCode;
extern StatusCode statusCode;

//
//************ 32(16x2) sectors Bzero/one_Sector0~15_start **********
//
const uint32_t sectAddress[32] = { Bzero_Sector0_start, Bzero_Sector1_start,
                                 Bzero_Sector2_start, Bzero_Sector3_start,
                                 Bzero_Sector4_start, Bzero_Sector5_start,
                                 Bzero_Sector6_start, Bzero_Sector7_start,
                                 Bzero_Sector8_start, Bzero_Sector9_start,
                                 Bzero_Sector10_start, Bzero_Sector11_start,
                                 Bzero_Sector12_start, Bzero_Sector13_start,
                                 Bzero_Sector14_start, Bzero_Sector15_start,
                                 Bone_Sector0_start, Bone_Sector1_start,
                                 Bone_Sector2_start, Bone_Sector3_start,
                                 Bone_Sector4_start, Bone_Sector5_start,
                                 Bone_Sector6_start, Bone_Sector7_start,
                                 Bone_Sector8_start, Bone_Sector9_start,
                                 Bone_Sector10_start, Bone_Sector11_start,
                                 Bone_Sector12_start, Bone_Sector13_start,
                                 Bone_Sector14_start, Bone_Sector15_start };

//
// Function Prototypes
//
void sharedErase(uint32_t sectors);
extern void exampleError(Fapi_StatusType status);
extern void sendACK(void);
extern void sendNAK(void);

//
// void sharedErase(uint32_t sectors) - This routine takes the 32-bit sectors
//                                      variable as a parameter.  Each bit
//                                      corresponds to a sector, starting with
//                                      bit 0 and sector A.  This routine
//                                      attempts to erase the sectors specified.
//
void sharedErase(uint32_t sectors)
{
    statusCode.status = NO_ERROR;
    statusCode.address = 0x12345678;
    int i = 0;
    Fapi_StatusType oReturnCheck;
    Fapi_FlashStatusWordType oFlashStatusWord;
    int fail = 0;

    EALLOW;
    for (i = 0; i < 32; i++)
    {
        if ((sectors & 0x00000001) == 0x00000001)
        {
            oReturnCheck = Fapi_issueAsyncCommandWithAddress(
                    Fapi_EraseSector, (uint32_t *) (sectAddress[i]));

            //
            // wait until AsyncCommand is done.
            //
            while (Fapi_checkFsmForReady() != Fapi_Status_FsmReady)
            {
            }

            //
            // All 8K sector size
            //
            oReturnCheck = Fapi_doBlankCheck((uint32_t *) (sectAddress[i]),
            B_8KSector_u32length,
                                             &oFlashStatusWord);
            if (oReturnCheck != Fapi_Status_Success)
            {
                //
                // first fail
                //
                if (fail == 0)
                {
                    statusCode.status = BLANK_ERROR;
                    statusCode.address = oFlashStatusWord.au32StatusWord[0];
                }
                fail++;
            }

            while (Fapi_checkFsmForReady() == Fapi_Status_FsmBusy)
            {
            }
        }
        sectors = sectors >> 1;
    }
    EDIS;
    return;
}
