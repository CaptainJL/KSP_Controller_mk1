/*
 * kspcontroller_descriptor.h
 *
 *  Created on: Jul 2, 2023
 *      Author: User
 */

#ifndef INC_KSPCONTROLLER_H_
#define INC_KSPCONTROLLER_H_

#include <stdint.h>

//typedef struct
//{
//	uint8_t MODIFIER;
//	uint8_t RESERVED;
//	uint8_t KEYCODE1;
//	uint8_t KEYCODE2;
//	uint8_t KEYCODE3;
//	uint8_t KEYCODE4;
//	uint8_t KEYCODE5;
//	uint8_t KEYCODE6;
//} kspControllerKeysHID;
//
//typedef struct
//{
//	uint8_t mx0;
//	uint8_t mx1;
//
//} kspControllerJoyHID;

typedef struct
{
	uint8_t joyLx;
	uint8_t joyLy;
	uint8_t joyLz;
	uint8_t joyRx;
	uint8_t joyRy;
	uint8_t joyRz;
//	uint8_t mx0;
//	uint8_t mx1;
//	uint8_t mx2;
//	uint8_t mx3;
//	uint8_t mx4;
//	uint8_t mx5;
//	uint8_t mx6;
//	uint8_t mx7;
//	uint8_t mx8;
//	uint8_t mx9;

} kspControllerHIDStruct;

void kspcontroller_init(void);
void kspcontroller_resetToZero(void);
void kspcontroller_setToCentre(void);

#endif /* INC_KSPCONTROLLER_H_ */
