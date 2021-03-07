/************************************************************************************
 * arch/arm/src/stm32l4/hardware/stm32l4_flash.h
 *
 *   Copyright (C) 2009, 2011, 2015, 2017 Gregory Nutt. All rights reserved.
 *   Authors: Gregory Nutt <gnutt@nuttx.org>
 *            David Sidrane <david_s5@nscdg.com>
 *            Juha Niskanen <juha.niskanen@haltian.com>
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

#ifndef __ARCH_ARM_SRC_STM32L4_HARDWARE_STM32L4_FLASH_H
#define __ARCH_ARM_SRC_STM32L4_HARDWARE_STM32L4_FLASH_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/

/* Flash size is known from the chip selection:
 *
 *   When CONFIG_STM32L4_FLASH_OVERRIDE_DEFAULT is set the
 *   CONFIG_STM32L4_FLASH_CONFIG_x selects the default FLASH size based on the chip
 *   part number. This value can be overridden with CONFIG_STM32L4_FLASH_OVERRIDE_x
 *
 *   Parts STM32WB3xxC have 256Kb of FLASH
 *   Parts STM32WB5xxC have 256Kb of FLASH
 *   Parts STM32WB1xxC have 320Kb of FLASH
 *   Parts STM32WBxxxE have 512Kb of FLASH
 *   Parts STM32WBxxxY have 640Kb of FLASH
 *   Parts STM32WBxxxG have 1024Kb of FLASH
 *
 *   N.B. Only Single bank mode is supported
 */

#if !defined(CONFIG_STM32L4_FLASH_OVERRIDE_DEFAULT) && \
    !defined(CONFIG_STM32L4_FLASH_OVERRIDE_C_256) && \
    !defined(CONFIG_STM32L4_FLASH_OVERRIDE_C_320) && \
    !defined(CONFIG_STM32L4_FLASH_OVERRIDE_E_512) && \
    !defined(CONFIG_STM32L4_FLASH_OVERRIDE_Y_640) && \
    !defined(CONFIG_STM32L4_FLASH_OVERRIDE_G_1024) && \
    !defined(CONFIG_STM32L4_FLASH_CONFIG_C_256) && \
    !defined(CONFIG_STM32L4_FLASH_CONFIG_C_320) && \
    !defined(CONFIG_STM32L4_FLASH_CONFIG_E_512) && \
    !defined(CONFIG_STM32L4_FLASH_CONFIG_Y_640) && \
    !defined(CONFIG_STM32L4_FLASH_CONFIG_G_1024)
#  error "Flash size not defined"
#endif

/* Override of the Flash has been chosen */

#if !defined(CONFIG_STM32L4_FLASH_OVERRIDE_DEFAULT)
#  undef CONFIG_STM32L4_FLASH_CONFIG_C_256
#  undef CONFIG_STM32L4_FLASH_CONFIG_C_320
#  undef CONFIG_STM32L4_FLASH_CONFIG_E_512
#  undef CONFIG_STM32L4_FLASH_CONFIG_Y_640
#  undef CONFIG_STM32L4_FLASH_CONFIG_G_1024
#  if defined(CONFIG_STM32L4_FLASH_OVERRIDE_C_256)
#    define CONFIG_STM32L4_FLASH_CONFIG_C_256
#  elif defined(CONFIG_STM32L4_FLASH_OVERRIDE_C_320)
#    define CONFIG_STM32L4_FLASH_CONFIG_C_320
#  elif defined(CONFIG_STM32L4_FLASH_OVERRIDE_E_512)
#    define CONFIG_STM32L4_FLASH_CONFIG_E_512
#  elif defined(CONFIG_STM32L4_FLASH_OVERRIDE_Y_640)
#    define CONFIG_STM32L4_FLASH_CONFIG_Y_640
#  elif defined(CONFIG_STM32L4_FLASH_OVERRIDE_G_1024)
#    define CONFIG_STM32L4_FLASH_CONFIG_G_1024
#  endif
#endif

/* Define the valid configuration  */

#if defined(CONFIG_STM32L4_FLASH_CONFIG_C_256) /* 256 kB */
#  define STM32L4_FLASH_NPAGES      64
#  define STM32L4_FLASH_PAGESIZE    4096
#elif defined(CONFIG_STM32L4_FLASH_CONFIG_C_320) /* 320 kB */
#  define STM32L4_FLASH_NPAGES      80
#  define STM32L4_FLASH_PAGESIZE    4096
#elif defined(CONFIG_STM32L4_FLASH_CONFIG_E_512) /* 512 kB */
#  define STM32L4_FLASH_NPAGES      128
#  define STM32L4_FLASH_PAGESIZE    4096
#elif defined(CONFIG_STM32L4_FLASH_CONFIG_Y_640) /* 640 kB */
#  define STM32L4_FLASH_NPAGES      160
#  define STM32L4_FLASH_PAGESIZE    4096
#elif defined(CONFIG_STM32L4_FLASH_CONFIG_G_1024) /* 1 MB */
#  define STM32L4_FLASH_NPAGES      256
#  define STM32L4_FLASH_PAGESIZE    4096
#else
#  error "unknown flash configuration!"
#endif

#ifdef STM32L4_FLASH_PAGESIZE
#  define STM32L4_FLASH_SIZE            (STM32L4_FLASH_NPAGES * STM32L4_FLASH_PAGESIZE)
#endif

/* Register Offsets *****************************************************************/

#define STM32L4_FLASH_ACR_OFFSET        0x0000
#define STM32L4_FLASH_KEYR_OFFSET       0x0008
#define STM32L4_FLASH_OPTKEYR_OFFSET    0x000c
#define STM32L4_FLASH_SR_OFFSET         0x0010
#define STM32L4_FLASH_CR_OFFSET         0x0014
#define STM32L4_FLASH_ECCR_OFFSET       0x0018
#define STM32L4_FLASH_OPTR_OFFSET       0x0020
#define STM32L4_FLASH_PCROP1SR_OFFSET   0x0024
#define STM32L4_FLASH_PCROP1ER_OFFSET   0x0028
#define STM32L4_FLASH_WRP1AR_OFFSET     0x002c
#define STM32L4_FLASH_WRP1BR_OFFSET     0x0030

#define STM32L4_FLASH_PCROP1BSR_OFFSET  0x0034
#define STM32L4_FLASH_PCROP1BER_OFFSET  0x0038
#define STM32L4_FLASH_IPCCBR_OFFSET     0x003C
#define STM32L4_FLASH_C2ACR_OFFSET      0x005C
#define STM32L4_FLASH_C2SR_OFFSET       0x0060
#define STM32L4_FLASH_C2CR_OFFSET       0x0064
#define STM32L4_FLASH_SFR_OFFSET        0x0080
#define STM32L4_FLASH_SRRVR_OFFSET      0x0084



/* Register Addresses ***************************************************************/

#define STM32L4_FLASH_ACR               (STM32L4_FLASHIF_BASE + STM32L4_FLASH_ACR_OFFSET)
#define STM32L4_FLASH_KEYR              (STM32L4_FLASHIF_BASE + STM32L4_FLASH_KEYR_OFFSET)
#define STM32L4_FLASH_OPTKEYR           (STM32L4_FLASHIF_BASE + STM32L4_FLASH_OPTKEYR_OFFSET)
#define STM32L4_FLASH_SR                (STM32L4_FLASHIF_BASE + STM32L4_FLASH_SR_OFFSET)
#define STM32L4_FLASH_CR                (STM32L4_FLASHIF_BASE + STM32L4_FLASH_CR_OFFSET)
#define STM32L4_FLASH_ECCR              (STM32L4_FLASHIF_BASE + STM32L4_FLASH_ECCR_OFFSET)
#define STM32L4_FLASH_OPTR              (STM32L4_FLASHIF_BASE + STM32L4_FLASH_OPTR_OFFSET)
#define STM32L4_FLASH_PCROP1SR          (STM32L4_FLASHIF_BASE + STM32L4_FLASH_PCROP1SR_OFFSET)
#define STM32L4_FLASH_PCROP1ER          (STM32L4_FLASHIF_BASE + STM32L4_FLASH_PCROP1ER_OFFSET)
#define STM32L4_FLASH_WRP1AR            (STM32L4_FLASHIF_BASE + STM32L4_FLASH_WRP1AR_OFFSET)
#define STM32L4_FLASH_WRP1BR            (STM32L4_FLASHIF_BASE + STM32L4_FLASH_WRP1BR_OFFSET)

#define STM32L4_FLASH_PCROP1BSR         (STM32L4_FLASHIF_BASE + STM32L4_FLASH_PCROP1BSR_OFFSET)
#define STM32L4_FLASH_PCROP1BER         (STM32L4_FLASHIF_BASE + STM32L4_FLASH_PCROP1BER_OFFSET)
#define STM32L4_FLASH_IPCCBR            (STM32L4_FLASHIF_BASE + STM32L4_FLASH_IPCCBR_OFFSET)
#define STM32L4_FLASH_C2ACR             (STM32L4_FLASHIF_BASE + STM32L4_FLASH_C2ACR_OFFSET)
#define STM32L4_FLASH_C2SR              (STM32L4_FLASHIF_BASE + STM32L4_FLASH_C2SR_OFFSET)
#define STM32L4_FLASH_C2CR              (STM32L4_FLASHIF_BASE + STM32L4_FLASH_C2CR_OFFSET)
#define STM32L4_FLASH_SFR               (STM32L4_FLASHIF_BASE + STM32L4_FLASH_SFR_OFFSET)
#define STM32L4_FLASH_SRRVR             (STM32L4_FLASHIF_BASE + STM32L4_FLASH_SRRVR_OFFSET)

/* Register Bitfield Definitions ****************************************************/
/* Flash Access Control Register (ACR) */

#define FLASH_ACR_LATENCY_SHIFT     (0)
#define FLASH_ACR_LATENCY_MASK      (0x7 << FLASH_ACR_LATENCY_SHIFT)
#  define FLASH_ACR_LATENCY(n)      ((n) << FLASH_ACR_LATENCY_SHIFT)  /* n wait states, n = 0..3 */
#  define FLASH_ACR_LATENCY_0       (0x0 << FLASH_ACR_LATENCY_SHIFT)  /* 000: Zero wait states  */
#  define FLASH_ACR_LATENCY_1       (0x1 << FLASH_ACR_LATENCY_SHIFT)  /* 001: One wait state    */
#  define FLASH_ACR_LATENCY_2       (0x2 << FLASH_ACR_LATENCY_SHIFT)  /* 010: Two wait states   */
#  define FLASH_ACR_LATENCY_3       (0x3 << FLASH_ACR_LATENCY_SHIFT)  /* 011: Three wait states */
#define FLASH_ACR_PRFTEN            (1 << 8)  /* Bit 8:  Prefetch enable */
#define FLASH_ACR_ICEN              (1 << 9)  /* Bit 9:  Instruction cache enable */
#define FLASH_ACR_DCEN              (1 << 10) /* Bit 10: Data cache enable */
#define FLASH_ACR_ICRST             (1 << 11) /* Bit 11: Instruction cache reset */
#define FLASH_ACR_DCRST             (1 << 12) /* Bit 12: Data cache reset */
#define FLASH_ACR_PES               (1 << 15) /* Bit 15: Program/Erase suspend request */
#define FLASH_ACR_EMPTY             (1 << 16) /* Bit 16: Flash memory user area empty */

/* Flash memory key register (KEYR) */

#define FLASH_KEYR_KEY1             0x45670123
#define FLASH_KEYR_KEY2             0xcdef89ab

/* Flash memory option key register (OPTKEYR) */

#define FLASH_OPTKEYR_KEY1          0x08192a3b
#define FLASH_OPTKEYR_KEY2          0x4c5d6e7f

/* Flash Status Register (SR) */

#define FLASH_SR_EOP                (1 << 0)  /* Bit 0:  End of operation */
#define FLASH_SR_OPERR              (1 << 1)  /* Bit 1:  Operation error */
#define FLASH_SR_PROGERR            (1 << 3)  /* Bit 3:  Programming error */
#define FLASH_SR_WRPERR             (1 << 4)  /* Bit 4:  Write protection error */
#define FLASH_SR_PGAERR             (1 << 5)  /* Bit 5:  Programming alignment error */
#define FLASH_SR_SIZERR             (1 << 6)  /* Bit 6:  Size error */
#define FLASH_SR_PGSERR             (1 << 7)  /* Bit 7:  Programming sequence error */
#define FLASH_SR_MISERR             (1 << 8)  /* Bit 8:  Fast programming data miss error */
#define FLASH_SR_FASTERR            (1 << 9)  /* Bit 9:  Fast programming error */
#define FLASH_SR_OPTNV              (1 << 13) /* Bit 13: User option OPTVAL indication */
#define FLASH_SR_RDERR              (1 << 14) /* Bit 14: PCROP read error */
#define FLASH_SR_OPTVERR            (1 << 15) /* Bit 15: Option and Engineering bit validity error */
#define FLASH_SR_BSY                (1 << 16) /* Bit 16: Busy */
#define FLASH_SR_CFGBSY             (1 << 18) /* Bit 18: Programming or erase configuration busy */
#define FLASH_SR_PESD               (1 << 19) /* Bit 19: Programming / erase configuration suspended */

/* Flash Control Register (CR) */

#define FLASH_CR_PG                 (1 << 0)  /* Bit 0 : Program Page */
#define FLASH_CR_PER                (1 << 1)  /* Bit 1 : Page Erase */
#define FLASH_CR_MER1               (1 << 2)  /* Bit 2 : Mass Erase Bank 1 */
#define FLASH_CR_PNB_SHIFT          (3)       /* Bits 3-10: Page number selection */
#define FLASH_CR_PNB_MASK           (0xff << FLASH_CR_PNB_SHIFT)
#  define FLASH_CR_PNB(n)           ((n)  << FLASH_CR_PNB_SHIFT) /* Page n, n = 0..255 */
#define FLASH_CR_START              (1 << 16) /* Bit 16: Start Erase */
#define FLASH_CR_OPTSTRT            (1 << 17) /* Bit 17: Options modification Start */
#define FLASH_CR_FSTPG              (1 << 18) /* Bit 18: Fast programming */
#define FLASH_CR_EOPIE              (1 << 24) /* Bit 24: End of operation interrupt enable */
#define FLASH_CR_ERRIE              (1 << 25) /* Bit 25: Error interrupt enable */
#define FLASH_CR_RDERRIE            (1 << 26) /* Bit 26: PCROP read error interrupt enable */
#define FLASH_CR_OBL_LAUNCH         (1 << 27) /* Bit 27: Force option byte loading */
#define FLASH_CR_OPTLOCK            (1 << 30) /* Bit 30: Option Lock */
#define FLASH_CR_LOCK               (1 << 31) /* Bit 31: Lock */

/* Flash ECC Register (ECCR) */

#define FLASH_ECCR_ADDR_ECC_SHIFT   (0)       /* Bits 0-16: ECC fail address
#define FLASH_ECCR_ADDR_ECC_MASK    (0x1ffff << FLASH_ECCR_ADDR_ECC_SHIFT)
#define FLASH_ECCR_SYSF_ECC         (1 << 20) /* Bit 20: System Flash ECC fail */
#define FLASH_ECCR_ECCCIE           (1 << 24) /* Bit 24: ECC correction interrupt enable */

#define FLASH_ECCR_ECCC             (1 << 30) /* Bit 30: ECC correction */
#define FLASH_ECCR_ECCD             (1 << 31) /* Bit 31: ECC detection */



//#define FLASH_ECCR_ADDR_ECC_SHIFT   (0)       /* Bits 0-20: ECC fail address
//#define FLASH_ECCR_ADDR_ECC_MASK    (0x1fffff << FLASH_ECCR_ADDR_ECC_SHIFT)

#define FLASH_ECCR_BK_ECC           (1 << 21) /* Bit 21: ECC fail bank */
#define FLASH_ECCR_SYSF_ECC         (1 << 22) /* Bit 22: System Flash ECC fail */
#define FLASH_ECCR_ECCCIE           (1 << 24) /* Bit 24: ECC correction interrupt enable */
#define FLASH_ECCR_ECCC2            (1 << 28) /* Bit 28: ECC correction on bits 64-127 */
#define FLASH_ECCR_ECCD2            (1 << 29) /* Bit 29: ECC detection on bits 64-127 */
#define FLASH_ECCR_ECCC             (1 << 30) /* Bit 30: ECC correction on bits 0-63 */
#define FLASH_ECCR_ECCD             (1 << 31) /* Bit 31: ECC detection on bits 0-63 */




/* Flash Option Control Register (OPTCR) */

#define FLASH_OPTCR_NRST_STOP       (1 << 12)               /* Bit 12: Generate reset when entering the Stop mode */
#define FLASH_OPTCR_NRST_STDBY      (1 << 13)               /* Bit 13: Generate reset when entering the Standby mode */
#define FLASH_OPTCR_NRST_SHDW       (1 << 14)               /* Bit 14: Generate reset when entering the Shutdown mode */
#define FLASH_OPTCR_IWDG_SW         (1 << 16)               /* Bit 16: Independent watchdog selection */
#define FLASH_OPTCR_IWDG_STOP       (1 << 17)               /* Bit 17: Independent watchdog counter freeze in Stop mode */
#define FLASH_OPTCR_IWDG_STDBY      (1 << 18)               /* Bit 18: Independent watchdog counter freeze in Standby mode*/
#define FLASH_OPTCR_WWDG_SW         (1 << 19)               /* Bit 19: Window watchdog selection */
#if defined(CONFIG_STM32L4_STM32L4X5) || defined(CONFIG_STM32L4_STM32L4X6) || \
    defined(CONFIG_STM32L4_STM32L4XR)
#  define FLASH_OPTCR_BFB2          (1 << 20)               /* Bit 20: Dual bank boot */
#  define FLASH_OPTCR_DUALBANK      (1 << 21)               /* Bit 21: Dual bank enable */
#endif
#define FLASH_OPTCR_NBOOT1          (1 << 23)               /* Bit 23: Boot configuration */
#define FLASH_OPTCR_SRAM2_PE        (1 << 24)               /* Bit 24: SRAM2 parity check enable */
#define FLASH_OPTCR_SRAM2_RST       (1 << 25)               /* Bit 25: SRAM2 Erase when system reset */
#if defined(CONFIG_STM32L4_STM32L4X3) || defined(CONFIG_STM32L4_STM32L496XX) || defined(CONFIG_STM32L4_STM32L4XR)
#  define FLASH_OPTCR_NSWBOOT0      (1 << 26)               /* Bit 26: Software BOOT0 */
#  define FLASH_OPTCR_NBOOT0        (1 << 27)               /* Bit 27: nBOOT0 option bit */
#endif

#define FLASH_OPTCR_BORLEV_SHIFT    (8)                     /* Bits 8-10: BOR reset Level */
#define FLASH_OPTCR_BORLEV_MASK     (7 << FLASH_OPTCR_BORLEV_SHIFT)
#define FLASH_OPTCR_VBOR0           (0 << FLASH_OPTCR_BORLEV_SHIFT) /* 000: BOR Level 0 (1.7 V) */
#define FLASH_OPTCR_VBOR1           (1 << FLASH_OPTCR_BORLEV_SHIFT) /* 001: BOR Level 1 (2.0 V) */
#define FLASH_OPTCR_VBOR2           (2 << FLASH_OPTCR_BORLEV_SHIFT) /* 010: BOR Level 2 (2.2 V) */
#define FLASH_OPTCR_VBOR3           (3 << FLASH_OPTCR_BORLEV_SHIFT) /* 011: BOR Level 3 (2.5 V) */
#define FLASH_OPTCR_VBOR4           (4 << FLASH_OPTCR_BORLEV_SHIFT) /* 100: BOR Level 4 (2.8 V) */
#define FLASH_OPTCR_RDP_SHIFT       (0)                     /* Bits 0-7: Read Protection Level */
#define FLASH_OPTCR_RDP_MASK        (0xFF << FLASH_OPTCR_RDP_SHIFT)
#define FLASH_OPTCR_RDP_NONE        (0xAA << FLASH_OPTCR_RDP_SHIFT)
#define FLASH_OPTCR_RDP_CHIP        (0xCC << FLASH_OPTCR_RDP_SHIFT) /* WARNING, CANNOT BE REVERSED !! */

/* Flash Configuration Register (CFGR) */

#if defined(CONFIG_STM32L4_STM32L4XR)
#  define FLASH_CFGR_LVEN           (1 << 0)                /* Bit 0: Low voltage enable */
#endif

#endif /* __ARCH_ARM_SRC_STM32L4_HARDWARE_STM32L4_FLASH_H */
