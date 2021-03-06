/**
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#include "soc/clkrst_reg.h"
#ifdef __cplusplus
extern "C" {
#endif

/** SYSTEM_CPU_PERI_CLK_EN_REG register
 *  register description
 */
#define SYSTEM_CPU_PERI_CLK_EN_REG (DR_REG_SYSTEM_BASE + 0x0)
/** SYSTEM_CLK_EN_ASSIST_DEBUG : R/W; bitpos: [6]; default: 0;
 *  Need add description
 */
#define SYSTEM_CLK_EN_ASSIST_DEBUG    (BIT(6))
#define SYSTEM_CLK_EN_ASSIST_DEBUG_M  (SYSTEM_CLK_EN_ASSIST_DEBUG_V << SYSTEM_CLK_EN_ASSIST_DEBUG_S)
#define SYSTEM_CLK_EN_ASSIST_DEBUG_V  0x00000001U
#define SYSTEM_CLK_EN_ASSIST_DEBUG_S  6
/** SYSTEM_CLK_EN_DEDICATED_GPIO : R/W; bitpos: [7]; default: 0;
 *  Need add description
 */
#define SYSTEM_CLK_EN_DEDICATED_GPIO    (BIT(7))
#define SYSTEM_CLK_EN_DEDICATED_GPIO_M  (SYSTEM_CLK_EN_DEDICATED_GPIO_V << SYSTEM_CLK_EN_DEDICATED_GPIO_S)
#define SYSTEM_CLK_EN_DEDICATED_GPIO_V  0x00000001U
#define SYSTEM_CLK_EN_DEDICATED_GPIO_S  7

/** SYSTEM_CPU_PERI_RST_EN_REG register
 *  register description
 */
#define SYSTEM_CPU_PERI_RST_EN_REG (DR_REG_SYSTEM_BASE + 0x4)
/** SYSTEM_RST_EN_ASSIST_DEBUG : R/W; bitpos: [6]; default: 1;
 *  Need add description
 */
#define SYSTEM_RST_EN_ASSIST_DEBUG    (BIT(6))
#define SYSTEM_RST_EN_ASSIST_DEBUG_M  (SYSTEM_RST_EN_ASSIST_DEBUG_V << SYSTEM_RST_EN_ASSIST_DEBUG_S)
#define SYSTEM_RST_EN_ASSIST_DEBUG_V  0x00000001U
#define SYSTEM_RST_EN_ASSIST_DEBUG_S  6
/** SYSTEM_RST_EN_DEDICATED_GPIO : R/W; bitpos: [7]; default: 1;
 *  Need add description
 */
#define SYSTEM_RST_EN_DEDICATED_GPIO    (BIT(7))
#define SYSTEM_RST_EN_DEDICATED_GPIO_M  (SYSTEM_RST_EN_DEDICATED_GPIO_V << SYSTEM_RST_EN_DEDICATED_GPIO_S)
#define SYSTEM_RST_EN_DEDICATED_GPIO_V  0x00000001U
#define SYSTEM_RST_EN_DEDICATED_GPIO_S  7

/** SYSTEM_CPU_PER_CONF_REG register
 *  register description
 */
#define SYSTEM_CPU_PER_CONF_REG (DR_REG_SYSTEM_BASE + 0x8)
/** SYSTEM_CPU_WAIT_MODE_FORCE_ON : R/W; bitpos: [3]; default: 1;
 *  Need add description
 */
#define SYSTEM_CPU_WAIT_MODE_FORCE_ON    (BIT(3))
#define SYSTEM_CPU_WAIT_MODE_FORCE_ON_M  (SYSTEM_CPU_WAIT_MODE_FORCE_ON_V << SYSTEM_CPU_WAIT_MODE_FORCE_ON_S)
#define SYSTEM_CPU_WAIT_MODE_FORCE_ON_V  0x00000001U
#define SYSTEM_CPU_WAIT_MODE_FORCE_ON_S  3
/** SYSTEM_CPU_WAITI_DELAY_NUM : R/W; bitpos: [7:4]; default: 0;
 *  Need add description
 */
#define SYSTEM_CPU_WAITI_DELAY_NUM    0x0000000FU
#define SYSTEM_CPU_WAITI_DELAY_NUM_M  (SYSTEM_CPU_WAITI_DELAY_NUM_V << SYSTEM_CPU_WAITI_DELAY_NUM_S)
#define SYSTEM_CPU_WAITI_DELAY_NUM_V  0x0000000FU
#define SYSTEM_CPU_WAITI_DELAY_NUM_S  4

/** SYSTEM_MEM_PD_MASK_REG register
 *  register description
 */
#define SYSTEM_MEM_PD_MASK_REG (DR_REG_SYSTEM_BASE + 0xc)
/** SYSTEM_LSLP_MEM_PD_MASK : R/W; bitpos: [0]; default: 1;
 *  Need add description
 */
#define SYSTEM_LSLP_MEM_PD_MASK    (BIT(0))
#define SYSTEM_LSLP_MEM_PD_MASK_M  (SYSTEM_LSLP_MEM_PD_MASK_V << SYSTEM_LSLP_MEM_PD_MASK_S)
#define SYSTEM_LSLP_MEM_PD_MASK_V  0x00000001U
#define SYSTEM_LSLP_MEM_PD_MASK_S  0

/** SYSTEM_CPU_INTR_FROM_CPU_0_REG register
 *  register description
 */
#define SYSTEM_CPU_INTR_FROM_CPU_0_REG (DR_REG_SYSTEM_BASE + 0x10)
/** SYSTEM_CPU_INTR_FROM_CPU_0 : R/W; bitpos: [0]; default: 0;
 *  Need add description
 */
#define SYSTEM_CPU_INTR_FROM_CPU_0    (BIT(0))
#define SYSTEM_CPU_INTR_FROM_CPU_0_M  (SYSTEM_CPU_INTR_FROM_CPU_0_V << SYSTEM_CPU_INTR_FROM_CPU_0_S)
#define SYSTEM_CPU_INTR_FROM_CPU_0_V  0x00000001U
#define SYSTEM_CPU_INTR_FROM_CPU_0_S  0

/** SYSTEM_CPU_INTR_FROM_CPU_1_REG register
 *  register description
 */
#define SYSTEM_CPU_INTR_FROM_CPU_1_REG (DR_REG_SYSTEM_BASE + 0x14)
/** SYSTEM_CPU_INTR_FROM_CPU_1 : R/W; bitpos: [0]; default: 0;
 *  Need add description
 */
#define SYSTEM_CPU_INTR_FROM_CPU_1    (BIT(0))
#define SYSTEM_CPU_INTR_FROM_CPU_1_M  (SYSTEM_CPU_INTR_FROM_CPU_1_V << SYSTEM_CPU_INTR_FROM_CPU_1_S)
#define SYSTEM_CPU_INTR_FROM_CPU_1_V  0x00000001U
#define SYSTEM_CPU_INTR_FROM_CPU_1_S  0

/** SYSTEM_CPU_INTR_FROM_CPU_2_REG register
 *  register description
 */
#define SYSTEM_CPU_INTR_FROM_CPU_2_REG (DR_REG_SYSTEM_BASE + 0x18)
/** SYSTEM_CPU_INTR_FROM_CPU_2 : R/W; bitpos: [0]; default: 0;
 *  Need add description
 */
#define SYSTEM_CPU_INTR_FROM_CPU_2    (BIT(0))
#define SYSTEM_CPU_INTR_FROM_CPU_2_M  (SYSTEM_CPU_INTR_FROM_CPU_2_V << SYSTEM_CPU_INTR_FROM_CPU_2_S)
#define SYSTEM_CPU_INTR_FROM_CPU_2_V  0x00000001U
#define SYSTEM_CPU_INTR_FROM_CPU_2_S  0

/** SYSTEM_CPU_INTR_FROM_CPU_3_REG register
 *  register description
 */
#define SYSTEM_CPU_INTR_FROM_CPU_3_REG (DR_REG_SYSTEM_BASE + 0x1c)
/** SYSTEM_CPU_INTR_FROM_CPU_3 : R/W; bitpos: [0]; default: 0;
 *  Need add description
 */
#define SYSTEM_CPU_INTR_FROM_CPU_3    (BIT(0))
#define SYSTEM_CPU_INTR_FROM_CPU_3_M  (SYSTEM_CPU_INTR_FROM_CPU_3_V << SYSTEM_CPU_INTR_FROM_CPU_3_S)
#define SYSTEM_CPU_INTR_FROM_CPU_3_V  0x00000001U
#define SYSTEM_CPU_INTR_FROM_CPU_3_S  0

/** SYSTEM_RSA_PD_CTRL_REG register
 *  register description
 */
#define SYSTEM_RSA_PD_CTRL_REG (DR_REG_SYSTEM_BASE + 0x20)
/** SYSTEM_RSA_MEM_PD : R/W; bitpos: [0]; default: 1;
 *  Need add description
 */
#define SYSTEM_RSA_MEM_PD    (BIT(0))
#define SYSTEM_RSA_MEM_PD_M  (SYSTEM_RSA_MEM_PD_V << SYSTEM_RSA_MEM_PD_S)
#define SYSTEM_RSA_MEM_PD_V  0x00000001U
#define SYSTEM_RSA_MEM_PD_S  0
/** SYSTEM_RSA_MEM_FORCE_PU : R/W; bitpos: [1]; default: 0;
 *  Need add description
 */
#define SYSTEM_RSA_MEM_FORCE_PU    (BIT(1))
#define SYSTEM_RSA_MEM_FORCE_PU_M  (SYSTEM_RSA_MEM_FORCE_PU_V << SYSTEM_RSA_MEM_FORCE_PU_S)
#define SYSTEM_RSA_MEM_FORCE_PU_V  0x00000001U
#define SYSTEM_RSA_MEM_FORCE_PU_S  1
/** SYSTEM_RSA_MEM_FORCE_PD : R/W; bitpos: [2]; default: 0;
 *  Need add description
 */
#define SYSTEM_RSA_MEM_FORCE_PD    (BIT(2))
#define SYSTEM_RSA_MEM_FORCE_PD_M  (SYSTEM_RSA_MEM_FORCE_PD_V << SYSTEM_RSA_MEM_FORCE_PD_S)
#define SYSTEM_RSA_MEM_FORCE_PD_V  0x00000001U
#define SYSTEM_RSA_MEM_FORCE_PD_S  2

/** SYSTEM_EDMA_CTRL_REG register
 *  register description
 */
#define SYSTEM_EDMA_CTRL_REG (DR_REG_SYSTEM_BASE + 0x24)
/** SYSTEM_EDMA_CLK_ON : R/W; bitpos: [0]; default: 1;
 *  Need add description
 */
#define SYSTEM_EDMA_CLK_ON    (BIT(0))
#define SYSTEM_EDMA_CLK_ON_M  (SYSTEM_EDMA_CLK_ON_V << SYSTEM_EDMA_CLK_ON_S)
#define SYSTEM_EDMA_CLK_ON_V  0x00000001U
#define SYSTEM_EDMA_CLK_ON_S  0
/** SYSTEM_EDMA_RESET : R/W; bitpos: [1]; default: 0;
 *  Need add description
 */
#define SYSTEM_EDMA_RESET    (BIT(1))
#define SYSTEM_EDMA_RESET_M  (SYSTEM_EDMA_RESET_V << SYSTEM_EDMA_RESET_S)
#define SYSTEM_EDMA_RESET_V  0x00000001U
#define SYSTEM_EDMA_RESET_S  1

/** SYSTEM_CACHE_CONTROL_REG register
 *  register description
 */
#define SYSTEM_CACHE_CONTROL_REG (DR_REG_SYSTEM_BASE + 0x28)
/** SYSTEM_ICACHE_CLK_ON : R/W; bitpos: [0]; default: 1;
 *  Need add description
 */
#define SYSTEM_ICACHE_CLK_ON    (BIT(0))
#define SYSTEM_ICACHE_CLK_ON_M  (SYSTEM_ICACHE_CLK_ON_V << SYSTEM_ICACHE_CLK_ON_S)
#define SYSTEM_ICACHE_CLK_ON_V  0x00000001U
#define SYSTEM_ICACHE_CLK_ON_S  0
/** SYSTEM_ICACHE_RESET : R/W; bitpos: [1]; default: 0;
 *  Need add description
 */
#define SYSTEM_ICACHE_RESET    (BIT(1))
#define SYSTEM_ICACHE_RESET_M  (SYSTEM_ICACHE_RESET_V << SYSTEM_ICACHE_RESET_S)
#define SYSTEM_ICACHE_RESET_V  0x00000001U
#define SYSTEM_ICACHE_RESET_S  1
/** SYSTEM_DCACHE_CLK_ON : R/W; bitpos: [2]; default: 1;
 *  Need add description
 */
#define SYSTEM_DCACHE_CLK_ON    (BIT(2))
#define SYSTEM_DCACHE_CLK_ON_M  (SYSTEM_DCACHE_CLK_ON_V << SYSTEM_DCACHE_CLK_ON_S)
#define SYSTEM_DCACHE_CLK_ON_V  0x00000001U
#define SYSTEM_DCACHE_CLK_ON_S  2
/** SYSTEM_DCACHE_RESET : R/W; bitpos: [3]; default: 0;
 *  Need add description
 */
#define SYSTEM_DCACHE_RESET    (BIT(3))
#define SYSTEM_DCACHE_RESET_M  (SYSTEM_DCACHE_RESET_V << SYSTEM_DCACHE_RESET_S)
#define SYSTEM_DCACHE_RESET_V  0x00000001U
#define SYSTEM_DCACHE_RESET_S  3

/** SYSTEM_EXTERNAL_DEVICE_ENCRYPT_DECRYPT_CONTROL_REG register
 *  register description
 */
#define SYSTEM_EXTERNAL_DEVICE_ENCRYPT_DECRYPT_CONTROL_REG (DR_REG_SYSTEM_BASE + 0x2c)
/** SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT : R/W; bitpos: [0]; default: 0;
 *  Need add description
 */
#define SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT    (BIT(0))
#define SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT_M  (SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT_V << SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT_S)
#define SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT_V  0x00000001U
#define SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT_S  0
/** SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT : R/W; bitpos: [1]; default: 0;
 *  Need add description
 */
#define SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT    (BIT(1))
#define SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT_M  (SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT_V << SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT_S)
#define SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT_V  0x00000001U
#define SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT_S  1
/** SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT : R/W; bitpos: [2]; default: 0;
 *  Need add description
 */
#define SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT    (BIT(2))
#define SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT_M  (SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT_V << SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT_S)
#define SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT_V  0x00000001U
#define SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT_S  2
/** SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT : R/W; bitpos: [3]; default: 0;
 *  Need add description
 */
#define SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT    (BIT(3))
#define SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT_M  (SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT_V << SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT_S)
#define SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT_V  0x00000001U
#define SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT_S  3

/** SYSTEM_RTC_FASTMEM_CONFIG_REG register
 *  register description
 */
#define SYSTEM_RTC_FASTMEM_CONFIG_REG (DR_REG_SYSTEM_BASE + 0x30)
/** SYSTEM_RTC_MEM_CRC_START : R/W; bitpos: [8]; default: 0;
 *  Need add description
 */
#define SYSTEM_RTC_MEM_CRC_START    (BIT(8))
#define SYSTEM_RTC_MEM_CRC_START_M  (SYSTEM_RTC_MEM_CRC_START_V << SYSTEM_RTC_MEM_CRC_START_S)
#define SYSTEM_RTC_MEM_CRC_START_V  0x00000001U
#define SYSTEM_RTC_MEM_CRC_START_S  8
/** SYSTEM_RTC_MEM_CRC_ADDR : R/W; bitpos: [19:9]; default: 0;
 *  Need add description
 */
#define SYSTEM_RTC_MEM_CRC_ADDR    0x000007FFU
#define SYSTEM_RTC_MEM_CRC_ADDR_M  (SYSTEM_RTC_MEM_CRC_ADDR_V << SYSTEM_RTC_MEM_CRC_ADDR_S)
#define SYSTEM_RTC_MEM_CRC_ADDR_V  0x000007FFU
#define SYSTEM_RTC_MEM_CRC_ADDR_S  9
/** SYSTEM_RTC_MEM_CRC_LEN : R/W; bitpos: [30:20]; default: 2047;
 *  Need add description
 */
#define SYSTEM_RTC_MEM_CRC_LEN    0x000007FFU
#define SYSTEM_RTC_MEM_CRC_LEN_M  (SYSTEM_RTC_MEM_CRC_LEN_V << SYSTEM_RTC_MEM_CRC_LEN_S)
#define SYSTEM_RTC_MEM_CRC_LEN_V  0x000007FFU
#define SYSTEM_RTC_MEM_CRC_LEN_S  20
/** SYSTEM_RTC_MEM_CRC_FINISH : RO; bitpos: [31]; default: 0;
 *  Need add description
 */
#define SYSTEM_RTC_MEM_CRC_FINISH    (BIT(31))
#define SYSTEM_RTC_MEM_CRC_FINISH_M  (SYSTEM_RTC_MEM_CRC_FINISH_V << SYSTEM_RTC_MEM_CRC_FINISH_S)
#define SYSTEM_RTC_MEM_CRC_FINISH_V  0x00000001U
#define SYSTEM_RTC_MEM_CRC_FINISH_S  31

/** SYSTEM_RTC_FASTMEM_CRC_REG register
 *  register description
 */
#define SYSTEM_RTC_FASTMEM_CRC_REG (DR_REG_SYSTEM_BASE + 0x34)
/** SYSTEM_RTC_MEM_CRC_RES : RO; bitpos: [31:0]; default: 0;
 *  Need add description
 */
#define SYSTEM_RTC_MEM_CRC_RES    0xFFFFFFFFU
#define SYSTEM_RTC_MEM_CRC_RES_M  (SYSTEM_RTC_MEM_CRC_RES_V << SYSTEM_RTC_MEM_CRC_RES_S)
#define SYSTEM_RTC_MEM_CRC_RES_V  0xFFFFFFFFU
#define SYSTEM_RTC_MEM_CRC_RES_S  0

/** SYSTEM_REDUNDANT_ECO_CTRL_REG register
 *  register description
 */
#define SYSTEM_REDUNDANT_ECO_CTRL_REG (DR_REG_SYSTEM_BASE + 0x38)
/** SYSTEM_REDUNDANT_ECO_DRIVE : R/W; bitpos: [0]; default: 0;
 *  Need add description
 */
#define SYSTEM_REDUNDANT_ECO_DRIVE    (BIT(0))
#define SYSTEM_REDUNDANT_ECO_DRIVE_M  (SYSTEM_REDUNDANT_ECO_DRIVE_V << SYSTEM_REDUNDANT_ECO_DRIVE_S)
#define SYSTEM_REDUNDANT_ECO_DRIVE_V  0x00000001U
#define SYSTEM_REDUNDANT_ECO_DRIVE_S  0
/** SYSTEM_REDUNDANT_ECO_RESULT : RO; bitpos: [1]; default: 0;
 *  Need add description
 */
#define SYSTEM_REDUNDANT_ECO_RESULT    (BIT(1))
#define SYSTEM_REDUNDANT_ECO_RESULT_M  (SYSTEM_REDUNDANT_ECO_RESULT_V << SYSTEM_REDUNDANT_ECO_RESULT_S)
#define SYSTEM_REDUNDANT_ECO_RESULT_V  0x00000001U
#define SYSTEM_REDUNDANT_ECO_RESULT_S  1

/** SYSTEM_CLOCK_GATE_REG register
 *  register description
 */
#define SYSTEM_CLOCK_GATE_REG (DR_REG_SYSTEM_BASE + 0x3c)
/** SYSTEM_CLK_EN : R/W; bitpos: [0]; default: 1;
 *  Need add description
 */
#define SYSTEM_CLK_EN    (BIT(0))
#define SYSTEM_CLK_EN_M  (SYSTEM_CLK_EN_V << SYSTEM_CLK_EN_S)
#define SYSTEM_CLK_EN_V  0x00000001U
#define SYSTEM_CLK_EN_S  0

/** SYSTEM_MEM_PVT_REG register
 *  register description
 */
#define SYSTEM_MEM_PVT_REG (DR_REG_SYSTEM_BASE + 0x40)
/** SYSTEM_MEM_PATH_LEN : R/W; bitpos: [3:0]; default: 3;
 *  Need add description
 */
#define SYSTEM_MEM_PATH_LEN    0x0000000FU
#define SYSTEM_MEM_PATH_LEN_M  (SYSTEM_MEM_PATH_LEN_V << SYSTEM_MEM_PATH_LEN_S)
#define SYSTEM_MEM_PATH_LEN_V  0x0000000FU
#define SYSTEM_MEM_PATH_LEN_S  0
/** SYSTEM_MEM_ERR_CNT_CLR : WO; bitpos: [4]; default: 0;
 *  Need add description
 */
#define SYSTEM_MEM_ERR_CNT_CLR    (BIT(4))
#define SYSTEM_MEM_ERR_CNT_CLR_M  (SYSTEM_MEM_ERR_CNT_CLR_V << SYSTEM_MEM_ERR_CNT_CLR_S)
#define SYSTEM_MEM_ERR_CNT_CLR_V  0x00000001U
#define SYSTEM_MEM_ERR_CNT_CLR_S  4
/** SYSTEM_MEM_PVT_MONITOR_EN : R/W; bitpos: [5]; default: 0;
 *  Need add description
 */
#define SYSTEM_MEM_PVT_MONITOR_EN    (BIT(5))
#define SYSTEM_MEM_PVT_MONITOR_EN_M  (SYSTEM_MEM_PVT_MONITOR_EN_V << SYSTEM_MEM_PVT_MONITOR_EN_S)
#define SYSTEM_MEM_PVT_MONITOR_EN_V  0x00000001U
#define SYSTEM_MEM_PVT_MONITOR_EN_S  5
/** SYSTEM_MEM_TIMING_ERR_CNT : RO; bitpos: [21:6]; default: 0;
 *  Need add description
 */
#define SYSTEM_MEM_TIMING_ERR_CNT    0x0000FFFFU
#define SYSTEM_MEM_TIMING_ERR_CNT_M  (SYSTEM_MEM_TIMING_ERR_CNT_V << SYSTEM_MEM_TIMING_ERR_CNT_S)
#define SYSTEM_MEM_TIMING_ERR_CNT_V  0x0000FFFFU
#define SYSTEM_MEM_TIMING_ERR_CNT_S  6
/** SYSTEM_MEM_VT_SEL : R/W; bitpos: [23:22]; default: 0;
 *  Need add description
 */
#define SYSTEM_MEM_VT_SEL    0x00000003U
#define SYSTEM_MEM_VT_SEL_M  (SYSTEM_MEM_VT_SEL_V << SYSTEM_MEM_VT_SEL_S)
#define SYSTEM_MEM_VT_SEL_V  0x00000003U
#define SYSTEM_MEM_VT_SEL_S  22

/** SYSTEM_REG_DATE_REG register
 *  register description
 */
#define SYSTEM_REG_DATE_REG (DR_REG_SYSTEM_BASE + 0xffc)
/** SYSTEM_REG_DATE : R/W; bitpos: [27:0]; default: 34615872;
 *  Need add description
 */
#define SYSTEM_REG_DATE    0x0FFFFFFFU
#define SYSTEM_REG_DATE_M  (SYSTEM_REG_DATE_V << SYSTEM_REG_DATE_S)
#define SYSTEM_REG_DATE_V  0x0FFFFFFFU
#define SYSTEM_REG_DATE_S  0

#ifdef __cplusplus
}
#endif
