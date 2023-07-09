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
	uint8_t joyLx;
	uint8_t joyLy;
	uint8_t joyLz;
	uint8_t joyRx;
	uint8_t joyRy;
	uint8_t joyRz;
	uint8_t butMx; /* Buttons are mapped bit-wise (button 0 = bit 0, button 7 = bit 7 */
} kspControllerHIDStruct;

void kspcontroller_init(void);
void kspcontroller_resetToZero(void);
void kspcontroller_setToCentre(void);

#endif /* INC_KSPCONTROLLER_H_ */
