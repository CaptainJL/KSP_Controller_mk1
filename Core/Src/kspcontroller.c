/*
 * kspcontroller_descriptor.c
 *
 *  Created on: Jul 2, 2023
 *      Author: User
 */
#include <kspcontroller.h>

kspControllerKeysHID kspcontroller_keys;
kspControllerJoyHID kspcontroller_leftjoy;
kspControllerJoyHID kspcontroller_rightjoy;

void kspcontroller_init(void)
{
	kspcontroller_resetToZero();
}

void kspcontroller_resetToZero(void)
{
	kspcontroller_keys.MODIFIER = 0;
	kspcontroller_keys.RESERVED = 0;
	kspcontroller_keys.KEYCODE1 = 0;
	kspcontroller_keys.KEYCODE2 = 0;
	kspcontroller_keys.KEYCODE3 = 0;
	kspcontroller_keys.KEYCODE4 = 0;
	kspcontroller_keys.KEYCODE5 = 0;
	kspcontroller_keys.KEYCODE6 = 0;
}
