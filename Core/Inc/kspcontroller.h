/*
 * kspcontroller_descriptor.h
 *
 *  Created on: Jul 2, 2023
 *      Author: User
 */

#ifndef INC_KSPCONTROLLER_H_
#define INC_KSPCONTROLLER_H_

#include <stdint.h>

typedef struct
{
	uint8_t mx0;
	uint8_t mx1;
	uint8_t mx2;
	uint8_t mx3;
	uint8_t mx4;
	uint8_t mx5;
	uint8_t mx6;
	uint8_t mx7;
	uint8_t mx8;
	uint8_t mx9;
	int16_t joyLX;
	int16_t joyLY;
	int16_t joyLZ;
	uint8_t joyLB;
	int16_t joyRX;
	int16_t joyRY;
	int16_t joyRZ;
	uint8_t joyRB;
	int16_t slideL;
	int16_t slideR;
} kspControllerHID;

void kspcontroller_init(void);
void kspcontroller_resetToZero(void);

#endif /* INC_KSPCONTROLLER_H_ */
