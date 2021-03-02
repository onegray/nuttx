/****************************************************************************
 * arch/arm/src/stm32wb/stm32wb_rcc.h
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


#ifndef __ARCH_ARM_SRC_STM32WB_STM32WB_RCC_H
#define __ARCH_ARM_SRC_STM32WB_STM32WB_RCC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include "arm_arch.h"
#include "chip.h"

#if defined(CONFIG_ARCH_CHIP_STM32WB55RG)
#  include "hardware/stm32wbx5xx_rcc.h"
#else
#  error "Unsupported STM32WB chip"
#endif

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#ifndef __ASSEMBLY__

#undef EXTERN
#if defined(__cplusplus)
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Public Data
 ****************************************************************************/

/* This symbol references the Cortex-M4 vector table (as positioned by the linker
 * script, ld.script or ld.script.dfu.  The standard location for the vector table is
 * at the beginning of FLASH at address 0x0800:0000.  If we are using the STMicro DFU
 * bootloader, then the vector table will be offset to a different location in FLASH
 * and we will need to set the NVIC vector location to this alternative location.
 */

#if defined(__ICCARM__)
/* _vectors replaced on __vector_table for IAR C-SPY Simulator */

extern uint32_t __vector_table[];
#else
extern uint32_t _vectors[];
#endif

/****************************************************************************
 * Inline Functions
 ****************************************************************************/

/****************************************************************************
 * Name: stm32wb_mcoconfig
 *
 * Description:
 *   Selects the clock source to output and clock divider on MC pin (PA8/PA15/PB6).
 *   The pin should be configured in a proper alternate function mode.
 *
 * Input Parameters:
 *   source - One of the definitions for the RCC_CFGR_MCOSEL
 *   divider - One of the definitions for the RCC_CFGR_MCOPRE
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

static inline void stm32wb_mcoconfig(uint32_t source, uint32_t divider)
{
  uint32_t regval;

  regval = getreg32(STM32WB_RCC_CFGR);

    /* Set MCO source */

  regval &= ~(RCC_CFGR_MCOSEL_MASK);
  regval |= (source & RCC_CFGR_MCOSEL_MASK);

    /* Set MCO divider */

  regval &= ~(RCC_CFGR_MCOPRE_MASK);
  regval |= (divider & RCC_CFGR_MCOPRE_MASK);
  putreg32(regval, STM32WB_RCC_CFGR);
}

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

/****************************************************************************
 * Name: stm32wb_clockconfig
 *
 * Description:
 *   Called to establish the clock settings based on the values in board.h.  This
 *   function (by default) will reset most everything, enable the PLL, and enable
 *   peripheral clocking for all periperipherals enabled in the NuttX configuration
 *   file.
 *
 *   If CONFIG_ARCH_BOARD_STM32WB_CUSTOM_CLOCKCONFIG is defined, then clocking will
 *   be enabled by an externally provided, board-specific function called
 *   stm32wb_board_clockconfig().
 *
 * Input Parameters:
 *   None
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

void stm32wb_clockconfig(void);

/****************************************************************************
 * Name: stm32wb_board_clockconfig
 *
 * Description:
 *   Any STM32WB board may replace the "standard" board clock configuration logic with
 *   its own, custom clock configuration logic.
 *
 ****************************************************************************/

#ifdef CONFIG_ARCH_BOARD_STM32WB_CUSTOM_CLOCKCONFIG
void stm32wb_board_clockconfig(void);
#endif

/****************************************************************************
 * Name: stm32wb_clockenable
 *
 * Description:
 *   Re-enable the clock and restore the clock settings based on settings in board.h.
 *   This function is only available to support low-power modes of operation:  When
 *   re-awakening from deep-sleep modes, it is necessary to re-enable/re-start the
 *   PLL
 *
 *   This functional performs a subset of the operations performed by
 *   stm32wb_clockconfig():  It does not reset any devices, and it does not reset the
 *   currently enabled peripheral clocks.
 *
 *   If CONFIG_ARCH_BOARD_STM32WB_CUSTOM_CLOCKCONFIG is defined, then clocking will
 *   be enabled by an externally provided, board-specific function called
 *   stm32wb_board_clockconfig().
 *
 * Input Parameters:
 *   None
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

#ifdef CONFIG_PM
void stm32wb_clockenable(void);
#endif

/****************************************************************************
 * Name: stm32wb_rcc_enablelse
 *
 * Description:
 *   Enable the External Low-Speed (LSE) Oscillator.
 *
 * Input Parameters:
 *   None
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

void stm32wb_rcc_enablelse(void);

/****************************************************************************
 * Name: stm32wb_rcc_enablelsi
 *
 * Description:
 *   Enable the Internal Low-Speed (LSI) RC Oscillator.
 *
 ****************************************************************************/

void stm32wb_rcc_enablelsi(void);

/****************************************************************************
 * Name: stm32wb_rcc_disablelsi
 *
 * Description:
 *   Disable the Internal Low-Speed (LSI) RC Oscillator.
 *
 ****************************************************************************/

void stm32wb_rcc_disablelsi(void);

#undef EXTERN
#if defined(__cplusplus)
}
#endif
#endif /* __ASSEMBLY__ */
#endif /* __ARCH_ARM_SRC_STM32WB_STM32WB_RCC_H */
