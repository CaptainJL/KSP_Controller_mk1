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
	uint8_t MODIFIER;
	uint8_t RESERVED;
	uint8_t KEYCODE1;
	uint8_t KEYCODE2;
	uint8_t KEYCODE3;
	uint8_t KEYCODE4;
	uint8_t KEYCODE5;
	uint8_t KEYCODE6;
} kspControllerKeysHID;

typedef struct
{
	uint8_t mx0;
	uint8_t mx1;

} kspControllerJoyHID;

void kspcontroller_init(void);
void kspcontroller_resetToZero(void);

#endif /* INC_KSPCONTROLLER_H_ */
