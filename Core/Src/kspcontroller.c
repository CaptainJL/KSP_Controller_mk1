/*
 * kspcontroller_descriptor.c
 *
 *  Created on: Jul 2, 2023
 *      Author: User
 */
#include "main.h"
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
	uint16_t gpioHigh = 0;
	gpioHigh |= (HAL_GPIO_ReadPin(CMX0_GPIO_Port, CMX0_Pin) << 0);
	gpioHigh |= (HAL_GPIO_ReadPin(CMX1_GPIO_Port, CMX1_Pin) << 1);
	gpioHigh |= (HAL_GPIO_ReadPin(CMX2_GPIO_Port, CMX2_Pin) << 2);
	gpioHigh |= (HAL_GPIO_ReadPin(CMX3_GPIO_Port, CMX3_Pin) << 3);
	gpioHigh |= (HAL_GPIO_ReadPin(CMX4_GPIO_Port, CMX4_Pin) << 4);
	gpioHigh |= (HAL_GPIO_ReadPin(CMX5_GPIO_Port, CMX5_Pin) << 5);
	gpioHigh |= (HAL_GPIO_ReadPin(CMX6_GPIO_Port, CMX6_Pin) << 6);
	gpioHigh |= (HAL_GPIO_ReadPin(CMX7_GPIO_Port, CMX7_Pin) << 7);
	gpioHigh |= (HAL_GPIO_ReadPin(CMX8_GPIO_Port, CMX8_Pin) << 8);
	gpioHigh |= (HAL_GPIO_ReadPin(CMX9_GPIO_Port, CMX9_Pin) << 9);
	gpioHigh |= (HAL_GPIO_ReadPin(JOY_L_B_GPIO_Port, JOY_L_B_Pin) << 10);
	gpioHigh |= (HAL_GPIO_ReadPin(JOY_R_B_GPIO_Port, JOY_R_B_Pin) << 11);
	kspController.buttons0to12 = gpioHigh;

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
