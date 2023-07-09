/*
 * kspcontroller_descriptor.c
 *
 *  Created on: Jul 2, 2023
 *      Author: User
 */
#include <string.h>
#include <kspcontroller.h>

kspControllerHIDStruct kspController;

void kspcontroller_init(void)
{
	kspcontroller_resetToZero();
}

void kspcontroller_resetToZero(void)
{
	memset(&kspController, 0, sizeof(kspController));
}

void kspcontroller_setToCentre(void)
{
	memset(&kspController, 0, sizeof(kspController));
	kspController.joyLx = 128;
	kspController.joyLy = 128;
	kspController.joyLz = 128;
	kspController.joyRx = 128;
	kspController.joyRy = 128;
	kspController.joyRz = 128;
}

