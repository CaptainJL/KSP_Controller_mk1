/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : usbd_custom_hid_if.c
  * @version        : v2.0_Cube
  * @brief          : USB Device Custom HID interface file.
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

/* Includes ------------------------------------------------------------------*/
#include "usbd_custom_hid_if.h"

/* USER CODE BEGIN INCLUDE */

/* USER CODE END INCLUDE */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/

/* USER CODE END PV */

/** @addtogroup STM32_USB_OTG_DEVICE_LIBRARY
  * @brief Usb device.
  * @{
  */

/** @addtogroup USBD_CUSTOM_HID
  * @{
  */

/** @defgroup USBD_CUSTOM_HID_Private_TypesDefinitions USBD_CUSTOM_HID_Private_TypesDefinitions
  * @brief Private types.
  * @{
  */

/* USER CODE BEGIN PRIVATE_TYPES */

/* USER CODE END PRIVATE_TYPES */

/**
  * @}
  */

/** @defgroup USBD_CUSTOM_HID_Private_Defines USBD_CUSTOM_HID_Private_Defines
  * @brief Private defines.
  * @{
  */

/* USER CODE BEGIN PRIVATE_DEFINES */

/* USER CODE END PRIVATE_DEFINES */

/**
  * @}
  */

/** @defgroup USBD_CUSTOM_HID_Private_Macros USBD_CUSTOM_HID_Private_Macros
  * @brief Private macros.
  * @{
  */

/* USER CODE BEGIN PRIVATE_MACRO */

/* USER CODE END PRIVATE_MACRO */

/**
  * @}
  */

/** @defgroup USBD_CUSTOM_HID_Private_Variables USBD_CUSTOM_HID_Private_Variables
  * @brief Private variables.
  * @{
  */

/** Usb HID report descriptor. */
__ALIGN_BEGIN static uint8_t CUSTOM_HID_ReportDesc_FS[USBD_CUSTOM_HID_REPORT_DESC_SIZE] __ALIGN_END =
{
  /* USER CODE BEGIN 0 */
	/* Based on https://www.usb.org/sites/default/files/hut1_21_0.pdf */
	/* https://github.com/vostrenkov/EazyJoy/blob/master/Middlewares/ST/STM32_USB_Device_Library/Class/HID/Src/usbd_hid.c */

		/* 6 */
		0x05, 0x01,        // Usage Page (Generic Desktop Ctrls)
		0x09, 0x05,        // Usage (Game Pad = 0x05)
		0xA1, 0x01,        // Collection (Application)

		/* 30 */
		0x09, 0x01,        //   Usage (Pointer)
		0xA1, 0x00,        //   Collection (Physical)
		0x09, 0x30,        //     Usage (X)
		0x09, 0x31,        //     Usage (Y)
		0x09, 0x32,        //     Usage (X)
		0x15, 0x00,        //     Logical Minimum (0)
		0x26, 0xFF, 0x00,  //     Logical Maximum (255)
		0x35, 0x00,        //     Physical Minimum (0)
		0x46, 0xFF, 0x00,  //     Physical Maximum (255)
		0x66, 0x00, 0x00,  //     Unit (None)
		0x75, 0x08,        //     Report Size (8)
		0x95, 0x03,        //     Report Count (3)
		0x81, 0x02,        //     Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
		0xC0,              //   End Collection

		/* 30 */
		0x09, 0x01,        //   Usage (Pointer)
		0xA1, 0x00,        //   Collection (Physical)
		0x09, 0x33,        //     Usage (X)
		0x09, 0x34,        //     Usage (Y)
		0x09, 0x35,        //     Usage (Z)
		0x15, 0x00,        //     Logical Minimum (0)
		0x26, 0xFF, 0x00,  //     Logical Maximum (255)
		0x35, 0x00,        //     Physical Minimum (0)
		0x46, 0xFF, 0x00,  //     Physical Maximum (255)
		0x66, 0x00, 0x00,  //     Unit (None)
		0x75, 0x08,        //     Report Size (8)
		0x95, 0x03,        //     Report Count (3)
		0x81, 0x02,        //     Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
		0xC0,              //   End Collection

		/* 16 */
		0x05, 0x09,        //   Usage Page (Button)
		0x19, 0x01,        //   Usage Minimum (0x01)
		0x29, 0x0A,        //   Usage Maximum (0x0A)
		0x95, 0x0A,        //   Report Count (10)
		0x75, 0x01,        //   Report Size (1)
		0x81, 0x02,        //   Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
		0x95, 0x0A,        //   Report Count (10)
		0x81, 0x03,





//		0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
//	0x09, 0x04,                    // USAGE (Joystick)
//	0xa1, 0x01,                    // COLLECTION (Application)
		/* Throttle */
//		0x85, 0x01,        //   Report ID (1)
//		0x05, 0x02,                    //   USAGE_PAGE (Simulation Controls)
//		0x09, 0xbb,                    //   USAGE (Throttle)
//		0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
//		0x26, 0x00, 0x10,              //   LOGICAL_MAXIMUM (4096)
//		0x75, 0x10,                    //   REPORT_SIZE (16)
//		0x95, 0x01,                    //   REPORT_COUNT (1)
//		0x81, 0x02,                    //   INPUT (Data,Var,Abs)
//		0xc0,                          //   END_COLLECTION

		/* Joystick Left */
//		0x85, 0x02,        //   Report ID (2)
//		0x05, 0x01,                    //   USAGE_PAGE (Generic Desktop)
//		0x09, 0x01,                    //   USAGE (Pointer)
//		0xa1, 0x00,                    //   COLLECTION (Physical)
//		0x09, 0x30,                    //     USAGE (X)
//		0x09, 0x31,                    //     USAGE (Y)
//		0x09, 0x32,                    //     USAGE (Z)
//		0x15, 0x00,                    //     LOGICAL_MINIMUM (0)
//		0x26, 0x00, 0x10,              //     LOGICAL_MAXIMUM (4096)
//		0x75, 0x10,                    //     REPORT_SIZE (16)
//		0x95, 0x03,       			   //     REPORT_COUNT (x)
//		0x81, 0x02,                    //     INPUT (Data,Var,Abs)
//		0xc0,                          //   END_COLLECTION

		/* Joystick Right */
//		0x85, 0x03,        //   Report ID (3)
//		0x05, 0x01,                    //   USAGE_PAGE (Generic Desktop)
//		0x09, 0x01,                    //   USAGE (Pointer)
//		0xa1, 0x00,                    //   COLLECTION (Physical)
//		0x09, 0x33,                    //     USAGE (X)
//		0x09, 0x34,                    //     USAGE (Y)
//		0x09, 0x35,                    //     USAGE (Z)
//		0x15, 0x00,                    //     LOGICAL_MINIMUM (0)
//		0x26, 0x00, 0x10,              //     LOGICAL_MAXIMUM (4096)
//		0x75, 0x10,                    //     REPORT_SIZE (16)
//		0x95, 0x03,       			   //     REPORT_COUNT (x)
//		0x81, 0x02,                    //     INPUT (Data,Var,Abs)
//		0xc0,                          //   END_COLLECTION

		/* Buttons */
//		0x85, 0x04,        //   Report ID (4)
//		0x05, 0x09,                    //   USAGE_PAGE (Button)
//		0x19, 0x01,                    //   USAGE_MINIMUM (Button 1)
//		0x29, 0x0A,                    //   USAGE_MAXIMUM (Button 10)
//		0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
//		0x25, 0x01,                    //   LOGICAL_MAXIMUM (1)
//		0x75, 0x01,                    //   REPORT_SIZE (1)
//		0x95, 0x0A,        						 //   REPORT_COUNT (10)
//		0x81, 0x02,                    //   INPUT (Data,Var,Abs)

  /* USER CODE END 0 */
  0xC0    /*     END_COLLECTION	             */
};

/* USER CODE BEGIN PRIVATE_VARIABLES */

/* USER CODE END PRIVATE_VARIABLES */

/**
  * @}
  */

/** @defgroup USBD_CUSTOM_HID_Exported_Variables USBD_CUSTOM_HID_Exported_Variables
  * @brief Public variables.
  * @{
  */
extern USBD_HandleTypeDef hUsbDeviceFS;

/* USER CODE BEGIN EXPORTED_VARIABLES */

/* USER CODE END EXPORTED_VARIABLES */
/**
  * @}
  */

/** @defgroup USBD_CUSTOM_HID_Private_FunctionPrototypes USBD_CUSTOM_HID_Private_FunctionPrototypes
  * @brief Private functions declaration.
  * @{
  */

static int8_t CUSTOM_HID_Init_FS(void);
static int8_t CUSTOM_HID_DeInit_FS(void);
static int8_t CUSTOM_HID_OutEvent_FS(uint8_t event_idx, uint8_t state);

/**
  * @}
  */

USBD_CUSTOM_HID_ItfTypeDef USBD_CustomHID_fops_FS =
{
  CUSTOM_HID_ReportDesc_FS,
  CUSTOM_HID_Init_FS,
  CUSTOM_HID_DeInit_FS,
  CUSTOM_HID_OutEvent_FS
};

/** @defgroup USBD_CUSTOM_HID_Private_Functions USBD_CUSTOM_HID_Private_Functions
  * @brief Private functions.
  * @{
  */

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Initializes the CUSTOM HID media low layer
  * @retval USBD_OK if all operations are OK else USBD_FAIL
  */
static int8_t CUSTOM_HID_Init_FS(void)
{
  /* USER CODE BEGIN 4 */
  return (USBD_OK);
  /* USER CODE END 4 */
}

/**
  * @brief  DeInitializes the CUSTOM HID media low layer
  * @retval USBD_OK if all operations are OK else USBD_FAIL
  */
static int8_t CUSTOM_HID_DeInit_FS(void)
{
  /* USER CODE BEGIN 5 */
  return (USBD_OK);
  /* USER CODE END 5 */
}

/**
  * @brief  Manage the CUSTOM HID class events
  * @param  event_idx: Event index
  * @param  state: Event state
  * @retval USBD_OK if all operations are OK else USBD_FAIL
  */
static int8_t CUSTOM_HID_OutEvent_FS(uint8_t event_idx, uint8_t state)
{
  /* USER CODE BEGIN 6 */
  return (USBD_OK);
  /* USER CODE END 6 */
}

/* USER CODE BEGIN 7 */
/**
  * @brief  Send the report to the Host
  * @param  report: The report to be sent
  * @param  len: The report length
  * @retval USBD_OK if all operations are OK else USBD_FAIL
  */
/*
static int8_t USBD_CUSTOM_HID_SendReport_FS(uint8_t *report, uint16_t len)
{
  return USBD_CUSTOM_HID_SendReport(&hUsbDeviceFS, report, len);
}
*/
/* USER CODE END 7 */

/* USER CODE BEGIN PRIVATE_FUNCTIONS_IMPLEMENTATION */

/* USER CODE END PRIVATE_FUNCTIONS_IMPLEMENTATION */
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

