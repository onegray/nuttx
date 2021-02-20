/************************************************************************************
 * arch/arm/include/stm32wb/chip.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ************************************************************************************/

#ifndef __ARCH_ARM_INCLUDE_STM32WB_CHIP_H
#define __ARCH_ARM_INCLUDE_STM32WB_CHIP_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/

#if defined (CONFIG_ARCH_CHIP_STM32WB55RG)     /* VFQFPN68 package, 1024Kb FLASH, 256KiB SRAM */
#  define STM32WB_NFSMC                    0   /* No FSMC */
#  define STM32WB_NATIM                    1   /* One advanced timers TIM1 */
#  define STM32WB_NGTIM32                  1   /* 32-bit general timers TIM2 with DMA */
#  define STM32WB_NGTIM16                  2   /* 16-bit general timers TIM16-17 with DMA */
#  define STM32WB_NBTIM                    0   /* No basic timers */
#  define STM32WB_NLPTIM                   2   /* Two low-power timers, LPTIM1-2 */
#  define STM32WB_NGTIMNDMA                0   /* No general timers without DMA */
#  define STM32WB_NDMA                     2   /* DMA1-2 with 7 channels each */
#  define STM32WB_NSPI                     3   /* SPI1-2, QSPI */
#  define STM32WB_NI2S                     1   /* SAI1 (dual channel high quality audio) */
#  define STM32WB_NUSART                   2   /* USART1, LPUART1 */
#  define STM32WB_NI2C                     2   /* I2C1, I2C3 */
#  define STM32WB_NCAN                     0   /* No CAN */
#  define STM32WB_NSDIO                    0   /* One SDIO interface */
#  define STM32WB_NLCD                     1   /* LCD 4x44, 8x40 */
#  define STM32WB_NUSBOTG                  1   /* USB 2.0 FS */
#  define STM32WB_NGPIO                    72  /* GPIOA-E,H */
#  define STM32WB_NADC                     1   /* ADC1, 19-channels */
#  define STM32WB_NDAC                     0   /* No DAC */
#  define STM32WB_NCMP                     2   /* (2) Comparators */
#  define STM32WB_NCAPSENSE                18  /* Capacitive sensing channels */
#  define STM32WB_NCRC                     1   /* CRC */
#  define STM32WB_NETHERNET                0   /* No ethernet */
#  define STM32WB_NRNG                     1   /* Random number generator (RNG) */
#  define STM32WB_NDCMI                    0   /* No digital camera interface (DCMI) */
#else
#  error "Unsupported STM32WB chip"
#endif

#if defined (CONFIG_ARCH_CHIP_STM32WB55RG)
#  define STM32WB_SRAM1_SIZE       (192*1024)  /* 192Kb SRAM1 on AHB bus Matrix */
#  define STM32WB_SRAM2A_SIZE      (32*1024)   /* 32Kb  SRAM2A on AHB bus Matrix */
#  define STM32WB_SRAM2B_SIZE      (32*1024)   /* 32Kb  SRAM2B on AHB bus Matrix */
#else
#  error "Unsupported STM32WB chip"
#endif

/* NVIC priority levels *************************************************************/
/* 16 Programmable interrupt levels */

#define NVIC_SYSH_PRIORITY_MIN     0xf0 /* All bits set in minimum priority */
#define NVIC_SYSH_PRIORITY_DEFAULT 0x80 /* Midpoint is the default */
#define NVIC_SYSH_PRIORITY_MAX     0x00 /* Zero is maximum priority */
#define NVIC_SYSH_PRIORITY_STEP    0x10 /* Four bits of interrupt priority used */

#endif /* __ARCH_ARM_INCLUDE_STM32WB_CHIP_H */
