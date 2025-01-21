/*
 * adt_temp.h
 *
 *  Created on: Jan 10, 2025
 *      Author: JAYACHITRA
 */

#ifndef INC_ADT_TEMP_H_
#define INC_ADT_TEMP_H_

#include "stdint.h"
#include "stddef.h"

void ADT_Write(uint8_t Reg, uint8_t data);
void ADT_Read (uint8_t Reg, uint8_t *Buffer, size_t len);

#endif /* INC_ADT_TEMP_H_ */
