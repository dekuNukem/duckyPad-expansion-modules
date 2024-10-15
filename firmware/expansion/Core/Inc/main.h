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
#include "stm32f0xx_hal.h"

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
#define USER_BUTTON_Pin GPIO_PIN_8
#define USER_BUTTON_GPIO_Port GPIOB
#define CH5_Pin GPIO_PIN_0
#define CH5_GPIO_Port GPIOF
#define CH4_Pin GPIO_PIN_1
#define CH4_GPIO_Port GPIOF
#define CH3_Pin GPIO_PIN_0
#define CH3_GPIO_Port GPIOA
#define CH2_Pin GPIO_PIN_1
#define CH2_GPIO_Port GPIOA
#define CH1_Pin GPIO_PIN_4
#define CH1_GPIO_Port GPIOA
#define CH6_Pin GPIO_PIN_5
#define CH6_GPIO_Port GPIOA
#define CH8_Pin GPIO_PIN_6
#define CH8_GPIO_Port GPIOA
#define SSTX_USERLED_Pin GPIO_PIN_7
#define SSTX_USERLED_GPIO_Port GPIOA
#define CH7_Pin GPIO_PIN_1
#define CH7_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
