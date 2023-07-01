/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define JOY_R_B_Pin GPIO_PIN_0
#define JOY_R_B_GPIO_Port GPIOC
#define JOY_R_Z_Pin GPIO_PIN_1
#define JOY_R_Z_GPIO_Port GPIOC
#define JOY_R_Y_Pin GPIO_PIN_2
#define JOY_R_Y_GPIO_Port GPIOC
#define JOY_R_X_Pin GPIO_PIN_3
#define JOY_R_X_GPIO_Port GPIOC
#define SLIDE_POT_1_Pin GPIO_PIN_1
#define SLIDE_POT_1_GPIO_Port GPIOA
#define L_PIN_Pin GPIO_PIN_3
#define L_PIN_GPIO_Port GPIOA
#define SLIDE_POT_0_Pin GPIO_PIN_4
#define SLIDE_POT_0_GPIO_Port GPIOC
#define JOY_L_X_Pin GPIO_PIN_5
#define JOY_L_X_GPIO_Port GPIOC
#define JOY_L_Y_Pin GPIO_PIN_0
#define JOY_L_Y_GPIO_Port GPIOB
#define JOY_L_Z_Pin GPIO_PIN_1
#define JOY_L_Z_GPIO_Port GPIOB
#define JOY_L_B_Pin GPIO_PIN_2
#define JOY_L_B_GPIO_Port GPIOB
#define CMX4_Pin GPIO_PIN_12
#define CMX4_GPIO_Port GPIOB
#define CMX3_Pin GPIO_PIN_13
#define CMX3_GPIO_Port GPIOB
#define CMX2_Pin GPIO_PIN_14
#define CMX2_GPIO_Port GPIOB
#define CMX1_Pin GPIO_PIN_15
#define CMX1_GPIO_Port GPIOB
#define CMX0_Pin GPIO_PIN_6
#define CMX0_GPIO_Port GPIOC
#define CMX9_Pin GPIO_PIN_10
#define CMX9_GPIO_Port GPIOC
#define CMX8_Pin GPIO_PIN_11
#define CMX8_GPIO_Port GPIOC
#define CMX7_Pin GPIO_PIN_12
#define CMX7_GPIO_Port GPIOC
#define CMX6_Pin GPIO_PIN_3
#define CMX6_GPIO_Port GPIOB
#define CMX5_Pin GPIO_PIN_4
#define CMX5_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
