/************************************************************************************
 * arch/arm/src/stm32l4/hardware/stm32l4_tim.h
 *
 *   Copyright (C) 2009, 2011-2012 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *           dev@ziggurat29.com
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************/

#ifndef __ARCH_ARM_SRC_STM32L4_HARDWARE_STM32L4_TIM_H
#define __ARCH_ARM_SRC_STM32L4_HARDWARE_STM32L4_TIM_H

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/

/* Register Offsets *****************************************************************/

#define STM32L4_TIM_CR1_OFFSET      0x0000  /* Control register 1 */
#define STM32L4_TIM_CR2_OFFSET      0x0004  /* Control register 2 */
#define STM32L4_TIM_SMCR_OFFSET     0x0008  /* Slave mode control register (TIM1, TIM2) */
#define STM32L4_TIM_DIER_OFFSET     0x000c  /* DMA/Interrupt enable register */
#define STM32L4_TIM_SR_OFFSET       0x0010  /* Status register */
#define STM32L4_TIM_EGR_OFFSET      0x0014  /* Event generation register */
#define STM32L4_TIM_CCMR1_OFFSET    0x0018  /* Capture/compare mode register 1 */
#define STM32L4_TIM_CCMR2_OFFSET    0x001c  /* Capture/compare mode register 2 (TIM1, TIM2) */
#define STM32L4_TIM_CCER_OFFSET     0x0020  /* Capture/compare enable register */
#define STM32L4_TIM_CNT_OFFSET      0x0024  /* Counter */
#define STM32L4_TIM_PSC_OFFSET      0x0028  /* Prescaler */
#define STM32L4_TIM_ARR_OFFSET      0x002c  /* Auto-reload register */
#define STM32L4_TIM_RCR_OFFSET      0x0030  /* Repetition counter register (TIM1, TIM16/TIM17) */
#define STM32L4_TIM_CCR1_OFFSET     0x0034  /* Capture/compare register 1 */
#define STM32L4_TIM_CCR2_OFFSET     0x0038  /* Capture/compare register 2 (TIM1, TIM2) */
#define STM32L4_TIM_CCR3_OFFSET     0x003c  /* Capture/compare register 3 (TIM1, TIM2) */
#define STM32L4_TIM_CCR4_OFFSET     0x0040  /* Capture/compare register 4 (TIM1, TIM2) */
#define STM32L4_TIM_BDTR_OFFSET     0x0044  /* Break and dead-time register (TIM1, TIM16/17) */
#define STM32L4_TIM_DCR_OFFSET      0x0048  /* DMA control register */
#define STM32L4_TIM_DMAR_OFFSET     0x004c  /* DMA address for burst mode */
#define STM32L4_TIM_OR1_OFFSET      0x0050  /* Option register 1 */
#define STM32L4_TIM_CCMR3_OFFSET    0x0054  /* Capture/compare mode register 3 (TIM1) */
#define STM32L4_TIM_CCR5_OFFSET     0x0058  /* Capture/compare register 5 (TIM1) */
#define STM32L4_TIM_CCR6_OFFSET     0x005C  /* Capture/compare register 6 (TIM1) */
#define STM32L4_TIM_AF1_OFFSET      0x0060  /* Alternate function register 1 */
#define STM32L4_TIM_AF2_OFFSET      0x0064  /* Alternate function register 2 (TIM1) */
#define STM32L4_TIM_TISEL_OFFSET    0x0068  /* Input selector register */

/* Register Addresses ***************************************************************/

/* Advanced Timer TIM1 */

#define STM32L4_TIM1_CR1            (STM32L4_TIM1_BASE + STM32L4_TIM_CR1_OFFSET)
#define STM32L4_TIM1_CR2            (STM32L4_TIM1_BASE + STM32L4_TIM_CR2_OFFSET)
#define STM32L4_TIM1_SMCR           (STM32L4_TIM1_BASE + STM32L4_TIM_SMCR_OFFSET)
#define STM32L4_TIM1_DIER           (STM32L4_TIM1_BASE + STM32L4_TIM_DIER_OFFSET)
#define STM32L4_TIM1_SR             (STM32L4_TIM1_BASE + STM32L4_TIM_SR_OFFSET)
#define STM32L4_TIM1_EGR            (STM32L4_TIM1_BASE + STM32L4_TIM_EGR_OFFSET)
#define STM32L4_TIM1_CCMR1          (STM32L4_TIM1_BASE + STM32L4_TIM_CCMR1_OFFSET)
#define STM32L4_TIM1_CCMR2          (STM32L4_TIM1_BASE + STM32L4_TIM_CCMR2_OFFSET)
#define STM32L4_TIM1_CCER           (STM32L4_TIM1_BASE + STM32L4_TIM_CCER_OFFSET)
#define STM32L4_TIM1_CNT            (STM32L4_TIM1_BASE + STM32L4_TIM_CNT_OFFSET)
#define STM32L4_TIM1_PSC            (STM32L4_TIM1_BASE + STM32L4_TIM_PSC_OFFSET)
#define STM32L4_TIM1_ARR            (STM32L4_TIM1_BASE + STM32L4_TIM_ARR_OFFSET)
#define STM32L4_TIM1_RCR            (STM32L4_TIM1_BASE + STM32L4_TIM_RCR_OFFSET)
#define STM32L4_TIM1_CCR1           (STM32L4_TIM1_BASE + STM32L4_TIM_CCR1_OFFSET)
#define STM32L4_TIM1_CCR2           (STM32L4_TIM1_BASE + STM32L4_TIM_CCR2_OFFSET)
#define STM32L4_TIM1_CCR3           (STM32L4_TIM1_BASE + STM32L4_TIM_CCR3_OFFSET)
#define STM32L4_TIM1_CCR4           (STM32L4_TIM1_BASE + STM32L4_TIM_CCR4_OFFSET)
#define STM32L4_TIM1_BDTR           (STM32L4_TIM1_BASE + STM32L4_TIM_BDTR_OFFSET)
#define STM32L4_TIM1_DCR            (STM32L4_TIM1_BASE + STM32L4_TIM_DCR_OFFSET)
#define STM32L4_TIM1_DMAR           (STM32L4_TIM1_BASE + STM32L4_TIM_DMAR_OFFSET)
#define STM32L4_TIM1_OR1            (STM32L4_TIM1_BASE + STM32L4_TIM_OR1_OFFSET)
#define STM32L4_TIM1_CCMR3          (STM32L4_TIM1_BASE + STM32L4_TIM_CCMR3_OFFSET)
#define STM32L4_TIM1_CCR5           (STM32L4_TIM1_BASE + STM32L4_TIM_CCR5_OFFSET)
#define STM32L4_TIM1_CCR6           (STM32L4_TIM1_BASE + STM32L4_TIM_CCR6_OFFSET)
#define STM32L4_TIM1_AF1            (STM32L4_TIM1_BASE + STM32L4_TIM_AF1_OFFSET)
#define STM32L4_TIM1_AF2            (STM32L4_TIM1_BASE + STM32L4_TIM_AF2_OFFSET)
#define STM32L4_TIM1_TISEL          (STM32L4_TIM1_BASE + STM32L4_TIM_TISEL_OFFSET)

/* General 32-bit Timer TIM2 */

#define STM32L4_TIM2_CR1            (STM32L4_TIM2_BASE + STM32L4_TIM_CR1_OFFSET)
#define STM32L4_TIM2_CR2            (STM32L4_TIM2_BASE + STM32L4_TIM_CR2_OFFSET)
#define STM32L4_TIM2_SMCR           (STM32L4_TIM2_BASE + STM32L4_TIM_SMCR_OFFSET)
#define STM32L4_TIM2_DIER           (STM32L4_TIM2_BASE + STM32L4_TIM_DIER_OFFSET)
#define STM32L4_TIM2_SR             (STM32L4_TIM2_BASE + STM32L4_TIM_SR_OFFSET)
#define STM32L4_TIM2_EGR            (STM32L4_TIM2_BASE + STM32L4_TIM_EGR_OFFSET)
#define STM32L4_TIM2_CCMR1          (STM32L4_TIM2_BASE + STM32L4_TIM_CCMR1_OFFSET)
#define STM32L4_TIM2_CCMR2          (STM32L4_TIM2_BASE + STM32L4_TIM_CCMR2_OFFSET)
#define STM32L4_TIM2_CCER           (STM32L4_TIM2_BASE + STM32L4_TIM_CCER_OFFSET)
#define STM32L4_TIM2_CNT            (STM32L4_TIM2_BASE + STM32L4_TIM_CNT_OFFSET)
#define STM32L4_TIM2_PSC            (STM32L4_TIM2_BASE + STM32L4_TIM_PSC_OFFSET)
#define STM32L4_TIM2_ARR            (STM32L4_TIM2_BASE + STM32L4_TIM_ARR_OFFSET)
#define STM32L4_TIM2_CCR1           (STM32L4_TIM2_BASE + STM32L4_TIM_CCR1_OFFSET)
#define STM32L4_TIM2_CCR2           (STM32L4_TIM2_BASE + STM32L4_TIM_CCR2_OFFSET)
#define STM32L4_TIM2_CCR3           (STM32L4_TIM2_BASE + STM32L4_TIM_CCR3_OFFSET)
#define STM32L4_TIM2_CCR4           (STM32L4_TIM2_BASE + STM32L4_TIM_CCR4_OFFSET)
#define STM32L4_TIM2_DCR            (STM32L4_TIM2_BASE + STM32L4_TIM_DCR_OFFSET)
#define STM32L4_TIM2_DMAR           (STM32L4_TIM2_BASE + STM32L4_TIM_DMAR_OFFSET)
#define STM32L4_TIM2_OR1            (STM32L4_TIM2_BASE + STM32L4_TIM_OR1_OFFSET)
#define STM32L4_TIM2_AF1            (STM32L4_TIM2_BASE + STM32L4_TIM_AF1_OFFSET)
#define STM32L4_TIM2_TISEL          (STM32L4_TIM2_BASE + STM32L4_TIM_TISEL_OFFSET)

/* General Timers TIM16/TIM17 */

#define STM32L4_TIM16_CR1           (STM32L4_TIM16_BASE + STM32L4_TIM_CR1_OFFSET)
#define STM32L4_TIM16_CR2           (STM32L4_TIM16_BASE + STM32L4_TIM_CR2_OFFSET)
#define STM32L4_TIM16_DIER          (STM32L4_TIM16_BASE + STM32L4_TIM_DIER_OFFSET)
#define STM32L4_TIM16_SR            (STM32L4_TIM16_BASE + STM32L4_TIM_SR_OFFSET)
#define STM32L4_TIM16_EGR           (STM32L4_TIM16_BASE + STM32L4_TIM_EGR_OFFSET)
#define STM32L4_TIM16_CCMR1         (STM32L4_TIM16_BASE + STM32L4_TIM_CCMR1_OFFSET)
#define STM32L4_TIM16_CCER          (STM32L4_TIM16_BASE + STM32L4_TIM_CCER_OFFSET)
#define STM32L4_TIM16_CNT           (STM32L4_TIM16_BASE + STM32L4_TIM_CNT_OFFSET)
#define STM32L4_TIM16_PSC           (STM32L4_TIM16_BASE + STM32L4_TIM_PSC_OFFSET)
#define STM32L4_TIM16_ARR           (STM32L4_TIM16_BASE + STM32L4_TIM_ARR_OFFSET)
#define STM32L4_TIM16_RCR           (STM32L4_TIM16_BASE + STM32L4_TIM_RCR_OFFSET)
#define STM32L4_TIM16_CCR1          (STM32L4_TIM16_BASE + STM32L4_TIM_CCR1_OFFSET)
#define STM32L4_TIM16_BDTR          (STM32L4_TIM16_BASE + STM32L4_TIM_BDTR_OFFSET)
#define STM32L4_TIM16_DCR           (STM32L4_TIM16_BASE + STM32L4_TIM_DCR_OFFSET)
#define STM32L4_TIM16_DMAR          (STM32L4_TIM16_BASE + STM32L4_TIM_DMAR_OFFSET)
#define STM32L4_TIM16_OR1           (STM32L4_TIM16_BASE + STM32L4_TIM_OR1_OFFSET)
#define STM32L4_TIM16_AF1           (STM32L4_TIM16_BASE + STM32L4_TIM_AF1_OFFSET)
#define STM32L4_TIM16_TISEL         (STM32L4_TIM16_BASE + STM32L4_TIM_TISEL_OFFSET)

#define STM32L4_TIM17_CR1           (STM32L4_TIM17_BASE + STM32L4_TIM_CR1_OFFSET)
#define STM32L4_TIM17_CR2           (STM32L4_TIM17_BASE + STM32L4_TIM_CR2_OFFSET)
#define STM32L4_TIM17_DIER          (STM32L4_TIM17_BASE + STM32L4_TIM_DIER_OFFSET)
#define STM32L4_TIM17_SR            (STM32L4_TIM17_BASE + STM32L4_TIM_SR_OFFSET)
#define STM32L4_TIM17_EGR           (STM32L4_TIM17_BASE + STM32L4_TIM_EGR_OFFSET)
#define STM32L4_TIM17_CCMR1         (STM32L4_TIM17_BASE + STM32L4_TIM_CCMR1_OFFSET)
#define STM32L4_TIM17_CCER          (STM32L4_TIM17_BASE + STM32L4_TIM_CCER_OFFSET)
#define STM32L4_TIM17_CNT           (STM32L4_TIM17_BASE + STM32L4_TIM_CNT_OFFSET)
#define STM32L4_TIM17_PSC           (STM32L4_TIM17_BASE + STM32L4_TIM_PSC_OFFSET)
#define STM32L4_TIM17_ARR           (STM32L4_TIM17_BASE + STM32L4_TIM_ARR_OFFSET)
#define STM32L4_TIM17_RCR           (STM32L4_TIM17_BASE + STM32L4_TIM_RCR_OFFSET)
#define STM32L4_TIM17_CCR1          (STM32L4_TIM17_BASE + STM32L4_TIM_CCR1_OFFSET)
#define STM32L4_TIM17_BDTR          (STM32L4_TIM17_BASE + STM32L4_TIM_BDTR_OFFSET)
#define STM32L4_TIM17_DCR           (STM32L4_TIM17_BASE + STM32L4_TIM_DCR_OFFSET)
#define STM32L4_TIM17_DMAR          (STM32L4_TIM17_BASE + STM32L4_TIM_DMAR_OFFSET)
#define STM32L4_TIM17_OR1           (STM32L4_TIM17_BASE + STM32L4_TIM_OR1_OFFSET)
#define STM32L4_TIM17_AF1           (STM32L4_TIM17_BASE + STM32L4_TIM_AF1_OFFSET)
#define STM32L4_TIM17_TISEL         (STM32L4_TIM17_BASE + STM32L4_TIM_TISEL_OFFSET)

/* Digital Filter setting */

#define STM32WB_DF_NOFILT           (0x0) /* 0000: No filter */
#define STM32WB_DF_FCKINTn2         (0x1) /* 0001: fSAMPLING=fCK_INT, N=2 */
#define STM32WB_DF_FCKINTn4         (0x2) /* 0010: fSAMPLING=fCK_INT, N=4 */
#define STM32WB_DF_FCKINTn8         (0x3) /* 0011: fSAMPLING=fCK_INT, N=8 */
#define STM32WB_DF_FDTSd2n6         (0x4) /* 0100: fSAMPLING=fDTS/2, N=6 */
#define STM32WB_DF_FDTSd2n8         (0x5) /* 0101: fSAMPLING=fDTS/2, N=8 */
#define STM32WB_DF_FDTSd4n6         (0x6) /* 0110: fSAMPLING=fDTS/4, N=6 */
#define STM32WB_DF_FDTSd4n8         (0x7) /* 0111: fSAMPLING=fDTS/4, N=8 */
#define STM32WB_DF_FDTSd8n6         (0x8) /* 1000: fSAMPLING=fDTS/8, N=6 */
#define STM32WB_DF_FDTSd8n8         (0x9) /* 1001: fSAMPLING=fDTS/8, N=8 */
#define STM32WB_DF_FDTSd16n5        (0xa) /* 1010: fSAMPLING=fDTS/16, N=5 */
#define STM32WB_DF_FDTSd16n6        (0xb) /* 1011: fSAMPLING=fDTS/16, N=6 */
#define STM32WB_DF_FDTSd16n8        (0xc) /* 1100: fSAMPLING=fDTS/16, N=8 */
#define STM32WB_DF_FDTSd32n5        (0xd) /* 1101: fSAMPLING=fDTS/32, N=5 */
#define STM32WB_DF_FDTSd32n6        (0xe) /* 1110: fSAMPLING=fDTS/32, N=6 */
#define STM32WB_DF_FDTSd32n8        (0xf) /* 1111: fSAMPLING=fDTS/32, N=8 */

/* Control register 1 */

#define TIM1_CR1_CEN                (1 << 0)  /* Bit 0: Counter enable */
#define TIM1_CR1_UDIS               (1 << 1)  /* Bit 1: Update disable */
#define TIM1_CR1_URS                (1 << 2)  /* Bit 2: Update request source */
#define TIM1_CR1_OPM                (1 << 3)  /* Bit 3: One pulse mode */
#define TIM1_CR1_DIR                (1 << 4)  /* Bit 4: Counter direction */
#define TIM1_CR1_CMS_SHIFT          (5)       /* Bits 5-6: Center-aligned mode selection */
#define TIM1_CR1_CMS_MASK           (0x3 << TIM1_CR1_CMS_SHIFT)
#  define TIM1_CR1_EDGE             (0x0 << TIM1_CR1_CMS_SHIFT) /* 00: Edge-aligned mode */
#  define TIM1_CR1_CENTER1          (0x1 << TIM1_CR1_CMS_SHIFT) /* 01: Center-aligned mode 1 */
#  define TIM1_CR1_CENTER2          (0x2 << TIM1_CR1_CMS_SHIFT) /* 10: Center-aligned mode 2 */
#  define TIM1_CR1_CENTER3          (0x3 << TIM1_CR1_CMS_SHIFT) /* 11: Center-aligned mode 3 */
#define TIM1_CR1_ARPE               (1 << 7)  /* Bit 7: Auto-reload preload enable */
#define TIM1_CR1_CKD_SHIFT          (8)       /* Bits 8-9: Clock division */
#define TIM1_CR1_CKD_MASK           (0x3 << TIM1_CR1_CKD_SHIFT)
#  define TIM1_CR1_CKD_TCKINT       (0x0 << TIM1_CR1_CKD_SHIFT) /* 00: tDTS=tCK_INT */
#  define TIM1_CR1_CKD_2TCKINT      (0x1 << TIM1_CR1_CKD_SHIFT) /* 01: tDTS=2*tCK_INT */
#  define TIM1_CR1_CKD_4TCKINT      (0x2 << TIM1_CR1_CKD_SHIFT) /* 10: tDTS=4*tCK_INT */
#define TIM1_CR1_UIFREMAP           (1 << 11) /* Bit 11: UIF status bit remapping */

#define TIM2_CR1_CEN                (1 << 0)  /* Bit 0: Counter enable */
#define TIM2_CR1_UDIS               (1 << 1)  /* Bit 1: Update disable */
#define TIM2_CR1_URS                (1 << 2)  /* Bit 2: Update request source */
#define TIM2_CR1_OPM                (1 << 3)  /* Bit 3: One pulse mode */
#define TIM2_CR1_DIR                (1 << 4)  /* Bit 4: Counter direction */
#define TIM2_CR1_CMS_SHIFT          (5)       /* Bits 5-6: Center-aligned mode selection */
#define TIM2_CR1_CMS_MASK           (0x3 << TIM2_CR1_CMS_SHIFT)
#  define TIM2_CR1_EDGE             (0x0 << TIM2_CR1_CMS_SHIFT) /* 00: Edge-aligned mode */
#  define TIM2_CR1_CENTER1          (0x1 << TIM2_CR1_CMS_SHIFT) /* 01: Center-aligned mode 1 */
#  define TIM2_CR1_CENTER2          (0x2 << TIM2_CR1_CMS_SHIFT) /* 10: Center-aligned mode 2 */
#  define TIM2_CR1_CENTER3          (0x3 << TIM2_CR1_CMS_SHIFT) /* 11: Center-aligned mode 3 */
#define TIM2_CR1_ARPE               (1 << 7)  /* Bit 7: Auto-reload preload enable */
#define TIM2_CR1_CKD_SHIFT          (8)       /* Bits 8-9: Clock division */
#define TIM2_CR1_CKD_MASK           (0x3 << TIM2_CR1_CKD_SHIFT)
#  define TIM2_CR1_CKD_TCKINT       (0x0 << TIM2_CR1_CKD_SHIFT) /* 00: tDTS=tCK_INT */
#  define TIM2_CR1_CKD_2TCKINT      (0x1 << TIM2_CR1_CKD_SHIFT) /* 01: tDTS=2*tCK_INT */
#  define TIM2_CR1_CKD_4TCKINT      (0x2 << TIM2_CR1_CKD_SHIFT) /* 10: tDTS=4*tCK_INT */
#define TIM2_CR1_UIFREMAP           (1 << 11) /* Bit 11: UIF status bit remapping */

#define TIM16_CR1_CEN               (1 << 0)  /* Bit 0: Counter enable */
#define TIM16_CR1_UDIS              (1 << 1)  /* Bit 1: Update disable */
#define TIM16_CR1_URS               (1 << 2)  /* Bit 2: Update request source */
#define TIM16_CR1_OPM               (1 << 3)  /* Bit 3: One pulse mode */
#define TIM16_CR1_ARPE              (1 << 7)  /* Bit 7: Auto-reload preload enable */
#define TIM16_CR1_CKD_SHIFT         (8)       /* Bits 8-9: Clock division */
#define TIM16_CR1_CKD_MASK          (0x3 << TIM16_CR1_CKD_SHIFT)
#  define TIM16_CR1_CKD_TCKINT      (0x0 << TIM16_CR1_CKD_SHIFT) /* 00: tDTS=tCK_INT */
#  define TIM16_CR1_CKD_2TCKINT     (0x1 << TIM16_CR1_CKD_SHIFT) /* 01: tDTS=2*tCK_INT */
#  define TIM16_CR1_CKD_4TCKINT     (0x2 << TIM16_CR1_CKD_SHIFT) /* 10: tDTS=4*tCK_INT */
#define TIM16_CR1_UIFREMAP          (1 << 11) /* Bit 11: UIF status bit remapping */

#define TIM17_CR1_CEN               (1 << 0)  /* Bit 0: Counter enable */
#define TIM17_CR1_UDIS              (1 << 1)  /* Bit 1: Update disable */
#define TIM17_CR1_URS               (1 << 2)  /* Bit 2: Update request source */
#define TIM17_CR1_OPM               (1 << 3)  /* Bit 3: One pulse mode */
#define TIM17_CR1_ARPE              (1 << 7)  /* Bit 7: Auto-reload preload enable */
#define TIM17_CR1_CKD_SHIFT         (8)       /* Bits 8-9: Clock division */
#define TIM17_CR1_CKD_MASK          (0x3 << TIM17_CR1_CKD_SHIFT)
#  define TIM17_CR1_CKD_TCKINT      (0x0 << TIM17_CR1_CKD_SHIFT) /* 00: tDTS=tCK_INT */
#  define TIM17_CR1_CKD_2TCKINT     (0x1 << TIM17_CR1_CKD_SHIFT) /* 01: tDTS=2*tCK_INT */
#  define TIM17_CR1_CKD_4TCKINT     (0x2 << TIM17_CR1_CKD_SHIFT) /* 10: tDTS=4*tCK_INT */
#define TIM17_CR1_UIFREMAP          (1 << 11) /* Bit 11: UIF status bit remapping */





/* Control register 2 */

// tim1, 16, 17:
#define TIM_CR2_CCPC                (1 << 0)  /* Bit 0:  Capture/Compare Preloaded Control */
#define TIM_CR2_CCUS                (1 << 2)  /* Bit 2:  Capture/Compare Control Update Selection */
#define TIM_CR2_CCDS                (1 << 3)  /* Bit 3:  Capture/Compare DMA Selection */


// tim1, tim2
#define TIM_CR2_MMS_SHIFT           (4)       /* Bits 6-4: Master Mode Selection */
#define TIM_CR2_MMS_MASK            (7 << TIM_CR2_MMS_SHIFT)
#  define TIM_CR2_MMS_RESET         (0 << TIM_CR2_MMS_SHIFT) /* 000: Reset - TIMx_EGR UG bit is TRGO */
#  define TIM_CR2_MMS_ENABLE        (1 << TIM_CR2_MMS_SHIFT) /* 001: Enable - CNT_EN is TRGO */
#  define TIM_CR2_MMS_UPDATE        (2 << TIM_CR2_MMS_SHIFT) /* 010: Update event is TRGO */
#  define TIM_CR2_MMS_COMPP         (3 << TIM_CR2_MMS_SHIFT) /* 011: Compare Pulse - CC1IF flag */
#  define TIM_CR2_MMS_OC1REF        (4 << TIM_CR2_MMS_SHIFT) /* 100: Compare OC1REF is TRGO */
#  define TIM_CR2_MMS_OC2REF        (5 << TIM_CR2_MMS_SHIFT) /* 101: Compare OC2REF is TRGO */
#  define TIM_CR2_MMS_OC3REF        (6 << TIM_CR2_MMS_SHIFT) /* 110: Compare OC3REF is TRGO */
#  define TIM_CR2_MMS_OC4REF        (7 << TIM_CR2_MMS_SHIFT) /* 111: Compare OC4REF is TRGO */
#define TIM_CR2_TI1S                (1 << 7)  /* Bit 7: TI1 Selection */


// tim1, 16, 17:
#define TIM_CR2_OIS1                (1 << 8)  /* Bit 8:  Output Idle state 1 (OC1 output) */
#define TIM_CR2_OIS1N               (1 << 9)  /* Bit 9:  Output Idle state 1 (OC1N output) */


// tim1 only:
#define TIM_CR2_OIS2                (1 << 10) /* Bit 10: Output Idle state 2 (OC2 output) */
#define TIM_CR2_OIS2N               (1 << 11) /* Bit 11: Output Idle state 2 (OC2N output) */
#define TIM_CR2_OIS3                (1 << 12) /* Bit 12: Output Idle state 3 (OC3 output) */
#define TIM_CR2_OIS3N               (1 << 13) /* Bit 13: Output Idle state 3 (OC3N output) */
#define TIM_CR2_OIS4                (1 << 14) /* Bit 14: Output Idle state 4 (OC4 output) */
#define TIM_CR2_OIS5                (1 << 16) /* Bit 16: Output Idle state 5 (OC5 output) */
#define TIM_CR2_OIS6                (1 << 18) /* Bit 18: Output Idle state 6 (OC6 output) */
#define TIM_CR2_MMS2_SHIFT          (20)      /* Bits 20-23: Master Mode Selection 2 */
#define TIM_CR2_MMS2_MASK           (15 << TIM_CR2_MMS2_SHIFT)
#  define TIM_CR2_MMS2_RESET        (0 << TIM_CR2_MMS2_SHIFT)  /* 0000: Reset - TIMx_EGR UG bit is TRG9 */
#  define TIM_CR2_MMS2_ENABLE       (1 << TIM_CR2_MMS2_SHIFT)  /* 0001: Enable - CNT_EN is TRGO2 */
#  define TIM_CR2_MMS2_UPDATE       (2 << TIM_CR2_MMS2_SHIFT)  /* 0010: Update event is TRGH0 */
#  define TIM_CR2_MMS2_COMPP        (3 << TIM_CR2_MMS2_SHIFT)  /* 0010: Compare Pulse - CC1IF flag */
#  define TIM_CR2_MMS2_OC1REF       (4 << TIM_CR2_MMS2_SHIFT)  /* 0100: Compare OC1REF is TRGO2 */
#  define TIM_CR2_MMS2_OC2REF       (5 << TIM_CR2_MMS2_SHIFT)  /* 0101: Compare OC2REF is TRGO2 */
#  define TIM_CR2_MMS2_OC3REF       (6 << TIM_CR2_MMS2_SHIFT)  /* 0110: Compare OC3REF is TRGO2 */
#  define TIM_CR2_MMS2_OC4REF       (7 << TIM_CR2_MMS2_SHIFT)  /* 0111: Compare OC4REF is TRGO2 */
#  define TIM_CR2_MMS2_OC5REF       (8 << TIM_CR2_MMS2_SHIFT)  /* 1000: Compare OC5REF is TRGO2 */
#  define TIM_CR2_MMS2_OC6REF       (9 << TIM_CR2_MMS2_SHIFT)  /* 1001: Compare OC6REF is TRGO2 */
#  define TIM_CR2_MMS2_CMPOC4       (10 << TIM_CR2_MMS2_SHIFT) /* 1010: Compare pulse - OC4REF edge is TRGO2 */
#  define TIM_CR2_MMS2_CMPOC6       (11 << TIM_CR2_MMS2_SHIFT) /* 1011: Compare pulse - OC6REF edge is TRGO2 */
#  define TIM_CR2_MMS2_CMPOC4R6R    (12 << TIM_CR2_MMS2_SHIFT) /* 1100: Compare pulse - OC4REF/OC6REF rising */
#  define TIM_CR2_MMS2_CMPOC4R6F    (13 << TIM_CR2_MMS2_SHIFT) /* 1101: Compare pulse - OC4REF rising/OC6REF falling */
#  define TIM_CR2_MMS2_CMPOC5R6R    (14 << TIM_CR2_MMS2_SHIFT) /* 1110: Compare pulse - OC5REF/OC6REF rising */
#  define TIM_CR2_MMS2_CMPOC5R6F    (15 << TIM_CR2_MMS2_SHIFT) /* 1111: Compare pulse - OC5REF rising/OC6REF falling */





/* Register Bitfield Definitions ****************************************************/



/* Slave mode control register TIM1, TIM2 */

#define ATIM_SMCR_SMS_SHIFT       (0)       /* Bits 0-2: Slave mode selection */
#define ATIM_SMCR_SMS_MASK        (7 << ATIM_SMCR_SMS_SHIFT)
#  define ATIM_SMCR_DISAB         (0 << ATIM_SMCR_SMS_SHIFT) /* 000: Slave mode disabled */
#  define ATIM_SMCR_ENCMD1        (1 << ATIM_SMCR_SMS_SHIFT) /* 001: Encoder mode 1 */
#  define ATIM_SMCR_ENCMD2        (2 << ATIM_SMCR_SMS_SHIFT) /* 010: Encoder mode 2 */
#  define ATIM_SMCR_ENCMD3        (3 << ATIM_SMCR_SMS_SHIFT) /* 011: Encoder mode 3 */
#  define ATIM_SMCR_RESET         (4 << ATIM_SMCR_SMS_SHIFT) /* 100: Reset Mode */
#  define ATIM_SMCR_GATED         (5 << ATIM_SMCR_SMS_SHIFT) /* 101: Gated Mode */
#  define ATIM_SMCR_TRIGGER       (6 << ATIM_SMCR_SMS_SHIFT) /* 110: Trigger Mode */
#  define ATIM_SMCR_EXTCLK1       (7 << ATIM_SMCR_SMS_SHIFT) /* 111: External Clock Mode 1 */
#define ATIM_SMCR_OCCS            (1 << 3)  /* Bit 3: OCREF clear selection */
#define ATIM_SMCR_TS_SHIFT        (4)       /* Bits 4-6: Trigger selection */
#define ATIM_SMCR_TS_MASK         (7 << ATIM_SMCR_TS_SHIFT)
#  define ATIM_SMCR_ITR0          (0 << ATIM_SMCR_TS_SHIFT) /* 000: Internal trigger 0 (ITR0) */
#  define ATIM_SMCR_ITR1          (1 << ATIM_SMCR_TS_SHIFT) /* 001: Internal trigger 1 (ITR1) */
#  define ATIM_SMCR_ITR2          (2 << ATIM_SMCR_TS_SHIFT) /* 010: Internal trigger 2 (ITR2) */
#  define ATIM_SMCR_ITR3          (3 << ATIM_SMCR_TS_SHIFT) /* 011: Internal trigger 3 (ITR3) */
#  define ATIM_SMCR_T1FED         (4 << ATIM_SMCR_TS_SHIFT) /* 100: TI1 Edge Detector (TI1F_ED) */
#  define ATIM_SMCR_TI1FP1        (5 << ATIM_SMCR_TS_SHIFT) /* 101: Filtered Timer Input 1 (TI1FP1) */
#  define ATIM_SMCR_T12FP2        (6 << ATIM_SMCR_TS_SHIFT) /* 110: Filtered Timer Input 2 (TI2FP2) */
#  define ATIM_SMCR_ETRF          (7 << ATIM_SMCR_TS_SHIFT) /* 111: External Trigger input (ETRF) */
#define ATIM_SMCR_MSM             (1 << 7)  /* Bit 7: Master/slave mode */
#define ATIM_SMCR_ETF_SHIFT       (8)       /* Bits 8-11: External trigger filter */
#define ATIM_SMCR_ETF_MASK        (0x0f << ATIM_SMCR_ETF_SHIFT)
#  define ATIM_SMCR_NOFILT        (0 << ATIM_SMCR_ETF_SHIFT) /* 0000: No filter, sampling is done at fDTS */
#  define ATIM_SMCR_FCKINT2       (1 << ATIM_SMCR_ETF_SHIFT) /* 0001: fSAMPLING=fCK_INT, N=2 */
#  define ATIM_SMCR_FCKINT4       (2 << ATIM_SMCR_ETF_SHIFT) /* 0010: fSAMPLING=fCK_INT, N=4 */
#  define ATIM_SMCR_FCKINT8       (3 << ATIM_SMCR_ETF_SHIFT) /* 0011: fSAMPLING=fCK_INT, N=8 */
#  define ATIM_SMCR_FDTSd26       (4 << ATIM_SMCR_ETF_SHIFT) /* 0100: fSAMPLING=fDTS/2, N=6 */
#  define ATIM_SMCR_FDTSd28       (5 << ATIM_SMCR_ETF_SHIFT) /* 0101: fSAMPLING=fDTS/2, N=8 */
#  define ATIM_SMCR_FDTSd46       (6 << ATIM_SMCR_ETF_SHIFT) /* 0110: fSAMPLING=fDTS/4, N=6 */
#  define ATIM_SMCR_FDTSd48       (7 << ATIM_SMCR_ETF_SHIFT) /* 0111: fSAMPLING=fDTS/4, N=8 */
#  define ATIM_SMCR_FDTSd86       (8 << ATIM_SMCR_ETF_SHIFT) /* 1000: fSAMPLING=fDTS/8, N=6 */
#  define ATIM_SMCR_FDTSd88       (9 << ATIM_SMCR_ETF_SHIFT) /* 1001: fSAMPLING=fDTS/8, N=8 */
#  define ATIM_SMCR_FDTSd165      (10 << ATIM_SMCR_ETF_SHIFT) /* 1010: fSAMPLING=fDTS/16, N=5 */
#  define ATIM_SMCR_FDTSd166      (11 << ATIM_SMCR_ETF_SHIFT) /* 1011: fSAMPLING=fDTS/16, N=6 */
#  define ATIM_SMCR_FDTSd168      (12 << ATIM_SMCR_ETF_SHIFT) /* 1100: fSAMPLING=fDTS/16, N=8 */
#  define ATIM_SMCR_FDTSd325      (13 << ATIM_SMCR_ETF_SHIFT) /* 1101: fSAMPLING=fDTS/32, N=5 */
#  define ATIM_SMCR_FDTSd326      (14 << ATIM_SMCR_ETF_SHIFT) /* 1110: fSAMPLING=fDTS/32, N=6 */
#  define ATIM_SMCR_FDTSd328      (15 << ATIM_SMCR_ETF_SHIFT) /* 1111: fSAMPLING=fDTS/32, N=8 */
#define ATIM_SMCR_ETPS_SHIFT      (12)      /* Bits 12-13: External trigger prescaler */
#define ATIM_SMCR_ETPS_MASK       (3 << ATIM_SMCR_ETPS_SHIFT)
#  define ATIM_SMCR_PSCOFF        (0 << ATIM_SMCR_ETPS_SHIFT) /* 00: Prescaler OFF */
#  define ATIM_SMCR_ETRPd2        (1 << ATIM_SMCR_ETPS_SHIFT) /* 01: ETRP frequency divided by 2 */
#  define ATIM_SMCR_ETRPd4        (2 << ATIM_SMCR_ETPS_SHIFT) /* 10: ETRP frequency divided by 4 */
#  define ATIM_SMCR_ETRPd8        (3 << ATIM_SMCR_ETPS_SHIFT) /* 11: ETRP frequency divided by 8 */
#define ATIM_SMCR_ECE             (1 << 14) /* Bit 14: External clock enable */
#define ATIM_SMCR_ETP             (1 << 15) /* Bit 15: External trigger polarity */
#define ATIM_SMCR_SMS             (1 << 16) /* Bit 16: Slave mode selection - bit 3 */

#define ATIM_SMCR_TShi_SHIFT        (20) /* Bits 20-21:  */







/* DMA/Interrupt enable register */

// all
#define ATIM_DIER_UIE             (1 << 0)  /* Bit 0: Update interrupt enable */
#define ATIM_DIER_CC1IE           (1 << 1)  /* Bit 1: Capture/Compare 1 interrupt enable */

// tim 1-2
#define ATIM_DIER_CC2IE           (1 << 2)  /* Bit 2: Capture/Compare 2 interrupt enable */
#define ATIM_DIER_CC3IE           (1 << 3)  /* Bit 3: Capture/Compare 3 interrupt enable */
#define ATIM_DIER_CC4IE           (1 << 4)  /* Bit 4: Capture/Compare 4 interrupt enable */

// 1, 16,17
#define ATIM_DIER_COMIE           (1 << 5)  /* Bit 5: COM interrupt enable */

// tim 1-2
#define ATIM_DIER_TIE             (1 << 6)  /* Bit 6: Trigger interrupt enable */

// 1, 16,17
#define ATIM_DIER_BIE             (1 << 7)  /* Bit 7: Break interrupt enable */

// all
#define ATIM_DIER_UDE             (1 << 8)  /* Bit 8: Update DMA request enable */
#define ATIM_DIER_CC1DE           (1 << 9)  /* Bit 9: Capture/Compare 1 DMA request enable */

// tim 1-2
#define ATIM_DIER_CC2DE           (1 << 10) /* Bit 10: Capture/Compare 2 DMA request enable */
#define ATIM_DIER_CC3DE           (1 << 11) /* Bit 11: Capture/Compare 3 DMA request enable */
#define ATIM_DIER_CC4DE           (1 << 12) /* Bit 12: Capture/Compare 4 DMA request enable */

// 1 only
#define ATIM_DIER_COMDE           (1 << 13) /* Bit 13: COM DMA request enable */
#define ATIM_DIER_TDE             (1 << 14) /* Bit 14: Trigger DMA request enable */













/* Status register */

// all
#define ATIM_SR_UIF               (1 << 0)  /* Bit 0:  Update interrupt Flag */
#define ATIM_SR_CC1IF             (1 << 1)  /* Bit 1:  Capture/Compare 1 interrupt Flag */

// tim 1-2
#define ATIM_SR_CC2IF             (1 << 2)  /* Bit 2:  Capture/Compare 2 interrupt Flag */
#define ATIM_SR_CC3IF             (1 << 3)  /* Bit 3:  Capture/Compare 3 interrupt Flag */
#define ATIM_SR_CC4IF             (1 << 4)  /* Bit 4:  Capture/Compare 4 interrupt Flag */

// tim 1, 16, 17
#define ATIM_SR_COMIF             (1 << 5)  /* Bit 5:  COM interrupt Flag */

// tim 1-2
#define ATIM_SR_TIF               (1 << 6)  /* Bit 6:  Trigger interrupt Flag */

// tim 1, 16, 17
#define ATIM_SR_BIF               (1 << 7)  /* Bit 7:  Break interrupt Flag */

// tim 1 only
#define ATIM_SR_B2IF              (1 << 8)  /* Bit 8:  Break 2 interrupt Flag */

// all
#define ATIM_SR_CC1OF             (1 << 9)  /* Bit 9:  Capture/Compare 1 Overcapture Flag */

//tim 1-2
#define ATIM_SR_CC2OF             (1 << 10) /* Bit 10: Capture/Compare 2 Overcapture Flag */
#define ATIM_SR_CC3OF             (1 << 11) /* Bit 11: Capture/Compare 3 Overcapture Flag */
#define ATIM_SR_CC4OF             (1 << 12) /* Bit 12: Capture/Compare 4 Overcapture Flag */

// tim 1 only
#define ATIM_SR_SBIF              (1 << 13) /* Bit 13: System break interrupt Flag */
#define ATIM_SR_CC5IF             (1 << 16) /* Bit 16: Compare 5 interrupt flag */
#define ATIM_SR_CC6IF             (1 << 17) /* Bit 17: Compare 6 interrupt flag */










/* Event generation register */

// all
#define ATIM_EGR_UG               (1 << 0)  /* Bit 0: Update Generation */
#define ATIM_EGR_CC1G             (1 << 1)  /* Bit 1: Capture/Compare 1 Generation */

// tim 1-2
#define ATIM_EGR_CC2G             (1 << 2)  /* Bit 2: Capture/Compare 2 Generation */
#define ATIM_EGR_CC3G             (1 << 3)  /* Bit 3: Capture/Compare 3 Generation */
#define ATIM_EGR_CC4G             (1 << 4)  /* Bit 4: Capture/Compare 4 Generation */

// tim 1, 16, 17
#define ATIM_EGR_COMG             (1 << 5)  /* Bit 5: Capture/Compare Control Update Generation */

// tim 1-2
#define ATIM_EGR_TG               (1 << 6)  /* Bit 6: Trigger Generation */

// tim 1, 16, 17
#define ATIM_EGR_BG               (1 << 7)  /* Bit 7: Break Generation */

// tim 1
#define ATIM_EGR_B2G              (1 << 8)  /* Bit 8: Break 2 Generation */

















/* Capture/compare mode registers -- capture/compare mode selection */

#define TIM1_CCMR1_CC1S_SHIFT       (0)       /* Bits 0-1: Capture/Compare 1 Selection */
#define TIM1_CCMR1_CC1S_MASK        (0x3 << TIM1_CCMR1_CC1S_SHIFT)
#  define TIM1_CCMR1_CC1S_CCOUT     (0x0 << TIM1_CCMR1_CC1S_SHIFT) /* 00: CC1 channel output */
#  define TIM1_CCMR1_CC1S_CCIN1     (0x1 << TIM1_CCMR1_CC1S_SHIFT) /* 01: CC1 channel input, IC1 is TI1 */
#  define TIM1_CCMR1_CC1S_CCIN2     (0x2 << TIM1_CCMR1_CC1S_SHIFT) /* 10: CC1 channel input, IC1 is TI2 */
#  define TIM1_CCMR1_CC1S_CCINTRC   (0x3 << TIM1_CCMR1_CC1S_SHIFT) /* 11: CC1 channel input, IC1 is TRC */

#define TIM1_CCMR1_CC2S_SHIFT       (8)       /* Bits 8-9: Capture/Compare 2 Selection */
#define TIM1_CCMR1_CC2S_MASK        (0x3 << TIM1_CCMR1_CC2S_SHIFT)
#  define TIM1_CCMR1_CC2S_CCOUT     (0x0 << TIM1_CCMR1_CC2S_SHIFT) /* 00: CC2 channel output */
#  define TIM1_CCMR1_CC2S_CCIN1     (0x1 << TIM1_CCMR1_CC2S_SHIFT) /* 01: CC2 channel input, IC2 is TI2 */
#  define TIM1_CCMR1_CC2S_CCIN2     (0x2 << TIM1_CCMR1_CC2S_SHIFT) /* 10: CC2 channel input, IC2 is TI1 */
#  define TIM1_CCMR1_CC2S_CCINTRC   (0x3 << TIM1_CCMR1_CC2S_SHIFT) /* 11: CC2 channel input, IC2 is TRC */

#define TIM1_CCMR2_CC3S_SHIFT       (0)       /* Bits 0-1: Capture/Compare 3 Selection */
#define TIM1_CCMR2_CC3S_MASK        (0x3 << TIM1_CCMR2_CC3S_SHIFT)
#  define TIM1_CCMR2_CC3S_CCOUT     (0x0 << TIM1_CCMR2_CC3S_SHIFT) /* 00: CC3 channel output */
#  define TIM1_CCMR2_CC3S_CCIN1     (0x1 << TIM1_CCMR2_CC3S_SHIFT) /* 01: CC3 channel input, IC3 is TI3 */
#  define TIM1_CCMR2_CC3S_CCIN2     (0x2 << TIM1_CCMR2_CC3S_SHIFT) /* 10: CC3 channel input, IC3 is TI4 */
#  define TIM1_CCMR2_CC3S_CCINTRC   (0x3 << TIM1_CCMR2_CC3S_SHIFT) /* 11: CC3 channel input, IC3 is TRC */

#define TIM1_CCMR2_CC4S_SHIFT       (8)       /* Bits 8-9: Capture/Compare 4 Selection */
#define TIM1_CCMR2_CC4S_MASK        (0x3 << TIM1_CCMR2_CC4S_SHIFT)
#  define TIM1_CCMR2_CC4S_CCOUT     (0x0 << TIM1_CCMR2_CC4S_SHIFT) /* 00: CC4 channel output */
#  define TIM1_CCMR2_CC4S_CCIN1     (0x1 << TIM1_CCMR2_CC4S_SHIFT) /* 01: CC4 channel input, IC4 is TI4 */
#  define TIM1_CCMR2_CC4S_CCIN2     (0x2 << TIM1_CCMR2_CC4S_SHIFT) /* 10: CC4 channel input, IC4 is TI3 */
#  define TIM1_CCMR2_CC4S_CCINTRC   (0x3 << TIM1_CCMR2_CC4S_SHIFT) /* 11: CC4 channel input, IC4 is TRC */

#define TIM2_CCMR1_CC1S_SHIFT       (0)       /* Bits 0-1: Capture/Compare 1 Selection */
#define TIM2_CCMR1_CC1S_MASK        (0x3 << TIM2_CCMR1_CC1S_SHIFT)
#  define TIM2_CCMR1_CC1S_CCOUT     (0x0 << TIM2_CCMR1_CC1S_SHIFT) /* 00: CC1 channel output */
#  define TIM2_CCMR1_CC1S_CCIN1     (0x1 << TIM2_CCMR1_CC1S_SHIFT) /* 01: CC1 channel input, IC1 is TI1 */
#  define TIM2_CCMR1_CC1S_CCIN2     (0x2 << TIM2_CCMR1_CC1S_SHIFT) /* 10: CC1 channel input, IC1 is TI2 */
#  define TIM2_CCMR1_CC1S_CCINTRC   (0x3 << TIM2_CCMR1_CC1S_SHIFT) /* 11: CC1 channel input, IC1 is TRC */

#define TIM2_CCMR1_CC2S_SHIFT       (8)       /* Bits 8-9: Capture/Compare 2 Selection */
#define TIM2_CCMR1_CC2S_MASK        (0x3 << TIM2_CCMR1_CC2S_SHIFT)
#  define TIM2_CCMR1_CC2S_CCOUT     (0x0 << TIM2_CCMR1_CC2S_SHIFT) /* 00: CC2 channel output */
#  define TIM2_CCMR1_CC2S_CCIN1     (0x1 << TIM2_CCMR1_CC2S_SHIFT) /* 01: CC2 channel input, IC2 is TI2 */
#  define TIM2_CCMR1_CC2S_CCIN2     (0x2 << TIM2_CCMR1_CC2S_SHIFT) /* 10: CC2 channel input, IC2 is TI1 */
#  define TIM2_CCMR1_CC2S_CCINTRC   (0x3 << TIM2_CCMR1_CC2S_SHIFT) /* 11: CC2 channel input, IC2 is TRC */

#define TIM2_CCMR2_CC3S_SHIFT       (0)       /* Bits 0-1: Capture/Compare 3 Selection */
#define TIM2_CCMR2_CC3S_MASK        (0x3 << TIM2_CCMR2_CC3S_SHIFT)
#  define TIM2_CCMR2_CC3S_CCOUT     (0x0 << TIM2_CCMR2_CC3S_SHIFT) /* 00: CC3 channel output */
#  define TIM2_CCMR2_CC3S_CCIN1     (0x1 << TIM2_CCMR2_CC3S_SHIFT) /* 01: CC3 channel input, IC3 is TI3 */
#  define TIM2_CCMR2_CC3S_CCIN2     (0x2 << TIM2_CCMR2_CC3S_SHIFT) /* 10: CC3 channel input, IC3 is TI4 */
#  define TIM2_CCMR2_CC3S_CCINTRC   (0x3 << TIM2_CCMR2_CC3S_SHIFT) /* 11: CC3 channel input, IC3 is TRC */

#define TIM2_CCMR2_CC4S_SHIFT       (8)       /* Bits 8-9: Capture/Compare 4 Selection */
#define TIM2_CCMR2_CC4S_MASK        (0x3 << TIM2_CCMR2_CC4S_SHIFT)
#  define TIM2_CCMR2_CC4S_CCOUT     (0x0 << TIM2_CCMR2_CC4S_SHIFT) /* 00: CC4 channel output */
#  define TIM2_CCMR2_CC4S_CCIN1     (0x1 << TIM2_CCMR2_CC4S_SHIFT) /* 01: CC4 channel input, IC4 is TI4 */
#  define TIM2_CCMR2_CC4S_CCIN2     (0x2 << TIM2_CCMR2_CC4S_SHIFT) /* 10: CC4 channel input, IC4 is TI3 */
#  define TIM2_CCMR2_CC4S_CCINTRC   (0x3 << TIM2_CCMR2_CC4S_SHIFT) /* 11: CC4 channel input, IC4 is TRC */

#define TIM16_CCMR1_CC1S_SHIFT      (0)       /* Bits 0-1: Capture/Compare 1 Selection */
#define TIM16_CCMR1_CC1S_MASK       (0x3 << TIM16_CCMR1_CC1S_SHIFT)
#  define TIM16_CCMR1_CC1S_CCOUT    (0x0 << TIM16_CCMR1_CC1S_SHIFT) /* 00: CC1 channel output */
#  define TIM16_CCMR1_CC1S_CCIN1    (0x1 << TIM16_CCMR1_CC1S_SHIFT) /* 01: CC1 channel input, IC1 is TI1 */

#define TIM17_CCMR1_CC1S_SHIFT      (0)       /* Bits 0-1: Capture/Compare 1 Selection */
#define TIM17_CCMR1_CC1S_MASK       (0x3 << TIM17_CCMR1_CC1S_SHIFT)
#  define TIM17_CCMR1_CC1S_CCOUT    (0x0 << TIM17_CCMR1_CC1S_SHIFT) /* 00: CC1 channel output */
#  define TIM17_CCMR1_CC1S_CCIN1    (0x1 << TIM17_CCMR1_CC1S_SHIFT) /* 01: CC1 channel input, IC1 is TI1 */

/* Capture/compare mode registers -- Output compare mode */

#define TIM1_CCMR1_OC1FE            (1 << 2)  /* Bit 2: Output Compare 1 Fast enable */
#define TIM1_CCMR1_OC1PE            (1 << 3)  /* Bit 3: Output Compare 1 Preload enable */
#define TIM1_CCMR1_OC1M_LO_SHIFT    (4)       /* Bits 4-6: Output Compare 1 Mode, bits [2:0] */
#define TIM1_CCMR1_OC1M_HI_SHIFT    (16)      /* Bit 16: Output Compare 1 Mode, bits [3] */
#define TIM1_CCMR1_OC1M_BITS        (h,l)     ((h << TIM1_CCMR1_OC1M_HI_SHIFT) | (l << TIM1_CCMR1_OC1M_LO_SHIFT))
#define TIM1_CCMR1_OC1M_MASK        TIM1_CCMR1_OC1M_BITS(0x1, 0x7)
#  define TIM1_CCMR1_OC1M_FRZN      TIM1_CCMR1_OC1M_BITS(0x0, 0x0)  /* 0,000: Frozen */
#  define TIM1_CCMR1_OC1M_CHACT     TIM1_CCMR1_OC1M_BITS(0x0, 0x1)  /* 0,001: Channel 1 active on match */
#  define TIM1_CCMR1_OC1M_CHINACT   TIM1_CCMR1_OC1M_BITS(0x0, 0x2)  /* 0,010: Channel 1 inactive on match */
#  define TIM1_CCMR1_OC1M_OCREFTOG  TIM1_CCMR1_OC1M_BITS(0x0, 0x3)  /* 0,011: OC1REF toggle TIM_CNT=TIM_CCR1 */
#  define TIM1_CCMR1_OC1M_OCREFLO   TIM1_CCMR1_OC1M_BITS(0x0, 0x4)  /* 0,100: OC1REF forced low */
#  define TIM1_CCMR1_OC1M_OCREFHI   TIM1_CCMR1_OC1M_BITS(0x0, 0x5)  /* 0,101: OC1REF forced high */
#  define TIM1_CCMR1_OC1M_PWM1      TIM1_CCMR1_OC1M_BITS(0x0, 0x6)  /* 0,110: PWM mode 1 */
#  define TIM1_CCMR1_OC1M_PWM2      TIM1_CCMR1_OC1M_BITS(0x0, 0x7)  /* 0,111: PWM mode 2 */
#  define TIM1_CCMR1_OC1M_OPM1      TIM1_CCMR1_OC1M_BITS(0x1, 0x0)  /* 1,000: OPM mode 1 */
#  define TIM1_CCMR1_OC1M_OPM2      TIM1_CCMR1_OC1M_BITS(0x1, 0x1)  /* 1,001: OPM mode 2 */
#  define TIM1_CCMR1_OC1M_COMBINED1 TIM1_CCMR1_OC1M_BITS(0x1, 0x4)  /* 1,100: Combined PWM mode 1 */
#  define TIM1_CCMR1_OC1M_COMBINED2 TIM1_CCMR1_OC1M_BITS(0x1, 0x5)  /* 1,101: Combined PWM mode 2 */
#  define TIM1_CCMR1_OC1M_ASYMM1    TIM1_CCMR1_OC1M_BITS(0x1, 0x6)  /* 1,110: Asymmetric PWM mode 1 */
#  define TIM1_CCMR1_OC1M_ASYMM2    TIM1_CCMR1_OC1M_BITS(0x1, 0x7)  /* 1,111: Asymmetric PWM mode 2 */
#define TIM1_CCMR1_OC1CE            (1 << 7)  /* Bit 7: Output Compare 1 Clear Enable */

#define TIM1_CCMR1_OC2FE            (1 << 10) /* Bit 10: Output Compare 2 Fast enable */
#define TIM1_CCMR1_OC2PE            (1 << 11) /* Bit 11: Output Compare 2 Preload enable */
#define TIM1_CCMR1_OC2M_LO_SHIFT    (12)      /* Bits 12-14: Output Compare 2 Mode, bits [2:0] */
#define TIM1_CCMR1_OC2M_HI_SHIFT    (24)      /* Bit 24: Output Compare 2 Mode, bits [3] */
#define TIM1_CCMR1_OC2M_BITS        (h,l)     ((h << TIM1_CCMR1_OC2M_HI_SHIFT) | (l << TIM1_CCMR1_OC2M_LO_SHIFT))
#define TIM1_CCMR1_OC2M_MASK        TIM1_CCMR1_OC2M_BITS(0x1, 0x7)
#  define TIM1_CCMR1_OC2M_FRZN      TIM1_CCMR1_OC2M_BITS(0x0, 0x0)  /* 0,000: Frozen */
#  define TIM1_CCMR1_OC2M_CHACT     TIM1_CCMR1_OC2M_BITS(0x0, 0x1)  /* 0,001: Channel 2 active on match */
#  define TIM1_CCMR1_OC2M_CHINACT   TIM1_CCMR1_OC2M_BITS(0x0, 0x2)  /* 0,010: Channel 2 inactive on match */
#  define TIM1_CCMR1_OC2M_OCREFTOG  TIM1_CCMR1_OC2M_BITS(0x0, 0x3)  /* 0,011: OC2REF toggle TIM_CNT=TIM_CCR2 */
#  define TIM1_CCMR1_OC2M_OCREFLO   TIM1_CCMR1_OC2M_BITS(0x0, 0x4)  /* 0,100: OC2REF forced low */
#  define TIM1_CCMR1_OC2M_OCREFHI   TIM1_CCMR1_OC2M_BITS(0x0, 0x5)  /* 0,101: OC2REF forced high */
#  define TIM1_CCMR1_OC2M_PWM1      TIM1_CCMR1_OC2M_BITS(0x0, 0x6)  /* 0,110: PWM mode 1 */
#  define TIM1_CCMR1_OC2M_PWM2      TIM1_CCMR1_OC2M_BITS(0x0, 0x7)  /* 0,111: PWM mode 2 */
#  define TIM1_CCMR1_OC2M_OPM1      TIM1_CCMR1_OC2M_BITS(0x1, 0x0)  /* 1,000: OPM mode 1 */
#  define TIM1_CCMR1_OC2M_OPM2      TIM1_CCMR1_OC2M_BITS(0x1, 0x1)  /* 1,001: OPM mode 2 */
#  define TIM1_CCMR1_OC2M_COMBINED1 TIM1_CCMR1_OC2M_BITS(0x1, 0x4)  /* 1,100: Combined PWM mode 1 */
#  define TIM1_CCMR1_OC2M_COMBINED2 TIM1_CCMR1_OC2M_BITS(0x1, 0x5)  /* 1,101: Combined PWM mode 2 */
#  define TIM1_CCMR1_OC2M_ASYMM1    TIM1_CCMR1_OC2M_BITS(0x1, 0x6)  /* 1,110: Asymmetric PWM mode 1 */
#  define TIM1_CCMR1_OC2M_ASYMM2    TIM1_CCMR1_OC2M_BITS(0x1, 0x7)  /* 1,111: Asymmetric PWM mode 2 */
#define TIM1_CCMR1_OC2CE            (1 << 15) /* Bit 15: Output Compare 2 Clear Enable */

#define TIM1_CCMR2_OC3FE            (1 << 2)  /* Bit 2: Output Compare 3 Fast enable */
#define TIM1_CCMR2_OC3PE            (1 << 3)  /* Bit 3: Output Compare 3 Preload enable */
#define TIM1_CCMR2_OC3M_LO_SHIFT    (4)       /* Bits 4-6: Output Compare 3 Mode, bits [2:0] */
#define TIM1_CCMR2_OC3M_HI_SHIFT    (16)      /* Bit 16: Output Compare 3 Mode, bits [3] */
#define TIM1_CCMR2_OC3M_BITS        (h,l)     ((h << TIM1_CCMR2_OC3M_HI_SHIFT) | (l << TIM1_CCMR2_OC3M_LO_SHIFT))
#define TIM1_CCMR2_OC3M_MASK        TIM1_CCMR2_OC3M_BITS(0x1, 0x7)
#  define TIM1_CCMR2_OC3M_FRZN      TIM1_CCMR2_OC3M_BITS(0x0, 0x0)  /* 0,000: Frozen */
#  define TIM1_CCMR2_OC3M_CHACT     TIM1_CCMR2_OC3M_BITS(0x0, 0x1)  /* 0,001: Channel 3 active on match */
#  define TIM1_CCMR2_OC3M_CHINACT   TIM1_CCMR2_OC3M_BITS(0x0, 0x2)  /* 0,010: Channel 3 inactive on match */
#  define TIM1_CCMR2_OC3M_OCREFTOG  TIM1_CCMR2_OC3M_BITS(0x0, 0x3)  /* 0,011: OC3REF toggle TIM_CNT=TIM_CCR3 */
#  define TIM1_CCMR2_OC3M_OCREFLO   TIM1_CCMR2_OC3M_BITS(0x0, 0x4)  /* 0,100: OC3REF forced low */
#  define TIM1_CCMR2_OC3M_OCREFHI   TIM1_CCMR2_OC3M_BITS(0x0, 0x5)  /* 0,101: OC3REF forced high */
#  define TIM1_CCMR2_OC3M_PWM1      TIM1_CCMR2_OC3M_BITS(0x0, 0x6)  /* 0,110: PWM mode 1 */
#  define TIM1_CCMR2_OC3M_PWM2      TIM1_CCMR2_OC3M_BITS(0x0, 0x7)  /* 0,111: PWM mode 2 */
#  define TIM1_CCMR2_OC3M_OPM1      TIM1_CCMR2_OC3M_BITS(0x1, 0x0)  /* 1,000: OPM mode 1 */
#  define TIM1_CCMR2_OC3M_OPM2      TIM1_CCMR2_OC3M_BITS(0x1, 0x1)  /* 1,001: OPM mode 2 */
#  define TIM1_CCMR2_OC3M_COMBINED1 TIM1_CCMR2_OC3M_BITS(0x1, 0x4)  /* 1,100: Combined PWM mode 1 */
#  define TIM1_CCMR2_OC3M_COMBINED2 TIM1_CCMR2_OC3M_BITS(0x1, 0x5)  /* 1,101: Combined PWM mode 2 */
#  define TIM1_CCMR2_OC3M_ASYMM1    TIM1_CCMR2_OC3M_BITS(0x1, 0x6)  /* 1,110: Asymmetric PWM mode 1 */
#  define TIM1_CCMR2_OC3M_ASYMM2    TIM1_CCMR2_OC3M_BITS(0x1, 0x7)  /* 1,111: Asymmetric PWM mode 2 */
#define TIM1_CCMR2_OC3CE            (1 << 7)  /* Bit 7: Output Compare 1 Clear Enable */

#define TIM1_CCMR2_OC4FE            (1 << 10) /* Bit 10: Output Compare 4 Fast enable */
#define TIM1_CCMR2_OC4PE            (1 << 11) /* Bit 11: Output Compare 4 Preload enable */
#define TIM1_CCMR2_OC4M_LO_SHIFT    (12)      /* Bits 12-14: Output Compare 4 Mode, bits [2:0] */
#define TIM1_CCMR2_OC4M_HI_SHIFT    (24)      /* Bit 24: Output Compare 4 Mode, bits [3] */
#define TIM1_CCMR2_OC4M_BITS        (h,l)     ((h << TIM1_CCMR2_OC4M_HI_SHIFT) | (l << TIM1_CCMR2_OC4M_LO_SHIFT))
#define TIM1_CCMR2_OC4M_MASK        TIM1_CCMR2_OC4M_BITS(0x1, 0x7)
#  define TIM1_CCMR2_OC4M_FRZN      TIM1_CCMR2_OC4M_BITS(0x0, 0x0)  /* 0,000: Frozen */
#  define TIM1_CCMR2_OC4M_CHACT     TIM1_CCMR2_OC4M_BITS(0x0, 0x1)  /* 0,001: Channel 4 active on match */
#  define TIM1_CCMR2_OC4M_CHINACT   TIM1_CCMR2_OC4M_BITS(0x0, 0x2)  /* 0,010: Channel 4 inactive on match */
#  define TIM1_CCMR2_OC4M_OCREFTOG  TIM1_CCMR2_OC4M_BITS(0x0, 0x3)  /* 0,011: OC4REF toggle TIM_CNT=TIM_CCR4 */
#  define TIM1_CCMR2_OC4M_OCREFLO   TIM1_CCMR2_OC4M_BITS(0x0, 0x4)  /* 0,100: OC4REF forced low */
#  define TIM1_CCMR2_OC4M_OCREFHI   TIM1_CCMR2_OC4M_BITS(0x0, 0x5)  /* 0,101: OC4REF forced high */
#  define TIM1_CCMR2_OC4M_PWM1      TIM1_CCMR2_OC4M_BITS(0x0, 0x6)  /* 0,110: PWM mode 1 */
#  define TIM1_CCMR2_OC4M_PWM2      TIM1_CCMR2_OC4M_BITS(0x0, 0x7)  /* 0,111: PWM mode 2 */
#  define TIM1_CCMR2_OC4M_OPM1      TIM1_CCMR2_OC4M_BITS(0x1, 0x0)  /* 1,000: OPM mode 1 */
#  define TIM1_CCMR2_OC4M_OPM2      TIM1_CCMR2_OC4M_BITS(0x1, 0x1)  /* 1,001: OPM mode 2 */
#  define TIM1_CCMR2_OC4M_COMBINED1 TIM1_CCMR2_OC4M_BITS(0x1, 0x4)  /* 1,100: Combined PWM mode 1 */
#  define TIM1_CCMR2_OC4M_COMBINED2 TIM1_CCMR2_OC4M_BITS(0x1, 0x5)  /* 1,101: Combined PWM mode 2 */
#  define TIM1_CCMR2_OC4M_ASYMM1    TIM1_CCMR2_OC4M_BITS(0x1, 0x6)  /* 1,110: Asymmetric PWM mode 1 */
#  define TIM1_CCMR2_OC4M_ASYMM2    TIM1_CCMR2_OC4M_BITS(0x1, 0x7)  /* 1,111: Asymmetric PWM mode 2 */
#define TIM1_CCMR2_OC4CE            (1 << 15) /* Bit 15: Output Compare 2 Clear Enable */

#define TIM2_CCMR1_OC1FE            (1 << 2)  /* Bit 2: Output Compare 1 Fast enable */
#define TIM2_CCMR1_OC1PE            (1 << 3)  /* Bit 3: Output Compare 1 Preload enable */
#define TIM2_CCMR1_OC1M_LO_SHIFT    (4)       /* Bits 4-6: Output Compare 1 Mode, bits [2:0] */
#define TIM2_CCMR1_OC1M_HI_SHIFT    (16)      /* Bit 16: Output Compare 1 Mode, bits [3] */
#define TIM2_CCMR1_OC1M_BITS        (h,l)     ((h << TIM2_CCMR1_OC1M_HI_SHIFT) | (l << TIM2_CCMR1_OC1M_LO_SHIFT))
#define TIM2_CCMR1_OC1M_MASK        TIM2_CCMR1_OC1M_BITS(0x1, 0x7)
#  define TIM2_CCMR1_OC1M_FRZN      TIM2_CCMR1_OC1M_BITS(0x0, 0x0)  /* 0,000: Frozen */
#  define TIM2_CCMR1_OC1M_CHACT     TIM2_CCMR1_OC1M_BITS(0x0, 0x1)  /* 0,001: Channel 1 active on match */
#  define TIM2_CCMR1_OC1M_CHINACT   TIM2_CCMR1_OC1M_BITS(0x0, 0x2)  /* 0,010: Channel 1 inactive on match */
#  define TIM2_CCMR1_OC1M_OCREFTOG  TIM2_CCMR1_OC1M_BITS(0x0, 0x3)  /* 0,011: OC1REF toggle TIM_CNT=TIM_CCR1 */
#  define TIM2_CCMR1_OC1M_OCREFLO   TIM2_CCMR1_OC1M_BITS(0x0, 0x4)  /* 0,100: OC1REF forced low */
#  define TIM2_CCMR1_OC1M_OCREFHI   TIM2_CCMR1_OC1M_BITS(0x0, 0x5)  /* 0,101: OC1REF forced high */
#  define TIM2_CCMR1_OC1M_PWM1      TIM2_CCMR1_OC1M_BITS(0x0, 0x6)  /* 0,110: PWM mode 1 */
#  define TIM2_CCMR1_OC1M_PWM2      TIM2_CCMR1_OC1M_BITS(0x0, 0x7)  /* 0,111: PWM mode 2 */
#  define TIM2_CCMR1_OC1M_OPM1      TIM2_CCMR1_OC1M_BITS(0x1, 0x0)  /* 1,000: OPM mode 1 */
#  define TIM2_CCMR1_OC1M_OPM2      TIM2_CCMR1_OC1M_BITS(0x1, 0x1)  /* 1,001: OPM mode 2 */
#  define TIM2_CCMR1_OC1M_COMBINED1 TIM2_CCMR1_OC1M_BITS(0x1, 0x4)  /* 1,100: Combined PWM mode 1 */
#  define TIM2_CCMR1_OC1M_COMBINED2 TIM2_CCMR1_OC1M_BITS(0x1, 0x5)  /* 1,101: Combined PWM mode 2 */
#  define TIM2_CCMR1_OC1M_ASYMM1    TIM2_CCMR1_OC1M_BITS(0x1, 0x6)  /* 1,110: Asymmetric PWM mode 1 */
#  define TIM2_CCMR1_OC1M_ASYMM2    TIM2_CCMR1_OC1M_BITS(0x1, 0x7)  /* 1,111: Asymmetric PWM mode 2 */
#define TIM2_CCMR1_OC1CE            (1 << 7)  /* Bit 7: Output Compare 1 Clear Enable */

#define TIM2_CCMR1_OC2FE            (1 << 10) /* Bit 10: Output Compare 2 Fast enable */
#define TIM2_CCMR1_OC2PE            (1 << 11) /* Bit 11: Output Compare 2 Preload enable */
#define TIM2_CCMR1_OC2M_LO_SHIFT    (12)      /* Bits 12-14: Output Compare 2 Mode, bits [2:0] */
#define TIM2_CCMR1_OC2M_HI_SHIFT    (24)      /* Bit 24: Output Compare 2 Mode, bits [3] */
#define TIM2_CCMR1_OC2M_BITS        (h,l)     ((h << TIM2_CCMR1_OC2M_HI_SHIFT) | (l << TIM2_CCMR1_OC2M_LO_SHIFT))
#define TIM2_CCMR1_OC2M_MASK        TIM2_CCMR1_OC2M_BITS(0x1, 0x7)
#  define TIM2_CCMR1_OC2M_FRZN      TIM2_CCMR1_OC2M_BITS(0x0, 0x0)  /* 0,000: Frozen */
#  define TIM2_CCMR1_OC2M_CHACT     TIM2_CCMR1_OC2M_BITS(0x0, 0x1)  /* 0,001: Channel 2 active on match */
#  define TIM2_CCMR1_OC2M_CHINACT   TIM2_CCMR1_OC2M_BITS(0x0, 0x2)  /* 0,010: Channel 2 inactive on match */
#  define TIM2_CCMR1_OC2M_OCREFTOG  TIM2_CCMR1_OC2M_BITS(0x0, 0x3)  /* 0,011: OC2REF toggle TIM_CNT=TIM_CCR2 */
#  define TIM2_CCMR1_OC2M_OCREFLO   TIM2_CCMR1_OC2M_BITS(0x0, 0x4)  /* 0,100: OC2REF forced low */
#  define TIM2_CCMR1_OC2M_OCREFHI   TIM2_CCMR1_OC2M_BITS(0x0, 0x5)  /* 0,101: OC2REF forced high */
#  define TIM2_CCMR1_OC2M_PWM1      TIM2_CCMR1_OC2M_BITS(0x0, 0x6)  /* 0,110: PWM mode 1 */
#  define TIM2_CCMR1_OC2M_PWM2      TIM2_CCMR1_OC2M_BITS(0x0, 0x7)  /* 0,111: PWM mode 2 */
#  define TIM2_CCMR1_OC2M_OPM1      TIM2_CCMR1_OC2M_BITS(0x1, 0x0)  /* 1,000: OPM mode 1 */
#  define TIM2_CCMR1_OC2M_OPM2      TIM2_CCMR1_OC2M_BITS(0x1, 0x1)  /* 1,001: OPM mode 2 */
#  define TIM2_CCMR1_OC2M_COMBINED1 TIM2_CCMR1_OC2M_BITS(0x1, 0x4)  /* 1,100: Combined PWM mode 1 */
#  define TIM2_CCMR1_OC2M_COMBINED2 TIM2_CCMR1_OC2M_BITS(0x1, 0x5)  /* 1,101: Combined PWM mode 2 */
#  define TIM2_CCMR1_OC2M_ASYMM1    TIM2_CCMR1_OC2M_BITS(0x1, 0x6)  /* 1,110: Asymmetric PWM mode 1 */
#  define TIM2_CCMR1_OC2M_ASYMM2    TIM2_CCMR1_OC2M_BITS(0x1, 0x7)  /* 1,111: Asymmetric PWM mode 2 */
#define TIM2_CCMR1_OC2CE            (1 << 15) /* Bit 15: Output Compare 2 Clear Enable */

#define TIM2_CCMR2_OC3FE            (1 << 2)  /* Bit 2: Output Compare 3 Fast enable */
#define TIM2_CCMR2_OC3PE            (1 << 3)  /* Bit 3: Output Compare 3 Preload enable */
#define TIM2_CCMR2_OC3M_LO_SHIFT    (4)       /* Bits 4-6: Output Compare 3 Mode, bits [2:0] */
#define TIM2_CCMR2_OC3M_HI_SHIFT    (16)      /* Bit 16: Output Compare 3 Mode, bits [3] */
#define TIM2_CCMR2_OC3M_BITS        (h,l)     ((h << TIM2_CCMR2_OC3M_HI_SHIFT) | (l << TIM2_CCMR2_OC3M_LO_SHIFT))
#define TIM2_CCMR2_OC3M_MASK        TIM2_CCMR2_OC3M_BITS(0x1, 0x7)
#  define TIM2_CCMR2_OC3M_FRZN      TIM2_CCMR2_OC3M_BITS(0x0, 0x0)  /* 0,000: Frozen */
#  define TIM2_CCMR2_OC3M_CHACT     TIM2_CCMR2_OC3M_BITS(0x0, 0x1)  /* 0,001: Channel 3 active on match */
#  define TIM2_CCMR2_OC3M_CHINACT   TIM2_CCMR2_OC3M_BITS(0x0, 0x2)  /* 0,010: Channel 3 inactive on match */
#  define TIM2_CCMR2_OC3M_OCREFTOG  TIM2_CCMR2_OC3M_BITS(0x0, 0x3)  /* 0,011: OC3REF toggle TIM_CNT=TIM_CCR3 */
#  define TIM2_CCMR2_OC3M_OCREFLO   TIM2_CCMR2_OC3M_BITS(0x0, 0x4)  /* 0,100: OC3REF forced low */
#  define TIM2_CCMR2_OC3M_OCREFHI   TIM2_CCMR2_OC3M_BITS(0x0, 0x5)  /* 0,101: OC3REF forced high */
#  define TIM2_CCMR2_OC3M_PWM1      TIM2_CCMR2_OC3M_BITS(0x0, 0x6)  /* 0,110: PWM mode 1 */
#  define TIM2_CCMR2_OC3M_PWM2      TIM2_CCMR2_OC3M_BITS(0x0, 0x7)  /* 0,111: PWM mode 2 */
#  define TIM2_CCMR2_OC3M_OPM1      TIM2_CCMR2_OC3M_BITS(0x1, 0x0)  /* 1,000: OPM mode 1 */
#  define TIM2_CCMR2_OC3M_OPM2      TIM2_CCMR2_OC3M_BITS(0x1, 0x1)  /* 1,001: OPM mode 2 */
#  define TIM2_CCMR2_OC3M_COMBINED1 TIM2_CCMR2_OC3M_BITS(0x1, 0x4)  /* 1,100: Combined PWM mode 1 */
#  define TIM2_CCMR2_OC3M_COMBINED2 TIM2_CCMR2_OC3M_BITS(0x1, 0x5)  /* 1,101: Combined PWM mode 2 */
#  define TIM2_CCMR2_OC3M_ASYMM1    TIM2_CCMR2_OC3M_BITS(0x1, 0x6)  /* 1,110: Asymmetric PWM mode 1 */
#  define TIM2_CCMR2_OC3M_ASYMM2    TIM2_CCMR2_OC3M_BITS(0x1, 0x7)  /* 1,111: Asymmetric PWM mode 2 */
#define TIM2_CCMR2_OC3CE            (1 << 7)  /* Bit 7: Output Compare 1 Clear Enable */

#define TIM2_CCMR2_OC4FE            (1 << 10) /* Bit 10: Output Compare 4 Fast enable */
#define TIM2_CCMR2_OC4PE            (1 << 11) /* Bit 11: Output Compare 4 Preload enable */
#define TIM2_CCMR2_OC4M_LO_SHIFT    (12)      /* Bits 12-14: Output Compare 4 Mode, bits [2:0] */
#define TIM2_CCMR2_OC4M_HI_SHIFT    (24)      /* Bit 24: Output Compare 4 Mode, bits [3] */
#define TIM2_CCMR2_OC4M_BITS        (h,l)     ((h << TIM2_CCMR2_OC4M_HI_SHIFT) | (l << TIM2_CCMR2_OC4M_LO_SHIFT))
#define TIM2_CCMR2_OC4M_MASK        TIM2_CCMR2_OC4M_BITS(0x1, 0x7)
#  define TIM2_CCMR2_OC4M_FRZN      TIM2_CCMR2_OC4M_BITS(0x0, 0x0)  /* 0,000: Frozen */
#  define TIM2_CCMR2_OC4M_CHACT     TIM2_CCMR2_OC4M_BITS(0x0, 0x1)  /* 0,001: Channel 4 active on match */
#  define TIM2_CCMR2_OC4M_CHINACT   TIM2_CCMR2_OC4M_BITS(0x0, 0x2)  /* 0,010: Channel 4 inactive on match */
#  define TIM2_CCMR2_OC4M_OCREFTOG  TIM2_CCMR2_OC4M_BITS(0x0, 0x3)  /* 0,011: OC4REF toggle TIM_CNT=TIM_CCR4 */
#  define TIM2_CCMR2_OC4M_OCREFLO   TIM2_CCMR2_OC4M_BITS(0x0, 0x4)  /* 0,100: OC4REF forced low */
#  define TIM2_CCMR2_OC4M_OCREFHI   TIM2_CCMR2_OC4M_BITS(0x0, 0x5)  /* 0,101: OC4REF forced high */
#  define TIM2_CCMR2_OC4M_PWM1      TIM2_CCMR2_OC4M_BITS(0x0, 0x6)  /* 0,110: PWM mode 1 */
#  define TIM2_CCMR2_OC4M_PWM2      TIM2_CCMR2_OC4M_BITS(0x0, 0x7)  /* 0,111: PWM mode 2 */
#  define TIM2_CCMR2_OC4M_OPM1      TIM2_CCMR2_OC4M_BITS(0x1, 0x0)  /* 1,000: OPM mode 1 */
#  define TIM2_CCMR2_OC4M_OPM2      TIM2_CCMR2_OC4M_BITS(0x1, 0x1)  /* 1,001: OPM mode 2 */
#  define TIM2_CCMR2_OC4M_COMBINED1 TIM2_CCMR2_OC4M_BITS(0x1, 0x4)  /* 1,100: Combined PWM mode 1 */
#  define TIM2_CCMR2_OC4M_COMBINED2 TIM2_CCMR2_OC4M_BITS(0x1, 0x5)  /* 1,101: Combined PWM mode 2 */
#  define TIM2_CCMR2_OC4M_ASYMM1    TIM2_CCMR2_OC4M_BITS(0x1, 0x6)  /* 1,110: Asymmetric PWM mode 1 */
#  define TIM2_CCMR2_OC4M_ASYMM2    TIM2_CCMR2_OC4M_BITS(0x1, 0x7)  /* 1,111: Asymmetric PWM mode 2 */
#define TIM2_CCMR2_OC4CE            (1 << 15) /* Bit 15: Output Compare 2 Clear Enable */

#define TIM16_CCMR1_OC1FE           (1 << 2)  /* Bit 2: Output Compare 1 Fast enable */
#define TIM16_CCMR1_OC1PE           (1 << 3)  /* Bit 3: Output Compare 1 Preload enable */
#define TIM16_CCMR1_OC1M_LO_SHIFT   (4)       /* Bits 4-6: Output Compare 1 Mode, bits [2:0] */
#define TIM16_CCMR1_OC1M_HI_SHIFT   (16)      /* Bit 16: Output Compare 1 Mode, bits [3] */
#define TIM16_CCMR1_OC1M_BITS       (h,l)     ((h << TIM16_CCMR1_OC1M_HI_SHIFT) | (l << TIM16_CCMR1_OC1M_LO_SHIFT))
#define TIM16_CCMR1_OC1M_MASK       TIM16_CCMR1_OC1M_BITS(0x1, 0x7)
#  define TIM16_CCMR1_OC1M_FRZN     TIM16_CCMR1_OC1M_BITS(0x0, 0x0)  /* 0,000: Frozen */
#  define TIM16_CCMR1_OC1M_CHACT    TIM16_CCMR1_OC1M_BITS(0x0, 0x1)  /* 0,001: Channel 1 active on match */
#  define TIM16_CCMR1_OC1M_CHINACT  TIM16_CCMR1_OC1M_BITS(0x0, 0x2)  /* 0,010: Channel 1 inactive on match */
#  define TIM16_CCMR1_OC1M_OCREFTOG TIM16_CCMR1_OC1M_BITS(0x0, 0x3)  /* 0,011: OC1REF toggle TIM_CNT=TIM_CCR1 */
#  define TIM16_CCMR1_OC1M_OCREFLO  TIM16_CCMR1_OC1M_BITS(0x0, 0x4)  /* 0,100: OC1REF forced low */
#  define TIM16_CCMR1_OC1M_OCREFHI  TIM16_CCMR1_OC1M_BITS(0x0, 0x5)  /* 0,101: OC1REF forced high */
#  define TIM16_CCMR1_OC1M_PWM1     TIM16_CCMR1_OC1M_BITS(0x0, 0x6)  /* 0,110: PWM mode 1 */
#  define TIM16_CCMR1_OC1M_PWM2     TIM16_CCMR1_OC1M_BITS(0x0, 0x7)  /* 0,111: PWM mode 2 */

#define TIM17_CCMR1_OC1FE           (1 << 2)  /* Bit 2: Output Compare 1 Fast enable */
#define TIM17_CCMR1_OC1PE           (1 << 3)  /* Bit 3: Output Compare 1 Preload enable */
#define TIM17_CCMR1_OC1M_LO_SHIFT   (4)       /* Bits 4-6: Output Compare 1 Mode, bits [2:0] */
#define TIM17_CCMR1_OC1M_HI_SHIFT   (16)      /* Bit 16: Output Compare 1 Mode, bits [3] */
#define TIM17_CCMR1_OC1M_BITS       (h,l)     ((h << TIM17_CCMR1_OC1M_HI_SHIFT) | (l << TIM17_CCMR1_OC1M_LO_SHIFT))
#define TIM17_CCMR1_OC1M_MASK       TIM17_CCMR1_OC1M_BITS(0x1, 0x7)
#  define TIM17_CCMR1_OC1M_FRZN     TIM17_CCMR1_OC1M_BITS(0x0, 0x0)  /* 0,000: Frozen */
#  define TIM17_CCMR1_OC1M_CHACT    TIM17_CCMR1_OC1M_BITS(0x0, 0x1)  /* 0,001: Channel 1 active on match */
#  define TIM17_CCMR1_OC1M_CHINACT  TIM17_CCMR1_OC1M_BITS(0x0, 0x2)  /* 0,010: Channel 1 inactive on match */
#  define TIM17_CCMR1_OC1M_OCREFTOG TIM17_CCMR1_OC1M_BITS(0x0, 0x3)  /* 0,011: OC1REF toggle TIM_CNT=TIM_CCR1 */
#  define TIM17_CCMR1_OC1M_OCREFLO  TIM17_CCMR1_OC1M_BITS(0x0, 0x4)  /* 0,100: OC1REF forced low */
#  define TIM17_CCMR1_OC1M_OCREFHI  TIM17_CCMR1_OC1M_BITS(0x0, 0x5)  /* 0,101: OC1REF forced high */
#  define TIM17_CCMR1_OC1M_PWM1     TIM17_CCMR1_OC1M_BITS(0x0, 0x6)  /* 0,110: PWM mode 1 */
#  define TIM17_CCMR1_OC1M_PWM2     TIM17_CCMR1_OC1M_BITS(0x0, 0x7)  /* 0,111: PWM mode 2 */

/* Capture/compare mode registers -- Input Capture mode */

#define TIM1_CCMR1_IC1PSC_SHIFT     (2)       /* Bits 2-3: Input Capture 1 Prescaler */
#define TIM1_CCMR1_IC1PSC_MASK      (0x3 << TIM1_CCMR1_IC1PSC_SHIFT)
#  define TIM1_CCMR1_IC1PSC_NOPSC   (0x0 << TIM1_CCMR1_IC1PSC_SHIFT) /* 00: no prescaler, capture each edge */
#  define TIM1_CCMR1_IC1PSC_EVENTS2 (0x1 << TIM1_CCMR1_IC1PSC_SHIFT) /* 01: capture once every 2 events */
#  define TIM1_CCMR1_IC1PSC_EVENTS4 (0x2 << TIM1_CCMR1_IC1PSC_SHIFT) /* 10: capture once every 4 events */
#  define TIM1_CCMR1_IC1PSC_EVENTS8 (0x3 << TIM1_CCMR1_IC1PSC_SHIFT) /* 11: capture once every 8 events */
#define TIM1_CCMR1_IC1F_SHIFT       (4)       /* Bits 4-7: Input Capture 1 Filter */
#define TIM1_CCMR1_IC1F_MASK        (0xf << TIM1_CCMR1_IC1F_SHIFT)
#  define TIM1_CCMR1_IC1F_NOFILT    (0x0 << TIM1_CCMR1_IC1F_SHIFT)   /* 0000: No filter, sampling at fDTS */
#  define TIM1_CCMR1_IC1F_FCKINT2   (0x1 << TIM1_CCMR1_IC1F_SHIFT)   /* 0001: fSAMPLING=fCK_INT, N=2 */
#  define TIM1_CCMR1_IC1F_FCKINT4   (0x2 << TIM1_CCMR1_IC1F_SHIFT)   /* 0010: fSAMPLING=fCK_INT, N=4 */
#  define TIM1_CCMR1_IC1F_FCKINT8   (0x3 << TIM1_CCMR1_IC1F_SHIFT)   /* 0011: fSAMPLING=fCK_INT, N=8 */
#  define TIM1_CCMR1_IC1F_FDTSd26   (0x4 << TIM1_CCMR1_IC1F_SHIFT)   /* 0100: fSAMPLING=fDTS/2, N=6 */
#  define TIM1_CCMR1_IC1F_FDTSd28   (0x5 << TIM1_CCMR1_IC1F_SHIFT)   /* 0101: fSAMPLING=fDTS/2, N=8 */
#  define TIM1_CCMR1_IC1F_FDTSd46   (0x6 << TIM1_CCMR1_IC1F_SHIFT)   /* 0110: fSAMPLING=fDTS/4, N=6 */
#  define TIM1_CCMR1_IC1F_FDTSd48   (0x7 << TIM1_CCMR1_IC1F_SHIFT)   /* 0111: fSAMPLING=fDTS/4, N=8 */
#  define TIM1_CCMR1_IC1F_FDTSd86   (0x8 << TIM1_CCMR1_IC1F_SHIFT)   /* 1000: fSAMPLING=fDTS/8, N=6 */
#  define TIM1_CCMR1_IC1F_FDTSd88   (0x9 << TIM1_CCMR1_IC1F_SHIFT)   /* 1001: fSAMPLING=fDTS/8, N=8 */
#  define TIM1_CCMR1_IC1F_FDTSd165  (0xa << TIM1_CCMR1_IC1F_SHIFT)   /* 1010: fSAMPLING=fDTS/16, N=5 */
#  define TIM1_CCMR1_IC1F_FDTSd166  (0xb << TIM1_CCMR1_IC1F_SHIFT)   /* 1011: fSAMPLING=fDTS/16, N=6 */
#  define TIM1_CCMR1_IC1F_FDTSd168  (0xc << TIM1_CCMR1_IC1F_SHIFT)   /* 1100: fSAMPLING=fDTS/16, N=8 */
#  define TIM1_CCMR1_IC1F_FDTSd325  (0xd << TIM1_CCMR1_IC1F_SHIFT)   /* 1101: fSAMPLING=fDTS/32, N=5 */
#  define TIM1_CCMR1_IC1F_FDTSd326  (0xe << TIM1_CCMR1_IC1F_SHIFT)   /* 1110: fSAMPLING=fDTS/32, N=6 */
#  define TIM1_CCMR1_IC1F_FDTSd328  (0xf << TIM1_CCMR1_IC1F_SHIFT)   /* 1111: fSAMPLING=fDTS/32, N=8 */

#define TIM1_CCMR1_IC2PSC_SHIFT     (10)      /* Bits 10-11: Input Capture 2 Prescaler */
#define TIM1_CCMR1_IC2PSC_MASK      (0x3 << TIM1_CCMR1_IC2PSC_SHIFT)
#  define TIM1_CCMR1_IC2PSC_NOPSC   (0x0 << TIM1_CCMR1_IC2PSC_SHIFT) /* 00: no prescaler, capture each edge */
#  define TIM1_CCMR1_IC2PSC_EVENTS2 (0x1 << TIM1_CCMR1_IC2PSC_SHIFT) /* 01: capture once every 2 events */
#  define TIM1_CCMR1_IC2PSC_EVENTS4 (0x2 << TIM1_CCMR1_IC2PSC_SHIFT) /* 10: capture once every 4 events */
#  define TIM1_CCMR1_IC2PSC_EVENTS8 (0x3 << TIM1_CCMR1_IC2PSC_SHIFT) /* 11: capture once every 8 events */
#define TIM1_CCMR1_IC2F_SHIFT       (12)      /* Bits 12-15: Input Capture 2 Filter */
#define TIM1_CCMR1_IC2F_MASK        (0xf << TIM1_CCMR1_IC2F_SHIFT)
#  define TIM1_CCMR1_IC2F_NOFILT    (0x0 << TIM1_CCMR1_IC2F_SHIFT)   /* 0000: No filter, sampling at fDTS */
#  define TIM1_CCMR1_IC2F_FCKINT2   (0x1 << TIM1_CCMR1_IC2F_SHIFT)   /* 0001: fSAMPLING=fCK_INT, N=2 */
#  define TIM1_CCMR1_IC2F_FCKINT4   (0x2 << TIM1_CCMR1_IC2F_SHIFT)   /* 0010: fSAMPLING=fCK_INT, N=4 */
#  define TIM1_CCMR1_IC2F_FCKINT8   (0x3 << TIM1_CCMR1_IC2F_SHIFT)   /* 0011: fSAMPLING=fCK_INT, N=8 */
#  define TIM1_CCMR1_IC2F_FDTSd26   (0x4 << TIM1_CCMR1_IC2F_SHIFT)   /* 0100: fSAMPLING=fDTS/2, N=6 */
#  define TIM1_CCMR1_IC2F_FDTSd28   (0x5 << TIM1_CCMR1_IC2F_SHIFT)   /* 0101: fSAMPLING=fDTS/2, N=8 */
#  define TIM1_CCMR1_IC2F_FDTSd46   (0x6 << TIM1_CCMR1_IC2F_SHIFT)   /* 0110: fSAMPLING=fDTS/4, N=6 */
#  define TIM1_CCMR1_IC2F_FDTSd48   (0x7 << TIM1_CCMR1_IC2F_SHIFT)   /* 0111: fSAMPLING=fDTS/4, N=8 */
#  define TIM1_CCMR1_IC2F_FDTSd86   (0x8 << TIM1_CCMR1_IC2F_SHIFT)   /* 1000: fSAMPLING=fDTS/8, N=6 */
#  define TIM1_CCMR1_IC2F_FDTSd88   (0x9 << TIM1_CCMR1_IC2F_SHIFT)   /* 1001: fSAMPLING=fDTS/8, N=8 */
#  define TIM1_CCMR1_IC2F_FDTSd165  (0xa << TIM1_CCMR1_IC2F_SHIFT)   /* 1010: fSAMPLING=fDTS/16, N=5 */
#  define TIM1_CCMR1_IC2F_FDTSd166  (0xb << TIM1_CCMR1_IC2F_SHIFT)   /* 1011: fSAMPLING=fDTS/16, N=6 */
#  define TIM1_CCMR1_IC2F_FDTSd168  (0xc << TIM1_CCMR1_IC2F_SHIFT)   /* 1100: fSAMPLING=fDTS/16, N=8 */
#  define TIM1_CCMR1_IC2F_FDTSd325  (0xd << TIM1_CCMR1_IC2F_SHIFT)   /* 1101: fSAMPLING=fDTS/32, N=5 */
#  define TIM1_CCMR1_IC2F_FDTSd326  (0xe << TIM1_CCMR1_IC2F_SHIFT)   /* 1110: fSAMPLING=fDTS/32, N=6 */
#  define TIM1_CCMR1_IC2F_FDTSd328  (0xf << TIM1_CCMR1_IC2F_SHIFT)   /* 1111: fSAMPLING=fDTS/32, N=8 */

#define TIM1_CCMR2_IC3PSC_SHIFT     (2)       /* Bits 2-3: Input Capture 3 Prescaler */
#define TIM1_CCMR2_IC3PSC_MASK      (0x3 << TIM1_CCMR2_IC3PSC_SHIFT)
#  define TIM1_CCMR2_IC3PSC_NOPSC   (0x0 << TIM1_CCMR2_IC3PSC_SHIFT) /* 00: no prescaler, capture each edge */
#  define TIM1_CCMR2_IC3PSC_EVENTS2 (0x1 << TIM1_CCMR2_IC3PSC_SHIFT) /* 01: capture once every 2 events */
#  define TIM1_CCMR2_IC3PSC_EVENTS4 (0x2 << TIM1_CCMR2_IC3PSC_SHIFT) /* 10: capture once every 4 events */
#  define TIM1_CCMR2_IC3PSC_EVENTS8 (0x3 << TIM1_CCMR2_IC3PSC_SHIFT) /* 11: capture once every 8 events */
#define TIM1_CCMR2_IC3F_SHIFT       (4)       /* Bits 4-7: Input Capture 3 Filter */
#define TIM1_CCMR2_IC3F_MASK        (0xf << TIM1_CCMR2_IC3F_SHIFT)
#  define TIM1_CCMR2_IC3F_NOFILT    (0x0 << TIM1_CCMR2_IC3F_SHIFT)   /* 0000: No filter, sampling at fDTS */
#  define TIM1_CCMR2_IC3F_FCKINT2   (0x1 << TIM1_CCMR2_IC3F_SHIFT)   /* 0001: fSAMPLING=fCK_INT, N=2 */
#  define TIM1_CCMR2_IC3F_FCKINT4   (0x2 << TIM1_CCMR2_IC3F_SHIFT)   /* 0010: fSAMPLING=fCK_INT, N=4 */
#  define TIM1_CCMR2_IC3F_FCKINT8   (0x3 << TIM1_CCMR2_IC3F_SHIFT)   /* 0011: fSAMPLING=fCK_INT, N=8 */
#  define TIM1_CCMR2_IC3F_FDTSd26   (0x4 << TIM1_CCMR2_IC3F_SHIFT)   /* 0100: fSAMPLING=fDTS/2, N=6 */
#  define TIM1_CCMR2_IC3F_FDTSd28   (0x5 << TIM1_CCMR2_IC3F_SHIFT)   /* 0101: fSAMPLING=fDTS/2, N=8 */
#  define TIM1_CCMR2_IC3F_FDTSd46   (0x6 << TIM1_CCMR2_IC3F_SHIFT)   /* 0110: fSAMPLING=fDTS/4, N=6 */
#  define TIM1_CCMR2_IC3F_FDTSd48   (0x7 << TIM1_CCMR2_IC3F_SHIFT)   /* 0111: fSAMPLING=fDTS/4, N=8 */
#  define TIM1_CCMR2_IC3F_FDTSd86   (0x8 << TIM1_CCMR2_IC3F_SHIFT)   /* 1000: fSAMPLING=fDTS/8, N=6 */
#  define TIM1_CCMR2_IC3F_FDTSd88   (0x9 << TIM1_CCMR2_IC3F_SHIFT)   /* 1001: fSAMPLING=fDTS/8, N=8 */
#  define TIM1_CCMR2_IC3F_FDTSd165  (0xa << TIM1_CCMR2_IC3F_SHIFT)   /* 1010: fSAMPLING=fDTS/16, N=5 */
#  define TIM1_CCMR2_IC3F_FDTSd166  (0xb << TIM1_CCMR2_IC3F_SHIFT)   /* 1011: fSAMPLING=fDTS/16, N=6 */
#  define TIM1_CCMR2_IC3F_FDTSd168  (0xc << TIM1_CCMR2_IC3F_SHIFT)   /* 1100: fSAMPLING=fDTS/16, N=8 */
#  define TIM1_CCMR2_IC3F_FDTSd325  (0xd << TIM1_CCMR2_IC3F_SHIFT)   /* 1101: fSAMPLING=fDTS/32, N=5 */
#  define TIM1_CCMR2_IC3F_FDTSd326  (0xe << TIM1_CCMR2_IC3F_SHIFT)   /* 1110: fSAMPLING=fDTS/32, N=6 */
#  define TIM1_CCMR2_IC3F_FDTSd328  (0xf << TIM1_CCMR2_IC3F_SHIFT)   /* 1111: fSAMPLING=fDTS/32, N=8 */

#define TIM1_CCMR2_IC4PSC_SHIFT     (10)      /* Bits 10-11: Input Capture 4 Prescaler */
#define TIM1_CCMR2_IC4PSC_MASK      (0x3 << TIM1_CCMR2_IC4PSC_SHIFT)
#  define TIM1_CCMR2_IC4PSC_NOPSC   (0x0 << TIM1_CCMR2_IC4PSC_SHIFT) /* 00: no prescaler, capture each edge */
#  define TIM1_CCMR2_IC4PSC_EVENTS2 (0x1 << TIM1_CCMR2_IC4PSC_SHIFT) /* 01: capture once every 2 events */
#  define TIM1_CCMR2_IC4PSC_EVENTS4 (0x2 << TIM1_CCMR2_IC4PSC_SHIFT) /* 10: capture once every 4 events */
#  define TIM1_CCMR2_IC4PSC_EVENTS8 (0x3 << TIM1_CCMR2_IC4PSC_SHIFT) /* 11: capture once every 8 events */
#define TIM1_CCMR2_IC4F_SHIFT       (12)      /* Bits 12-15: Input Capture 4 Filter */
#define TIM1_CCMR2_IC4F_MASK        (0xf << TIM1_CCMR2_IC4F_SHIFT)
#  define TIM1_CCMR2_IC4F_NOFILT    (0x0 << TIM1_CCMR2_IC4F_SHIFT)   /* 0000: No filter, sampling at fDTS */
#  define TIM1_CCMR2_IC4F_FCKINT2   (0x1 << TIM1_CCMR2_IC4F_SHIFT)   /* 0001: fSAMPLING=fCK_INT, N=2 */
#  define TIM1_CCMR2_IC4F_FCKINT4   (0x2 << TIM1_CCMR2_IC4F_SHIFT)   /* 0010: fSAMPLING=fCK_INT, N=4 */
#  define TIM1_CCMR2_IC4F_FCKINT8   (0x3 << TIM1_CCMR2_IC4F_SHIFT)   /* 0011: fSAMPLING=fCK_INT, N=8 */
#  define TIM1_CCMR2_IC4F_FDTSd26   (0x4 << TIM1_CCMR2_IC4F_SHIFT)   /* 0100: fSAMPLING=fDTS/2, N=6 */
#  define TIM1_CCMR2_IC4F_FDTSd28   (0x5 << TIM1_CCMR2_IC4F_SHIFT)   /* 0101: fSAMPLING=fDTS/2, N=8 */
#  define TIM1_CCMR2_IC4F_FDTSd46   (0x6 << TIM1_CCMR2_IC4F_SHIFT)   /* 0110: fSAMPLING=fDTS/4, N=6 */
#  define TIM1_CCMR2_IC4F_FDTSd48   (0x7 << TIM1_CCMR2_IC4F_SHIFT)   /* 0111: fSAMPLING=fDTS/4, N=8 */
#  define TIM1_CCMR2_IC4F_FDTSd86   (0x8 << TIM1_CCMR2_IC4F_SHIFT)   /* 1000: fSAMPLING=fDTS/8, N=6 */
#  define TIM1_CCMR2_IC4F_FDTSd88   (0x9 << TIM1_CCMR2_IC4F_SHIFT)   /* 1001: fSAMPLING=fDTS/8, N=8 */
#  define TIM1_CCMR2_IC4F_FDTSd165  (0xa << TIM1_CCMR2_IC4F_SHIFT)   /* 1010: fSAMPLING=fDTS/16, N=5 */
#  define TIM1_CCMR2_IC4F_FDTSd166  (0xb << TIM1_CCMR2_IC4F_SHIFT)   /* 1011: fSAMPLING=fDTS/16, N=6 */
#  define TIM1_CCMR2_IC4F_FDTSd168  (0xc << TIM1_CCMR2_IC4F_SHIFT)   /* 1100: fSAMPLING=fDTS/16, N=8 */
#  define TIM1_CCMR2_IC4F_FDTSd325  (0xd << TIM1_CCMR2_IC4F_SHIFT)   /* 1101: fSAMPLING=fDTS/32, N=5 */
#  define TIM1_CCMR2_IC4F_FDTSd326  (0xe << TIM1_CCMR2_IC4F_SHIFT)   /* 1110: fSAMPLING=fDTS/32, N=6 */
#  define TIM1_CCMR2_IC4F_FDTSd328  (0xf << TIM1_CCMR2_IC4F_SHIFT)   /* 1111: fSAMPLING=fDTS/32, N=8 */

#define TIM2_CCMR1_IC1PSC_SHIFT     (2)       /* Bits 2-3: Input Capture 1 Prescaler */
#define TIM2_CCMR1_IC1PSC_MASK      (0x3 << TIM2_CCMR1_IC1PSC_SHIFT)
#  define TIM2_CCMR1_IC1PSC_NOPSC   (0x0 << TIM2_CCMR1_IC1PSC_SHIFT) /* 00: no prescaler, capture each edge */
#  define TIM2_CCMR1_IC1PSC_EVENTS2 (0x1 << TIM2_CCMR1_IC1PSC_SHIFT) /* 01: capture once every 2 events */
#  define TIM2_CCMR1_IC1PSC_EVENTS4 (0x2 << TIM2_CCMR1_IC1PSC_SHIFT) /* 10: capture once every 4 events */
#  define TIM2_CCMR1_IC1PSC_EVENTS8 (0x3 << TIM2_CCMR1_IC1PSC_SHIFT) /* 11: capture once every 8 events */
#define TIM2_CCMR1_IC1F_SHIFT       (4)       /* Bits 4-7: Input Capture 1 Filter */
#define TIM2_CCMR1_IC1F_MASK        (0xf << TIM2_CCMR1_IC1F_SHIFT)
#  define TIM2_CCMR1_IC1F_NOFILT    (0x0 << TIM2_CCMR1_IC1F_SHIFT)   /* 0000: No filter, sampling at fDTS */
#  define TIM2_CCMR1_IC1F_FCKINT2   (0x1 << TIM2_CCMR1_IC1F_SHIFT)   /* 0001: fSAMPLING=fCK_INT, N=2 */
#  define TIM2_CCMR1_IC1F_FCKINT4   (0x2 << TIM2_CCMR1_IC1F_SHIFT)   /* 0010: fSAMPLING=fCK_INT, N=4 */
#  define TIM2_CCMR1_IC1F_FCKINT8   (0x3 << TIM2_CCMR1_IC1F_SHIFT)   /* 0011: fSAMPLING=fCK_INT, N=8 */
#  define TIM2_CCMR1_IC1F_FDTSd26   (0x4 << TIM2_CCMR1_IC1F_SHIFT)   /* 0100: fSAMPLING=fDTS/2, N=6 */
#  define TIM2_CCMR1_IC1F_FDTSd28   (0x5 << TIM2_CCMR1_IC1F_SHIFT)   /* 0101: fSAMPLING=fDTS/2, N=8 */
#  define TIM2_CCMR1_IC1F_FDTSd46   (0x6 << TIM2_CCMR1_IC1F_SHIFT)   /* 0110: fSAMPLING=fDTS/4, N=6 */
#  define TIM2_CCMR1_IC1F_FDTSd48   (0x7 << TIM2_CCMR1_IC1F_SHIFT)   /* 0111: fSAMPLING=fDTS/4, N=8 */
#  define TIM2_CCMR1_IC1F_FDTSd86   (0x8 << TIM2_CCMR1_IC1F_SHIFT)   /* 1000: fSAMPLING=fDTS/8, N=6 */
#  define TIM2_CCMR1_IC1F_FDTSd88   (0x9 << TIM2_CCMR1_IC1F_SHIFT)   /* 1001: fSAMPLING=fDTS/8, N=8 */
#  define TIM2_CCMR1_IC1F_FDTSd165  (0xa << TIM2_CCMR1_IC1F_SHIFT)   /* 1010: fSAMPLING=fDTS/16, N=5 */
#  define TIM2_CCMR1_IC1F_FDTSd166  (0xb << TIM2_CCMR1_IC1F_SHIFT)   /* 1011: fSAMPLING=fDTS/16, N=6 */
#  define TIM2_CCMR1_IC1F_FDTSd168  (0xc << TIM2_CCMR1_IC1F_SHIFT)   /* 1100: fSAMPLING=fDTS/16, N=8 */
#  define TIM2_CCMR1_IC1F_FDTSd325  (0xd << TIM2_CCMR1_IC1F_SHIFT)   /* 1101: fSAMPLING=fDTS/32, N=5 */
#  define TIM2_CCMR1_IC1F_FDTSd326  (0xe << TIM2_CCMR1_IC1F_SHIFT)   /* 1110: fSAMPLING=fDTS/32, N=6 */
#  define TIM2_CCMR1_IC1F_FDTSd328  (0xf << TIM2_CCMR1_IC1F_SHIFT)   /* 1111: fSAMPLING=fDTS/32, N=8 */

#define TIM2_CCMR1_IC2PSC_SHIFT     (10)      /* Bits 10-11: Input Capture 2 Prescaler */
#define TIM2_CCMR1_IC2PSC_MASK      (0x3 << TIM2_CCMR1_IC2PSC_SHIFT)
#  define TIM2_CCMR1_IC2PSC_NOPSC   (0x0 << TIM2_CCMR1_IC2PSC_SHIFT) /* 00: no prescaler, capture each edge */
#  define TIM2_CCMR1_IC2PSC_EVENTS2 (0x1 << TIM2_CCMR1_IC2PSC_SHIFT) /* 01: capture once every 2 events */
#  define TIM2_CCMR1_IC2PSC_EVENTS4 (0x2 << TIM2_CCMR1_IC2PSC_SHIFT) /* 10: capture once every 4 events */
#  define TIM2_CCMR1_IC2PSC_EVENTS8 (0x3 << TIM2_CCMR1_IC2PSC_SHIFT) /* 11: capture once every 8 events */
#define TIM2_CCMR1_IC2F_SHIFT       (12)      /* Bits 12-15: Input Capture 2 Filter */
#define TIM2_CCMR1_IC2F_MASK        (0xf << TIM2_CCMR1_IC2F_SHIFT)
#  define TIM2_CCMR1_IC2F_NOFILT    (0x0 << TIM2_CCMR1_IC2F_SHIFT)   /* 0000: No filter, sampling at fDTS */
#  define TIM2_CCMR1_IC2F_FCKINT2   (0x1 << TIM2_CCMR1_IC2F_SHIFT)   /* 0001: fSAMPLING=fCK_INT, N=2 */
#  define TIM2_CCMR1_IC2F_FCKINT4   (0x2 << TIM2_CCMR1_IC2F_SHIFT)   /* 0010: fSAMPLING=fCK_INT, N=4 */
#  define TIM2_CCMR1_IC2F_FCKINT8   (0x3 << TIM2_CCMR1_IC2F_SHIFT)   /* 0011: fSAMPLING=fCK_INT, N=8 */
#  define TIM2_CCMR1_IC2F_FDTSd26   (0x4 << TIM2_CCMR1_IC2F_SHIFT)   /* 0100: fSAMPLING=fDTS/2, N=6 */
#  define TIM2_CCMR1_IC2F_FDTSd28   (0x5 << TIM2_CCMR1_IC2F_SHIFT)   /* 0101: fSAMPLING=fDTS/2, N=8 */
#  define TIM2_CCMR1_IC2F_FDTSd46   (0x6 << TIM2_CCMR1_IC2F_SHIFT)   /* 0110: fSAMPLING=fDTS/4, N=6 */
#  define TIM2_CCMR1_IC2F_FDTSd48   (0x7 << TIM2_CCMR1_IC2F_SHIFT)   /* 0111: fSAMPLING=fDTS/4, N=8 */
#  define TIM2_CCMR1_IC2F_FDTSd86   (0x8 << TIM2_CCMR1_IC2F_SHIFT)   /* 1000: fSAMPLING=fDTS/8, N=6 */
#  define TIM2_CCMR1_IC2F_FDTSd88   (0x9 << TIM2_CCMR1_IC2F_SHIFT)   /* 1001: fSAMPLING=fDTS/8, N=8 */
#  define TIM2_CCMR1_IC2F_FDTSd165  (0xa << TIM2_CCMR1_IC2F_SHIFT)   /* 1010: fSAMPLING=fDTS/16, N=5 */
#  define TIM2_CCMR1_IC2F_FDTSd166  (0xb << TIM2_CCMR1_IC2F_SHIFT)   /* 1011: fSAMPLING=fDTS/16, N=6 */
#  define TIM2_CCMR1_IC2F_FDTSd168  (0xc << TIM2_CCMR1_IC2F_SHIFT)   /* 1100: fSAMPLING=fDTS/16, N=8 */
#  define TIM2_CCMR1_IC2F_FDTSd325  (0xd << TIM2_CCMR1_IC2F_SHIFT)   /* 1101: fSAMPLING=fDTS/32, N=5 */
#  define TIM2_CCMR1_IC2F_FDTSd326  (0xe << TIM2_CCMR1_IC2F_SHIFT)   /* 1110: fSAMPLING=fDTS/32, N=6 */
#  define TIM2_CCMR1_IC2F_FDTSd328  (0xf << TIM2_CCMR1_IC2F_SHIFT)   /* 1111: fSAMPLING=fDTS/32, N=8 */

#define TIM2_CCMR2_IC3PSC_SHIFT     (2)       /* Bits 2-3: Input Capture 3 Prescaler */
#define TIM2_CCMR2_IC3PSC_MASK      (0x3 << TIM2_CCMR2_IC3PSC_SHIFT)
#  define TIM2_CCMR2_IC3PSC_NOPSC   (0x0 << TIM2_CCMR2_IC3PSC_SHIFT) /* 00: no prescaler, capture each edge */
#  define TIM2_CCMR2_IC3PSC_EVENTS2 (0x1 << TIM2_CCMR2_IC3PSC_SHIFT) /* 01: capture once every 2 events */
#  define TIM2_CCMR2_IC3PSC_EVENTS4 (0x2 << TIM2_CCMR2_IC3PSC_SHIFT) /* 10: capture once every 4 events */
#  define TIM2_CCMR2_IC3PSC_EVENTS8 (0x3 << TIM2_CCMR2_IC3PSC_SHIFT) /* 11: capture once every 8 events */
#define TIM2_CCMR2_IC3F_SHIFT       (4)       /* Bits 4-7: Input Capture 3 Filter */
#define TIM2_CCMR2_IC3F_MASK        (0xf << TIM2_CCMR2_IC3F_SHIFT)
#  define TIM2_CCMR2_IC3F_NOFILT    (0x0 << TIM2_CCMR2_IC3F_SHIFT)   /* 0000: No filter, sampling at fDTS */
#  define TIM2_CCMR2_IC3F_FCKINT2   (0x1 << TIM2_CCMR2_IC3F_SHIFT)   /* 0001: fSAMPLING=fCK_INT, N=2 */
#  define TIM2_CCMR2_IC3F_FCKINT4   (0x2 << TIM2_CCMR2_IC3F_SHIFT)   /* 0010: fSAMPLING=fCK_INT, N=4 */
#  define TIM2_CCMR2_IC3F_FCKINT8   (0x3 << TIM2_CCMR2_IC3F_SHIFT)   /* 0011: fSAMPLING=fCK_INT, N=8 */
#  define TIM2_CCMR2_IC3F_FDTSd26   (0x4 << TIM2_CCMR2_IC3F_SHIFT)   /* 0100: fSAMPLING=fDTS/2, N=6 */
#  define TIM2_CCMR2_IC3F_FDTSd28   (0x5 << TIM2_CCMR2_IC3F_SHIFT)   /* 0101: fSAMPLING=fDTS/2, N=8 */
#  define TIM2_CCMR2_IC3F_FDTSd46   (0x6 << TIM2_CCMR2_IC3F_SHIFT)   /* 0110: fSAMPLING=fDTS/4, N=6 */
#  define TIM2_CCMR2_IC3F_FDTSd48   (0x7 << TIM2_CCMR2_IC3F_SHIFT)   /* 0111: fSAMPLING=fDTS/4, N=8 */
#  define TIM2_CCMR2_IC3F_FDTSd86   (0x8 << TIM2_CCMR2_IC3F_SHIFT)   /* 1000: fSAMPLING=fDTS/8, N=6 */
#  define TIM2_CCMR2_IC3F_FDTSd88   (0x9 << TIM2_CCMR2_IC3F_SHIFT)   /* 1001: fSAMPLING=fDTS/8, N=8 */
#  define TIM2_CCMR2_IC3F_FDTSd165  (0xa << TIM2_CCMR2_IC3F_SHIFT)   /* 1010: fSAMPLING=fDTS/16, N=5 */
#  define TIM2_CCMR2_IC3F_FDTSd166  (0xb << TIM2_CCMR2_IC3F_SHIFT)   /* 1011: fSAMPLING=fDTS/16, N=6 */
#  define TIM2_CCMR2_IC3F_FDTSd168  (0xc << TIM2_CCMR2_IC3F_SHIFT)   /* 1100: fSAMPLING=fDTS/16, N=8 */
#  define TIM2_CCMR2_IC3F_FDTSd325  (0xd << TIM2_CCMR2_IC3F_SHIFT)   /* 1101: fSAMPLING=fDTS/32, N=5 */
#  define TIM2_CCMR2_IC3F_FDTSd326  (0xe << TIM2_CCMR2_IC3F_SHIFT)   /* 1110: fSAMPLING=fDTS/32, N=6 */
#  define TIM2_CCMR2_IC3F_FDTSd328  (0xf << TIM2_CCMR2_IC3F_SHIFT)   /* 1111: fSAMPLING=fDTS/32, N=8 */

#define TIM2_CCMR2_IC4PSC_SHIFT     (10)      /* Bits 10-11: Input Capture 4 Prescaler */
#define TIM2_CCMR2_IC4PSC_MASK      (0x3 << TIM2_CCMR2_IC4PSC_SHIFT)
#  define TIM2_CCMR2_IC4PSC_NOPSC   (0x0 << TIM2_CCMR2_IC4PSC_SHIFT) /* 00: no prescaler, capture each edge */
#  define TIM2_CCMR2_IC4PSC_EVENTS2 (0x1 << TIM2_CCMR2_IC4PSC_SHIFT) /* 01: capture once every 2 events */
#  define TIM2_CCMR2_IC4PSC_EVENTS4 (0x2 << TIM2_CCMR2_IC4PSC_SHIFT) /* 10: capture once every 4 events */
#  define TIM2_CCMR2_IC4PSC_EVENTS8 (0x3 << TIM2_CCMR2_IC4PSC_SHIFT) /* 11: capture once every 8 events */
#define TIM2_CCMR2_IC4F_SHIFT       (12)      /* Bits 12-15: Input Capture 4 Filter */
#define TIM2_CCMR2_IC4F_MASK        (0xf << TIM2_CCMR2_IC4F_SHIFT)
#  define TIM2_CCMR2_IC4F_NOFILT    (0x0 << TIM2_CCMR2_IC4F_SHIFT)   /* 0000: No filter, sampling at fDTS */
#  define TIM2_CCMR2_IC4F_FCKINT2   (0x1 << TIM2_CCMR2_IC4F_SHIFT)   /* 0001: fSAMPLING=fCK_INT, N=2 */
#  define TIM2_CCMR2_IC4F_FCKINT4   (0x2 << TIM2_CCMR2_IC4F_SHIFT)   /* 0010: fSAMPLING=fCK_INT, N=4 */
#  define TIM2_CCMR2_IC4F_FCKINT8   (0x3 << TIM2_CCMR2_IC4F_SHIFT)   /* 0011: fSAMPLING=fCK_INT, N=8 */
#  define TIM2_CCMR2_IC4F_FDTSd26   (0x4 << TIM2_CCMR2_IC4F_SHIFT)   /* 0100: fSAMPLING=fDTS/2, N=6 */
#  define TIM2_CCMR2_IC4F_FDTSd28   (0x5 << TIM2_CCMR2_IC4F_SHIFT)   /* 0101: fSAMPLING=fDTS/2, N=8 */
#  define TIM2_CCMR2_IC4F_FDTSd46   (0x6 << TIM2_CCMR2_IC4F_SHIFT)   /* 0110: fSAMPLING=fDTS/4, N=6 */
#  define TIM2_CCMR2_IC4F_FDTSd48   (0x7 << TIM2_CCMR2_IC4F_SHIFT)   /* 0111: fSAMPLING=fDTS/4, N=8 */
#  define TIM2_CCMR2_IC4F_FDTSd86   (0x8 << TIM2_CCMR2_IC4F_SHIFT)   /* 1000: fSAMPLING=fDTS/8, N=6 */
#  define TIM2_CCMR2_IC4F_FDTSd88   (0x9 << TIM2_CCMR2_IC4F_SHIFT)   /* 1001: fSAMPLING=fDTS/8, N=8 */
#  define TIM2_CCMR2_IC4F_FDTSd165  (0xa << TIM2_CCMR2_IC4F_SHIFT)   /* 1010: fSAMPLING=fDTS/16, N=5 */
#  define TIM2_CCMR2_IC4F_FDTSd166  (0xb << TIM2_CCMR2_IC4F_SHIFT)   /* 1011: fSAMPLING=fDTS/16, N=6 */
#  define TIM2_CCMR2_IC4F_FDTSd168  (0xc << TIM2_CCMR2_IC4F_SHIFT)   /* 1100: fSAMPLING=fDTS/16, N=8 */
#  define TIM2_CCMR2_IC4F_FDTSd325  (0xd << TIM2_CCMR2_IC4F_SHIFT)   /* 1101: fSAMPLING=fDTS/32, N=5 */
#  define TIM2_CCMR2_IC4F_FDTSd326  (0xe << TIM2_CCMR2_IC4F_SHIFT)   /* 1110: fSAMPLING=fDTS/32, N=6 */
#  define TIM2_CCMR2_IC4F_FDTSd328  (0xf << TIM2_CCMR2_IC4F_SHIFT)   /* 1111: fSAMPLING=fDTS/32, N=8 */

#define TIM16_CCMR1_IC1PSC_SHIFT     (2)       /* Bits 2-3: Input Capture 1 Prescaler */
#define TIM16_CCMR1_IC1PSC_MASK      (0x3 << TIM16_CCMR1_IC1PSC_SHIFT)
#  define TIM16_CCMR1_IC1PSC_NOPSC   (0x0 << TIM16_CCMR1_IC1PSC_SHIFT) /* 00: no prescaler, capture each edge */
#  define TIM16_CCMR1_IC1PSC_EVENTS2 (0x1 << TIM16_CCMR1_IC1PSC_SHIFT) /* 01: capture once every 2 events */
#  define TIM16_CCMR1_IC1PSC_EVENTS4 (0x2 << TIM16_CCMR1_IC1PSC_SHIFT) /* 10: capture once every 4 events */
#  define TIM16_CCMR1_IC1PSC_EVENTS8 (0x3 << TIM16_CCMR1_IC1PSC_SHIFT) /* 11: capture once every 8 events */
#define TIM16_CCMR1_IC1F_SHIFT       (4)       /* Bits 4-7: Input Capture 1 Filter */
#define TIM16_CCMR1_IC1F_MASK        (0xf << TIM16_CCMR1_IC1F_SHIFT)
#  define TIM16_CCMR1_IC1F_NOFILT    (0x0 << TIM16_CCMR1_IC1F_SHIFT)   /* 0000: No filter, sampling at fDTS */
#  define TIM16_CCMR1_IC1F_FCKINT2   (0x1 << TIM16_CCMR1_IC1F_SHIFT)   /* 0001: fSAMPLING=fCK_INT, N=2 */
#  define TIM16_CCMR1_IC1F_FCKINT4   (0x2 << TIM16_CCMR1_IC1F_SHIFT)   /* 0010: fSAMPLING=fCK_INT, N=4 */
#  define TIM16_CCMR1_IC1F_FCKINT8   (0x3 << TIM16_CCMR1_IC1F_SHIFT)   /* 0011: fSAMPLING=fCK_INT, N=8 */
#  define TIM16_CCMR1_IC1F_FDTSd26   (0x4 << TIM16_CCMR1_IC1F_SHIFT)   /* 0100: fSAMPLING=fDTS/2, N=6 */
#  define TIM16_CCMR1_IC1F_FDTSd28   (0x5 << TIM16_CCMR1_IC1F_SHIFT)   /* 0101: fSAMPLING=fDTS/2, N=8 */
#  define TIM16_CCMR1_IC1F_FDTSd46   (0x6 << TIM16_CCMR1_IC1F_SHIFT)   /* 0110: fSAMPLING=fDTS/4, N=6 */
#  define TIM16_CCMR1_IC1F_FDTSd48   (0x7 << TIM16_CCMR1_IC1F_SHIFT)   /* 0111: fSAMPLING=fDTS/4, N=8 */
#  define TIM16_CCMR1_IC1F_FDTSd86   (0x8 << TIM16_CCMR1_IC1F_SHIFT)   /* 1000: fSAMPLING=fDTS/8, N=6 */
#  define TIM16_CCMR1_IC1F_FDTSd88   (0x9 << TIM16_CCMR1_IC1F_SHIFT)   /* 1001: fSAMPLING=fDTS/8, N=8 */
#  define TIM16_CCMR1_IC1F_FDTSd165  (0xa << TIM16_CCMR1_IC1F_SHIFT)   /* 1010: fSAMPLING=fDTS/16, N=5 */
#  define TIM16_CCMR1_IC1F_FDTSd166  (0xb << TIM16_CCMR1_IC1F_SHIFT)   /* 1011: fSAMPLING=fDTS/16, N=6 */
#  define TIM16_CCMR1_IC1F_FDTSd168  (0xc << TIM16_CCMR1_IC1F_SHIFT)   /* 1100: fSAMPLING=fDTS/16, N=8 */
#  define TIM16_CCMR1_IC1F_FDTSd325  (0xd << TIM16_CCMR1_IC1F_SHIFT)   /* 1101: fSAMPLING=fDTS/32, N=5 */
#  define TIM16_CCMR1_IC1F_FDTSd326  (0xe << TIM16_CCMR1_IC1F_SHIFT)   /* 1110: fSAMPLING=fDTS/32, N=6 */
#  define TIM16_CCMR1_IC1F_FDTSd328  (0xf << TIM16_CCMR1_IC1F_SHIFT)   /* 1111: fSAMPLING=fDTS/32, N=8 */

#define TIM17_CCMR1_IC1PSC_SHIFT     (2)       /* Bits 2-3: Input Capture 1 Prescaler */
#define TIM17_CCMR1_IC1PSC_MASK      (0x3 << TIM17_CCMR1_IC1PSC_SHIFT)
#  define TIM17_CCMR1_IC1PSC_NOPSC   (0x0 << TIM17_CCMR1_IC1PSC_SHIFT) /* 00: no prescaler, capture each edge */
#  define TIM17_CCMR1_IC1PSC_EVENTS2 (0x1 << TIM17_CCMR1_IC1PSC_SHIFT) /* 01: capture once every 2 events */
#  define TIM17_CCMR1_IC1PSC_EVENTS4 (0x2 << TIM17_CCMR1_IC1PSC_SHIFT) /* 10: capture once every 4 events */
#  define TIM17_CCMR1_IC1PSC_EVENTS8 (0x3 << TIM17_CCMR1_IC1PSC_SHIFT) /* 11: capture once every 8 events */
#define TIM17_CCMR1_IC1F_SHIFT       (4)       /* Bits 4-7: Input Capture 1 Filter */
#define TIM17_CCMR1_IC1F_MASK        (0xf << TIM17_CCMR1_IC1F_SHIFT)
#  define TIM17_CCMR1_IC1F_NOFILT    (0x0 << TIM17_CCMR1_IC1F_SHIFT)   /* 0000: No filter, sampling at fDTS */
#  define TIM17_CCMR1_IC1F_FCKINT2   (0x1 << TIM17_CCMR1_IC1F_SHIFT)   /* 0001: fSAMPLING=fCK_INT, N=2 */
#  define TIM17_CCMR1_IC1F_FCKINT4   (0x2 << TIM17_CCMR1_IC1F_SHIFT)   /* 0010: fSAMPLING=fCK_INT, N=4 */
#  define TIM17_CCMR1_IC1F_FCKINT8   (0x3 << TIM17_CCMR1_IC1F_SHIFT)   /* 0011: fSAMPLING=fCK_INT, N=8 */
#  define TIM17_CCMR1_IC1F_FDTSd26   (0x4 << TIM17_CCMR1_IC1F_SHIFT)   /* 0100: fSAMPLING=fDTS/2, N=6 */
#  define TIM17_CCMR1_IC1F_FDTSd28   (0x5 << TIM17_CCMR1_IC1F_SHIFT)   /* 0101: fSAMPLING=fDTS/2, N=8 */
#  define TIM17_CCMR1_IC1F_FDTSd46   (0x6 << TIM17_CCMR1_IC1F_SHIFT)   /* 0110: fSAMPLING=fDTS/4, N=6 */
#  define TIM17_CCMR1_IC1F_FDTSd48   (0x7 << TIM17_CCMR1_IC1F_SHIFT)   /* 0111: fSAMPLING=fDTS/4, N=8 */
#  define TIM17_CCMR1_IC1F_FDTSd86   (0x8 << TIM17_CCMR1_IC1F_SHIFT)   /* 1000: fSAMPLING=fDTS/8, N=6 */
#  define TIM17_CCMR1_IC1F_FDTSd88   (0x9 << TIM17_CCMR1_IC1F_SHIFT)   /* 1001: fSAMPLING=fDTS/8, N=8 */
#  define TIM17_CCMR1_IC1F_FDTSd165  (0xa << TIM17_CCMR1_IC1F_SHIFT)   /* 1010: fSAMPLING=fDTS/16, N=5 */
#  define TIM17_CCMR1_IC1F_FDTSd166  (0xb << TIM17_CCMR1_IC1F_SHIFT)   /* 1011: fSAMPLING=fDTS/16, N=6 */
#  define TIM17_CCMR1_IC1F_FDTSd168  (0xc << TIM17_CCMR1_IC1F_SHIFT)   /* 1100: fSAMPLING=fDTS/16, N=8 */
#  define TIM17_CCMR1_IC1F_FDTSd325  (0xd << TIM17_CCMR1_IC1F_SHIFT)   /* 1101: fSAMPLING=fDTS/32, N=5 */
#  define TIM17_CCMR1_IC1F_FDTSd326  (0xe << TIM17_CCMR1_IC1F_SHIFT)   /* 1110: fSAMPLING=fDTS/32, N=6 */
#  define TIM17_CCMR1_IC1F_FDTSd328  (0xf << TIM17_CCMR1_IC1F_SHIFT)   /* 1111: fSAMPLING=fDTS/32, N=8 */

/* Capture/compare enable register */

#define TIM1_CCER_CC1E              (1 << 0)  /* Bit 0: Capture/Compare 1 output enable */
#define TIM1_CCER_CC1P              (1 << 1)  /* Bit 1: Capture/Compare 1 output polarity */
#define TIM1_CCER_CC1NE             (1 << 2)  /* Bit 2: Capture/Compare 1 complementary output enable */
#define TIM1_CCER_CC1NP             (1 << 3)  /* Bit 3: Capture/Compare 1 complementary output polarity */
#define TIM1_CCER_CC2E              (1 << 4)  /* Bit 4: Capture/Compare 2 output enable */
#define TIM1_CCER_CC2P              (1 << 5)  /* Bit 5: Capture/Compare 2 output polarity */
#define TIM1_CCER_CC2NE             (1 << 6)  /* Bit 6: Capture/Compare 2 complementary output enable */
#define TIM1_CCER_CC2NP             (1 << 7)  /* Bit 7: Capture/Compare 2 complementary output polarity */
#define TIM1_CCER_CC3E              (1 << 8)  /* Bit 8: Capture/Compare 3 output enable */
#define TIM1_CCER_CC3P              (1 << 9)  /* Bit 9: Capture/Compare 3 output polarity */
#define TIM1_CCER_CC3NE             (1 << 10) /* Bit 10: Capture/Compare 3 complementary output enable */
#define TIM1_CCER_CC3NP             (1 << 11) /* Bit 11: Capture/Compare 3 complementary output polarity */
#define TIM1_CCER_CC4E              (1 << 12) /* Bit 12: Capture/Compare 4 output enable */
#define TIM1_CCER_CC4P              (1 << 13) /* Bit 13: Capture/Compare 4 output polarity */
#define TIM1_CCER_CC4NP             (1 << 15) /* Bit 15: Capture/Compare 4 complementary output polarity */
#define TIM1_CCER_CC5E              (1 << 16) /* Bit 16: Capture/Compare 5 output enable */
#define TIM1_CCER_CC5P              (1 << 17) /* Bit 17: Capture/Compare 5 output polarity */
#define TIM1_CCER_CC6E              (1 << 20) /* Bit 20: Capture/Compare 6 output enable */
#define TIM1_CCER_CC6P              (1 << 21) /* Bit 21: Capture/Compare 6 output polarity */

#define TIM2_CCER_CC1E              (1 << 0)  /* Bit 0: Capture/Compare 1 output enable */
#define TIM2_CCER_CC1P              (1 << 1)  /* Bit 1: Capture/Compare 1 output polarity */
#define TIM2_CCER_CC1NP             (1 << 3)  /* Bit 3: Capture/Compare 1 complementary output polarity */
#define TIM2_CCER_CC2E              (1 << 4)  /* Bit 4: Capture/Compare 2 output enable */
#define TIM2_CCER_CC2P              (1 << 5)  /* Bit 5: Capture/Compare 2 output polarity */
#define TIM2_CCER_CC2NP             (1 << 7)  /* Bit 7: Capture/Compare 2 complementary output polarity */
#define TIM2_CCER_CC3E              (1 << 8)  /* Bit 8: Capture/Compare 3 output enable */
#define TIM2_CCER_CC3P              (1 << 9)  /* Bit 9: Capture/Compare 3 output polarity */
#define TIM2_CCER_CC3NP             (1 << 11) /* Bit 11: Capture/Compare 3 complementary output polarity */
#define TIM2_CCER_CC4E              (1 << 12) /* Bit 12: Capture/Compare 4 output enable */
#define TIM2_CCER_CC4P              (1 << 13) /* Bit 13: Capture/Compare 4 output polarity */
#define TIM2_CCER_CC4NP             (1 << 15) /* Bit 15: Capture/Compare 4 complementary output polarity */

#define TIM16_CCER_CC1E             (1 << 0)  /* Bit 0: Capture/Compare 1 output enable */
#define TIM16_CCER_CC1P             (1 << 1)  /* Bit 1: Capture/Compare 1 output polarity */
#define TIM16_CCER_CC1NE            (1 << 2)  /* Bit 2: Capture/Compare 1 complementary output enable */
#define TIM16_CCER_CC1NP            (1 << 3)  /* Bit 3: Capture/Compare 1 complementary output polarity */

#define TIM17_CCER_CC1E             (1 << 0)  /* Bit 0: Capture/Compare 1 output enable */
#define TIM17_CCER_CC1P             (1 << 1)  /* Bit 1: Capture/Compare 1 output polarity */
#define TIM17_CCER_CC1NE            (1 << 2)  /* Bit 2: Capture/Compare 1 complementary output enable */
#define TIM17_CCER_CC1NP            (1 << 3)  /* Bit 3: Capture/Compare 1 complementary output polarity */

/* Counter register */

#define TIM1_CNT_SHIFT              (0)       /* Bits 0-15: Timer counter value */
#define TIM1_CNT_MASK               (0xffff << TIM1_CNT_SHIFT)
#define TIM1_CNT_UIFCPY             (1 << 31) /* Bit 31: UIF copy */

#define TIM2_CNT_SHIFT              (0)       /* Bits 0-31: Timer counter value */
#define TIM2_CNT_MASK               (0xffffffff << TIM2_CNT_SHIFT)  /* if UIFREMAP = 0 */
#define TIM2_CNT_MASK31             (0x7fffffff << TIM2_CNT_SHIFT)  /* if UIFREMAP = 1 */
#define TIM2_CNT_UIFCPY             (1 << 31) /* Bit 31: UIF copy, if UIFREMAP = 1 */

#define TIM16_CNT_SHIFT             (0)       /* Bits 0-15: Timer counter value */
#define TIM16_CNT_MASK              (0xffff << TIM16_CNT_SHIFT)
#define TIM16_CNT_UIFCPY            (1 << 31) /* Bit 31: UIF copy */

#define TIM17_CNT_SHIFT             (0)       /* Bits 0-15: Timer counter value */
#define TIM17_CNT_MASK              (0xffff << TIM17_CNT_SHIFT)
#define TIM17_CNT_UIFCPY            (1 << 31) /* Bit 31: UIF copy */

/* Prescaler register */

#define TIM1_PSC_SHIFT              (0)       /* Bits 0-15: Timer prescaler value */
#define TIM1_PSC_MASK               (0xffff << TIM1_PSC_SHIFT)

#define TIM2_PSC_SHIFT              (0)       /* Bits 0-15: Timer prescaler value */
#define TIM2_PSC_MASK               (0xffff << TIM2_PSC_SHIFT)

#define TIM16_PSC_SHIFT             (0)       /* Bits 0-15: Timer prescaler value */
#define TIM16_PSC_MASK              (0xffff << TIM16_PSC_SHIFT)

#define TIM17_PSC_SHIFT             (0)       /* Bits 0-15: Timer prescaler value */
#define TIM17_PSC_MASK              (0xffff << TIM17_PSC_SHIFT)

/* Auto-reload register */

#define TIM1_ARR_SHIFT              (0)       /* Bits 0-15: Timer auto-reload value */
#define TIM1_ARR_MASK               (0xffff << TIM1_ARR_SHIFT)

#define TIM2_ARR_SHIFT              (0)       /* Bits 0-31: Timer auto-reload value */
#define TIM2_ARR_MASK               (0xffffffff << TIM2_ARR_SHIFT)

#define TIM16_ARR_SHIFT             (0)       /* Bits 0-15: Timer auto-reload value */
#define TIM16_ARR_MASK              (0xffff << TIM16_ARR_SHIFT)

#define TIM17_ARR_SHIFT             (0)       /* Bits 0-15: Timer auto-reload value */
#define TIM17_ARR_MASK              (0xffff << TIM17_ARR_SHIFT)

/* Repetition counter register */

#define TIM1_RCR_SHIFT              (0)       /* Bits 0-15: Repetition Counter Value */
#define TIM1_RCR_MASK               (0xffff << TIM1_RCR_SHIFT)

#define TIM16_RCR_SHIFT             (0)       /* Bits 0-7: Repetition Counter Value */
#define TIM16_RCR_MASK              (0xff << TIM16_RCR_SHIFT)

#define TIM17_RCR_SHIFT             (0)       /* Bits 0-7: Repetition Counter Value */
#define TIM17_RCR_MASK              (0xff << TIM17_RCR_SHIFT)

/* Capture/compare registers */

#define TIM1_CCR1_SHIFT             (0)       /* Bits 0-15: Capture/Compare 1 value */
#define TIM1_CCR1_MASK              (0xffff << TIM1_CCR1_SHIFT)
#define TIM1_CCR2_SHIFT             (0)       /* Bits 0-15: Capture/Compare 2 value */
#define TIM1_CCR2_MASK              (0xffff << TIM1_CCR2_SHIFT)
#define TIM1_CCR3_SHIFT             (0)       /* Bits 0-15: Capture/Compare 3 value */
#define TIM1_CCR3_MASK              (0xffff << TIM1_CCR3_SHIFT)
#define TIM1_CCR4_SHIFT             (0)       /* Bits 0-15: Capture/Compare 4 value */
#define TIM1_CCR4_MASK              (0xffff << TIM1_CCR4_SHIFT)

#define TIM2_CCR1_SHIFT             (0)       /* Bits 0-31: Capture/Compare 1 value */
#define TIM2_CCR1_MASK              (0xffffffff << TIM2_CCR1_SHIFT)
#define TIM2_CCR2_SHIFT             (0)       /* Bits 0-31: Capture/Compare 2 value */
#define TIM2_CCR2_MASK              (0xffffffff << TIM2_CCR2_SHIFT)
#define TIM2_CCR3_SHIFT             (0)       /* Bits 0-31: Capture/Compare 3 value */
#define TIM2_CCR3_MASK              (0xffffffff << TIM2_CCR3_SHIFT)
#define TIM2_CCR4_SHIFT             (0)       /* Bits 0-31: Capture/Compare 4 value */
#define TIM2_CCR4_MASK              (0xffffffff << TIM2_CCR4_SHIFT)

#define TIM16_CCR1_SHIFT            (0)       /* Bits 0-15: Capture/Compare 1 value */
#define TIM16_CCR1_MASK             (0xffff << TIM16_CCR1_SHIFT)

#define TIM17_CCR1_SHIFT            (0)       /* Bits 0-15: Capture/Compare 1 value */
#define TIM17_CCR1_MASK             (0xffff << TIM17_CCR1_SHIFT)

/* Break and dead-time register */

#define TIM1_BDTR_DTG_SHIFT         (0)       /* Bits 7:0 [7:0]: Dead-Time Generator set-up */
#define TIM1_BDTR_DTG_MASK          (0xff << TIM1_BDTR_DTG_SHIFT)
#define TIM1_BDTR_LOCK_SHIFT        (8)       /* Bits 9:8 [1:0]: Lock Configuration */
#define TIM1_BDTR_LOCK_MASK         (0x3 << TIM1_BDTR_LOCK_SHIFT)
#  define TIM1_BDTR_LOCKOFF         (0x0 << TIM1_BDTR_LOCK_SHIFT) /* 00: LOCK OFF - No bit is write protected */
#  define TIM1_BDTR_LOCK1           (0x1 << TIM1_BDTR_LOCK_SHIFT) /* 01: LOCK Level 1 protection */
#  define TIM1_BDTR_LOCK2           (0x2 << TIM1_BDTR_LOCK_SHIFT) /* 10: LOCK Level 2 protection */
#  define TIM1_BDTR_LOCK3           (0x3 << TIM1_BDTR_LOCK_SHIFT) /* 11: LOCK Level 3 protection */
#define TIM1_BDTR_OSSI              (1 << 10) /* Bit 10: Off-State Selection for Idle mode */
#define TIM1_BDTR_OSSR              (1 << 11) /* Bit 11: Off-State Selection for Run mode */
#define TIM1_BDTR_BKE               (1 << 12) /* Bit 12: Break enable */
#define TIM1_BDTR_BKP               (1 << 13) /* Bit 13: Break Polarity */
#define TIM1_BDTR_AOE               (1 << 14) /* Bit 14: Automatic Output enable */
#define TIM1_BDTR_MOE               (1 << 15) /* Bit 15: Main Output enable */
#define TIM1_BDTR_BKF_SHIFT         (16)      /* Bits 16-19: Break filter */
#define TIM1_BDTR_BKF_MASK          (0xf << TIM1_BDTR_BKF_SHIFT)
#  define TIM1_BDTR_BKF(f)          ((f) << TIM1_BDTR_BKF_SHIFT) /* f - STM32WB_DF_x  param */
#define TIM1_BDTR_BK2F_SHIFT        (20)      /* Bits 20-23: Break 2 filter */
#define TIM1_BDTR_BK2F_MASK         (0xf << TIM1_BDTR_BK2F_SHIFT)
#  define TIM1_BDTR_BK2F(f)         ((f) << TIM1_BDTR_BK2F_SHIFT) /* f - STM32WB_DF_x param */
#define TIM1_BDTR_BK2E              (1 << 24) /* Bit 24: Break 2 enable */
#define TIM1_BDTR_BK2P              (1 << 25) /* Bit 25: Break 2 polarity */
#define TIM1_BDTR_BKDSRM            (1 << 26) /* Bit 26: Break Disarm */
#define TIM1_BDTR_BK2DSRM           (1 << 27) /* Bit 27: Break 2 Disarm */
#define TIM1_BDTR_BKBID             (1 << 28) /* Bit 28: Break Bidirectional */
#define TIM1_BDTR_BK2BID            (1 << 29) /* Bit 29: Break 2 Bidirectional */

#define TIM16_BDTR_DTG_SHIFT         (0)       /* Bits 7:0 [7:0]: Dead-Time Generator set-up */
#define TIM16_BDTR_DTG_MASK          (0xff << TIM16_BDTR_DTG_SHIFT)
#define TIM16_BDTR_LOCK_SHIFT        (8)       /* Bits 9:8 [1:0]: Lock Configuration */
#define TIM16_BDTR_LOCK_MASK         (0x3 << TIM16_BDTR_LOCK_SHIFT)
#  define TIM16_BDTR_LOCKOFF         (0x0 << TIM16_BDTR_LOCK_SHIFT) /* 00: LOCK OFF - No bit is write protected */
#  define TIM16_BDTR_LOCK1           (0x1 << TIM16_BDTR_LOCK_SHIFT) /* 01: LOCK Level 1 protection */
#  define TIM16_BDTR_LOCK2           (0x2 << TIM16_BDTR_LOCK_SHIFT) /* 10: LOCK Level 2 protection */
#  define TIM16_BDTR_LOCK3           (0x3 << TIM16_BDTR_LOCK_SHIFT) /* 11: LOCK Level 3 protection */
#define TIM16_BDTR_OSSI              (1 << 10) /* Bit 10: Off-State Selection for Idle mode */
#define TIM16_BDTR_OSSR              (1 << 11) /* Bit 11: Off-State Selection for Run mode */
#define TIM16_BDTR_BKE               (1 << 12) /* Bit 12: Break enable */
#define TIM16_BDTR_BKP               (1 << 13) /* Bit 13: Break Polarity */
#define TIM16_BDTR_AOE               (1 << 14) /* Bit 14: Automatic Output enable */
#define TIM16_BDTR_MOE               (1 << 15) /* Bit 15: Main Output enable */
#define TIM16_BDTR_BKDSRM            (1 << 26) /* Bit 26: Break Disarm */
#define TIM16_BDTR_BKBID             (1 << 28) /* Bit 28: Break Bidirectional */

#define TIM17_BDTR_DTG_SHIFT         (0)       /* Bits 7:0 [7:0]: Dead-Time Generator set-up */
#define TIM17_BDTR_DTG_MASK          (0xff << TIM17_BDTR_DTG_SHIFT)
#define TIM17_BDTR_LOCK_SHIFT        (8)       /* Bits 9:8 [1:0]: Lock Configuration */
#define TIM17_BDTR_LOCK_MASK         (0x3 << TIM17_BDTR_LOCK_SHIFT)
#  define TIM17_BDTR_LOCKOFF         (0x0 << TIM17_BDTR_LOCK_SHIFT) /* 00: LOCK OFF - No bit is write protected */
#  define TIM17_BDTR_LOCK1           (0x1 << TIM17_BDTR_LOCK_SHIFT) /* 01: LOCK Level 1 protection */
#  define TIM17_BDTR_LOCK2           (0x2 << TIM17_BDTR_LOCK_SHIFT) /* 10: LOCK Level 2 protection */
#  define TIM17_BDTR_LOCK3           (0x3 << TIM17_BDTR_LOCK_SHIFT) /* 11: LOCK Level 3 protection */
#define TIM17_BDTR_OSSI              (1 << 10) /* Bit 10: Off-State Selection for Idle mode */
#define TIM17_BDTR_OSSR              (1 << 11) /* Bit 11: Off-State Selection for Run mode */
#define TIM17_BDTR_BKE               (1 << 12) /* Bit 12: Break enable */
#define TIM17_BDTR_BKP               (1 << 13) /* Bit 13: Break Polarity */
#define TIM17_BDTR_AOE               (1 << 14) /* Bit 14: Automatic Output enable */
#define TIM17_BDTR_MOE               (1 << 15) /* Bit 15: Main Output enable */
#define TIM17_BDTR_BKDSRM            (1 << 26) /* Bit 26: Break Disarm */
#define TIM17_BDTR_BKBID             (1 << 28) /* Bit 28: Break Bidirectional */

/* DMA control register */

#define TIM1_DCR_DBA_SHIFT        (0)       /* Bits 0-4: DMA Base Address */
#define TIM1_DCR_DBA_MASK         (0x1f << TIM1_DCR_DBA_SHIFT)
#define TIM1_DCR_DBL_SHIFT        (8)       /* Bits 8-12: DMA Burst Length */
#define TIM1_DCR_DBL_MASK         (0x1f << TIM1_DCR_DBL_SHIFT)
#  define TIM1_DCR_DBL(n)         (((n)-1) << ATIM_DCR_DBL_SHIFT) /* n transfers, n = 1..18 */

#define TIM2_DCR_DBA_SHIFT        (0)       /* Bits 0-4: DMA Base Address */
#define TIM2_DCR_DBA_MASK         (0x1f << TIM2_DCR_DBA_SHIFT)
#define TIM2_DCR_DBL_SHIFT        (8)       /* Bits 8-12: DMA Burst Length */
#define TIM2_DCR_DBL_MASK         (0x1f << TIM2_DCR_DBL_SHIFT)
#  define TIM2_DCR_DBL(n)         (((n)-1) << ATIM_DCR_DBL_SHIFT) /* n transfers, n = 1..18 */

#define TIM16_DCR_DBA_SHIFT        (0)       /* Bits 0-4: DMA Base Address */
#define TIM16_DCR_DBA_MASK         (0x1f << TIM16_DCR_DBA_SHIFT)
#define TIM16_DCR_DBL_SHIFT        (8)       /* Bits 8-12: DMA Burst Length */
#define TIM16_DCR_DBL_MASK         (0x1f << TIM16_DCR_DBL_SHIFT)
#  define TIM16_DCR_DBL(n)         (((n)-1) << ATIM_DCR_DBL_SHIFT) /* n transfers, n = 1..18 */

#define TIM17_DCR_DBA_SHIFT        (0)       /* Bits 0-4: DMA Base Address */
#define TIM17_DCR_DBA_MASK         (0x1f << TIM17_DCR_DBA_SHIFT)
#define TIM17_DCR_DBL_SHIFT        (8)       /* Bits 8-12: DMA Burst Length */
#define TIM17_DCR_DBL_MASK         (0x1f << TIM17_DCR_DBL_SHIFT)
#  define TIM17_DCR_DBL(n)         (((n)-1) << ATIM_DCR_DBL_SHIFT) /* n transfers, n = 1..18 */









#endif /* __ARCH_ARM_SRC_STM32L4_HARDWARE_STM32L4_TIM_H */
