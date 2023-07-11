/*
 * kspcontroller_descriptor.c
 *
 *  Created on: Jul 2, 2023
 *      Author: User
 */
#include <string.h>
#include <kspcontroller.h>
#include "stm32f1xx_hal.h"

kspControllerHIDStruct kspController;
extern ADC_HandleTypeDef hadc1;

uint32_t adcSamples[8];

static void updateButtonStates(void);
static void updateLeftJoystick(void);
static void updateRightJoystick(void);

void kspcontroller_init(void)
{
	kspcontroller_resetToZero();
}

void kspcontroller_resetToZero(void)
{
	memset(&kspController, 0, sizeof(kspController));
	for (uint8_t i = 0; i < 8; i++)
	{
		adcSamples[i] = 0;
	}
}

void kspcontroller_setToCentre(void)
{
	memset(&kspController, 0, sizeof(kspController));
	kspController.joyLx = 2047;
	kspController.joyLy = 2047;
	kspController.joyLz = 2047;
	kspController.joyRx = 2047;
	kspController.joyRy = 2047;
	kspController.joyRz = 2047;
}

void kspcontroller_update(void)
{
	HAL_ADC_Start_DMA(&hadc1, adcSamples, 8); // start adc in DMA mode
	updateButtonStates();
	updateLeftJoystick();
	updateRightJoystick();
}

static void updateButtonStates(void)
{

}

static void updateLeftJoystick(void)
{
	kspController.joyLx = adcSamples[1] & 0x0FFF;
	kspController.joyLy = adcSamples[2] & 0x0FFF;
	kspController.joyLz = adcSamples[3] & 0x0FFF;
}

static void updateRightJoystick(void)
{
	kspController.joyRx = adcSamples[5] & 0x0FFF;
	kspController.joyRy = adcSamples[6] & 0x0FFF;
	kspController.joyRz = adcSamples[7] & 0x0FFF;
}
