/****************************************************************************
 * arch/arm/src/stm32wb/hardware/stm32wb_exti.h
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
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_STM32WB_HARDWARE_STM32WB_EXTI_H
#define __ARCH_ARM_SRC_STM32WB_HARDWARE_STM32WB_EXTI_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "chip.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register Offsets *********************************************************/

#define STM32WB_EXTI_RTSR1_OFFSET   0x0000  /* Rising trigger selection register 1 */
#define STM32WB_EXTI_FTSR1_OFFSET   0x0004  /* Falling trigger selection register 1 */
#define STM32WB_EXTI_SWIER1_OFFSET  0x0008  /* Software interrupt event register 1 */
#define STM32WB_EXTI_PR1_OFFSET     0x000c  /* Pending register 1 */
#define STM32WB_EXTI_RTSR2_OFFSET   0x0020  /* Rising trigger selection register 2 */
#define STM32WB_EXTI_FTSR2_OFFSET   0x0024  /* Falling trigger selection register 2 */
#define STM32WB_EXTI_SWIER2_OFFSET  0x0028  /* Software interrupt event register 2 */
#define STM32WB_EXTI_PR2_OFFSET     0x002c  /* Pending register 2 */
#define STM32WB_EXTI_IMR1_OFFSET    0x0080  /* Wakeup with interrupt mask register 1 */
#define STM32WB_EXTI_EMR1_OFFSET    0x0084  /* Wakeup with event mask register  1 */
#define STM32WB_EXTI_IMR2_OFFSET    0x0090  /* Wakeup with interrupt mask register 2 */
#define STM32WB_EXTI_EMR2_OFFSET    0x0094  /* Wakeup with event mask register 2 */
#define STM32WB_EXTI_C2IMR1_OFFSET  0x00c0  /* CPU2 wakeup with interrupt mask register 1 */
#define STM32WB_EXTI_C2EMR1_OFFSET  0x00c4  /* CPU2 wakeup with event mask register 1 */
#define STM32WB_EXTI_C2IMR2_OFFSET  0x00d0  /* CPU2 wakeup with interrupt mask register 2 */
#define STM32WB_EXTI_C2EMR2_OFFSET  0x00d4  /* CPU2 wakeup with event mask register 2 */

/* Register Addresses *******************************************************/

#define STM32WB_EXTI_RTSR1          (STM32WB_EXTI_BASE + STM32WB_EXTI_RTSR1_OFFSET)
#define STM32WB_EXTI_FTSR1          (STM32WB_EXTI_BASE + STM32WB_EXTI_FTSR1_OFFSET)
#define STM32WB_EXTI_SWIER1         (STM32WB_EXTI_BASE + STM32WB_EXTI_SWIER1_OFFSET)
#define STM32WB_EXTI_PR1            (STM32WB_EXTI_BASE + STM32WB_EXTI_PR1_OFFSET)
#define STM32WB_EXTI_RTSR2          (STM32WB_EXTI_BASE + STM32WB_EXTI_RTSR2_OFFSET)
#define STM32WB_EXTI_FTSR2          (STM32WB_EXTI_BASE + STM32WB_EXTI_FTSR2_OFFSET)
#define STM32WB_EXTI_SWIER2         (STM32WB_EXTI_BASE + STM32WB_EXTI_SWIER2_OFFSET)
#define STM32WB_EXTI_PR2            (STM32WB_EXTI_BASE + STM32WB_EXTI_PR2_OFFSET)
#define STM32WB_EXTI_IMR1           (STM32WB_EXTI_BASE + STM32WB_EXTI_IMR1_OFFSET)
#define STM32WB_EXTI_EMR1           (STM32WB_EXTI_BASE + STM32WB_EXTI_EMR1_OFFSET)
#define STM32WB_EXTI_IMR2           (STM32WB_EXTI_BASE + STM32WB_EXTI_IMR2_OFFSET)
#define STM32WB_EXTI_EMR2           (STM32WB_EXTI_BASE + STM32WB_EXTI_EMR2_OFFSET)
#define STM32WB_EXTI_C2IMR1         (STM32WB_EXTI_BASE + STM32WB_EXTI_C2IMR1_OFFSET)
#define STM32WB_EXTI_C2EMR1         (STM32WB_EXTI_BASE + STM32WB_EXTI_C2EMR1_OFFSET)
#define STM32WB_EXTI_C2IMR2         (STM32WB_EXTI_BASE + STM32WB_EXTI_C2IMR2_OFFSET)
#define STM32WB_EXTI_C2EMR2         (STM32WB_EXTI_BASE + STM32WB_EXTI_C2EMR2_OFFSET)

/* Register Bitfield Definitions ********************************************/

/* EXTI lines > 15 peripheral event sources */

#define EXTI_PVD_LINE               (1 << 16) /* EXTI line 16: PVD output */
#define EXTI_RTC_ALARM              (1 << 17) /* EXTI line 17: RTC Alarm event */
#define EXTI_RTC_TAMPER             (1 << 18) /* EXTI line 18: RTC Tamper, TimeStamp, LSE CSS interrupt */
#define EXTI_RTC_WAKEUP             (1 << 19) /* EXTI line 19: RTC Wakeup event */
#define EXTI_COMP1                  (1 << 20) /* EXTI line 20: COMP1 (comparator) output */
#define EXTI_COMP2                  (1 << 21) /* EXTI line 21: COMP2 (comparator) output */
#define EXTI_I2C1                   (1 << 22) /* EXTI line 22: I2C1 wakeup */
#define EXTI_I2C3                   (1 << 23) /* EXTI line 23: I2C3 wakeup */
#define EXTI_USART1                 (1 << 24) /* EXTI line 24: USART1 wakeup */
#define EXTI_LPUART1                (1 << 25) /* EXTI line 25: LPUART1 wakeup */
#define EXTI_LPTIM1                 (1 << 29) /* EXTI line 29: LPTIM1 */
#define EXTI_LPTIM2                 (1 << 30) /* EXTI line 30: LPTIM2 */
#define EXTI_PVM1                   (1 << 31) /* EXTI line 31: PVM1 wakeup */
#define EXTI_PVM3                   (1 << 33) /* EXTI line 33: PVM2 wakeup */
#define EXTI_IPCC                   (1 << 36) /* EXTI line 36: IPCC wakeup */
#define EXTI_C2IPCC                 (1 << 37) /* EXTI line 37: IPCC CPU2 wakeup */
#define EXTI_HSEMI0                 (1 << 38) /* EXTI line 38: HSEM interrupt 0 */
#define EXTI_HSEMI1                 (1 << 39) /* EXTI line 39: CPU2 HSEM interrupt 1 */
#define EXTI_C2SEV                  (1 << 40) /* EXTI line 40: CPU2 SEV line */
#define EXTI_C1SEV                  (1 << 41) /* EXTI line 41: CPU1 SEV line */
#define EXTI_FLASH                  (1 << 42) /* EXTI line 42: Flash ECC and global interrupts */
#define EXTI_LCD                    (1 << 43) /* EXTI line 43: LCD wakeup */
#define EXTI_HSECSS                 (1 << 44) /* EXTI line 44: RCC HSE CSS interrupts */
#define EXTI_BLE                    (1 << 45) /* EXTI line 45: BLE and RADIO interrupts */
#define EXTI_802                    (1 << 46) /* EXTI line 46: 802.15.14 Int0 and Int1 interrupts */
#define EXTI_DBG                    (1 << 48) /* EXTI line 48: Debug power up request wakeup */

/* Rising trigger selection registers */

#define EXTI_RTSR1_SHIFT            (0)       /* Rising trigger event enable for line n = 0..21, 31 */
#define EXTI_RTSR1_RT(n)            (1 << (n))
#define EXTI_RTSR1_MASK             (0x803fffff << EXTI_RTSR1_SHIFT)

#define EXTI_RTSR2_SHIFT            (0)       /* Rising trigger event enable for line n = 1, 8, 9 */
#define EXTI_RTSR2_RT(n)            (1 << ((n) - 32))
#define EXTI_RTSR2_MASK             (0x302 << EXTI_RTSR2_SHIFT)

/* Falling trigger selection registers */

#define EXTI_FTSR1_SHIFT            (0)       /* Falling trigger event enable for line n = 0..21, 31 */
#define EXTI_FTSR1_FT(n)            (1 << (n))
#define EXTI_FTSR1_MASK             (0x803fffff << EXTI_FTSR1_SHIFT)

#define EXTI_FTSR2_SHIFT            (0)       /* Falling trigger event enable for line n = 1, 8, 9 */
#define EXTI_FTSR2_FT(n)            (1 << ((n) - 32))
#define EXTI_FTSR2_MASK             (0x302 << EXTI_FTSR2_SHIFT)

/* Software interrupt event registers */

#define EXTI_SWIER1_SHIFT           (0)       /* Software interrupt on line n = 0..21, 31 */
#define EXTI_SWIER1_SWI(n)          (1 << (n))
#define EXTI_SWIER1_MASK            (0x803fffff << EXTI_SWIER1_SHIFT)

#define EXTI_SWIER2_SHIFT           (0)       /* Software interrupt on line n = 1, 8, 9 */
#define EXTI_SWIER2_SWI(n)          (1 << ((n) - 32))
#define EXTI_SWIER2_MASK            (0x302 << EXTI_SWIER2_SHIFT)

/* Pending registers */

#define EXTI_PR1_SHIFT              (0)       /* Pending interrupt flag on line n = 0..21, 31 */
#define EXTI_PR1_PIF(n)             (1 << (n))
#define EXTI_PR1_MASK               (0x803fffff << EXTI_PR1_SHIFT)

#define EXTI_PR2_SHIFT              (0)       /* Pending interrupt flag on line n = 1, 8, 9 */
#define EXTI_PR2_PIF(n)             (1 << ((n) - 32))
#define EXTI_PR2_MASK               (0x302 << EXTI_PR2_SHIFT)

/* Interrupt mask registers */

#define EXTI_IMR1_SHIFT             (0)       /* Interrupt mask on line n = 0..31 */
#define EXTI_IMR1_IM(n)             (1 << (n))
#define EXTI_IMR1_MASK              (0xffffffff << EXTI_IMR1_SHIFT)

#define EXTI_IMR2_SHIFT             (0)       /* Interrupt mask on line n = 32..48 */
#define EXTI_IMR2_IM(n)             (1 << ((n) - 32))
#define EXTI_IMR2_MASK              (0x1ffff << EXTI_IMR2_SHIFT)

/* Event mask registers */

#define EXTI_EMR1_SHIFT             (0)       /* Event mask on line n = 0..15, 17..21 */
#define EXTI_EMR1_EM(n)             (1 << (n))
#define EXTI_EMR1_MASK              (0x3effff << EXTI_EMR1_SHIFT)

#define EXTI_EMR2_SHIFT             (0)       /* Event mask on line n = 40, 41 */
#define EXTI_EMR2_EM(n)             (1 << ((n) - 32))
#define EXTI_EMR2_MASK              (300 << EXTI_EMR2_SHIFT)

/* CPU2 Interrupt mask registers */

#define EXTI_C2IMR1_SHIFT           (0)       /* CPU2 Interrupt mask on line n = 0..31 */
#define EXTI_C2IMR1_IM(n)           (1 << (n))
#define EXTI_C2IMR1_MASK            (0xffffffff << EXTI_C2IMR1_SHIFT)

#define EXTI_C2IMR2_SHIFT           (0)       /* CPU2 Interrupt mask on line n = 32..48 */
#define EXTI_C2IMR2_IM(n)           (1 << ((n) - 32))
#define EXTI_C2IMR2_MASK            (0x1ffff << EXTI_C2IMR2_SHIFT)

/* CPU2 Event mask registers */

#define EXTI_C2EMR1_SHIFT           (0)       /* CPU2 Event mask on line n = 0..15, 17..21 */
#define EXTI_C2EMR1_EM(n)           (1 << (n))
#define EXTI_C2EMR1_MASK            (0x3effff << EXTI_C2EMR1_SHIFT)

#define EXTI_C2EMR2_SHIFT           (0)       /* CPU2 Event mask on line n = 40, 41 */
#define EXTI_C2EMR2_EM(n)           (1 << ((n) - 32))
#define EXTI_C2EMR2_MASK            (300 << EXTI_C2EMR2_SHIFT)

#endif /* __ARCH_ARM_SRC_STM32WB_HARDWARE_STM32WB_EXTI_H */
