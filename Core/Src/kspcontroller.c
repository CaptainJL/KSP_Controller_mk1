/*
 * kspcontroller_descriptor.c
 *
 *  Created on: Jul 2, 2023
 *      Author: User
 */
#include <kspcontroller.h>

kspControllerHID kspcontrollerhid;

void kspcontroller_init(void)
{
	kspcontroller_resetToZero();
}

void kspcontroller_resetToZero(void)
{
	kspcontrollerhid.mx0 = 0;
	kspcontrollerhid.mx1 = 0;
	kspcontrollerhid.mx2 = 0;
	kspcontrollerhid.mx3 = 0;
	kspcontrollerhid.mx4 = 0;
	kspcontrollerhid.mx5 = 0;
	kspcontrollerhid.mx6 = 0;
	kspcontrollerhid.mx7 = 0;
	kspcontrollerhid.mx8 = 0;
	kspcontrollerhid.mx9 = 0;
	kspcontrollerhid.joyLX = 0;
	kspcontrollerhid.joyLY = 0;
	kspcontrollerhid.joyLZ = 0;
	kspcontrollerhid.joyLB = 0;
	kspcontrollerhid.joyRX = 0;
	kspcontrollerhid.joyRY = 0;
	kspcontrollerhid.joyRZ = 0;
	kspcontrollerhid.joyRB = 0;
	kspcontrollerhid.slideL = 0;
	kspcontrollerhid.slideR = 0;
}
