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
	uint16_t joyLx;
	uint16_t joyLy;
	uint16_t joyLz;
	uint16_t joyRx;
	uint16_t joyRy;
	uint16_t joyRz;
	uint16_t throttle;
	uint8_t butMx0to7; /* Buttons (0-7) are mapped bit-wise (button 0 = bit 0, button 7 = bit 7 */
	uint8_t butMx8to9; /* Buttons (8-9) are mapped bit-wise (button 8 = bit 0, button 9 = bit 1 */
} kspControllerHIDStruct;

void kspcontroller_init(void);
void kspcontroller_resetToZero(void);
void kspcontroller_setToCentre(void);
void kspcontroller_update(void);

#endif /* INC_KSPCONTROLLER_H_ */
