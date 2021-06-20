/*
 * erase.h
 *
 *  Created on: 2021. 6. 19.
 *      Author: sniper79
 */

#ifndef ERASE_H_
#define ERASE_H_

#include "bootrom.h"
#include "F021_F28004x_C28x.h"
#include "flash_programming_c28.h"

void sharedErase(uint32_t sectors);

#endif /* ERASE_H_ */
