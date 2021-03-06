/*
 * Renesas SCP/MCP Software
 * Copyright (c) 2020, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef CLOCK_MSTP_DEVICES_H
#define CLOCK_MSTP_DEVICES_H

/*!
 * \brief Clock device indexes.
 */
enum clock_mstp_dev_idx {
    CLOCK_MSTP_DEV_IDX_FDP1_1,
    CLOCK_MSTP_DEV_IDX_FDP1_0,
    CLOCK_MSTP_DEV_IDX_SCIF5,
    CLOCK_MSTP_DEV_IDX_SCIF4,
    CLOCK_MSTP_DEV_IDX_SCIF3,
    CLOCK_MSTP_DEV_IDX_SCIF1,
    CLOCK_MSTP_DEV_IDX_SCIF0,
    CLOCK_MSTP_DEV_IDX_MSIOF3,
    CLOCK_MSTP_DEV_IDX_MSIOF2,
    CLOCK_MSTP_DEV_IDX_MSIOF1,
    CLOCK_MSTP_DEV_IDX_MSIOF0,
    CLOCK_MSTP_DEV_IDX_SYS_DMAC2,
    CLOCK_MSTP_DEV_IDX_SYS_DMAC1,
    CLOCK_MSTP_DEV_IDX_SYS_DMAC0,
    CLOCK_MSTP_DEV_IDX_SCEG_PUB,
    CLOCK_MSTP_DEV_IDX_CMT3,
    CLOCK_MSTP_DEV_IDX_CMT2,
    CLOCK_MSTP_DEV_IDX_CMT1,
    CLOCK_MSTP_DEV_IDX_CMT0,
    CLOCK_MSTP_DEV_IDX_TPU0,
    CLOCK_MSTP_DEV_IDX_SCIF2,
    CLOCK_MSTP_DEV_IDX_SDIF3,
    CLOCK_MSTP_DEV_IDX_SDIF2,
    CLOCK_MSTP_DEV_IDX_SDIF1,
    CLOCK_MSTP_DEV_IDX_SDIF0,
    CLOCK_MSTP_DEV_IDX_PCIE1,
    CLOCK_MSTP_DEV_IDX_PCIE0,
    CLOCK_MSTP_DEV_IDX_USB_DMAC30,
    CLOCK_MSTP_DEV_IDX_USB3_IF0,
    CLOCK_MSTP_DEV_IDX_USB_DMAC31,
    CLOCK_MSTP_DEV_IDX_USB_DMAC0,
    CLOCK_MSTP_DEV_IDX_USB_DMAC1,
    CLOCK_MSTP_DEV_IDX_RWDT,
    CLOCK_MSTP_DEV_IDX_INTC_EX,
    CLOCK_MSTP_DEV_IDX_INTC_AP,
    CLOCK_MSTP_DEV_IDX_AUDMAC1,
    CLOCK_MSTP_DEV_IDX_AUDMAC0,
    CLOCK_MSTP_DEV_IDX_DRIF31,
    CLOCK_MSTP_DEV_IDX_DRIF30,
    CLOCK_MSTP_DEV_IDX_DRIF21,
    CLOCK_MSTP_DEV_IDX_DRIF20,
    CLOCK_MSTP_DEV_IDX_DRIF11,
    CLOCK_MSTP_DEV_IDX_DRIF10,
    CLOCK_MSTP_DEV_IDX_DRIF01,
    CLOCK_MSTP_DEV_IDX_DRIF00,
    CLOCK_MSTP_DEV_IDX_HSCIF4,
    CLOCK_MSTP_DEV_IDX_HSCIF3,
    CLOCK_MSTP_DEV_IDX_HSCIF2,
    CLOCK_MSTP_DEV_IDX_HSCIF1,
    CLOCK_MSTP_DEV_IDX_HSCIF0,
    CLOCK_MSTP_DEV_IDX_THERMAL,
    CLOCK_MSTP_DEV_IDX_PWM,
    CLOCK_MSTP_DEV_IDX_FCPVD2,
    CLOCK_MSTP_DEV_IDX_FCPVD1,
    CLOCK_MSTP_DEV_IDX_FCPVD0,
    CLOCK_MSTP_DEV_IDX_FCPVB1,
    CLOCK_MSTP_DEV_IDX_FCPVB0,
    CLOCK_MSTP_DEV_IDX_FCPVI1,
    CLOCK_MSTP_DEV_IDX_FCPVI0,
    CLOCK_MSTP_DEV_IDX_FCPF1,
    CLOCK_MSTP_DEV_IDX_FCPF0,
    CLOCK_MSTP_DEV_IDX_FCPCS,
    CLOCK_MSTP_DEV_IDX_VSPD2,
    CLOCK_MSTP_DEV_IDX_VSPD1,
    CLOCK_MSTP_DEV_IDX_VSPD0,
    CLOCK_MSTP_DEV_IDX_VSPBC,
    CLOCK_MSTP_DEV_IDX_VSPBD,
    CLOCK_MSTP_DEV_IDX_VSPI1,
    CLOCK_MSTP_DEV_IDX_VSPI0,
    CLOCK_MSTP_DEV_IDX_EHCI3,
    CLOCK_MSTP_DEV_IDX_EHCI2,
    CLOCK_MSTP_DEV_IDX_EHCI1,
    CLOCK_MSTP_DEV_IDX_EHCI0,
    CLOCK_MSTP_DEV_IDX_HSUSB,
    CLOCK_MSTP_DEV_IDX_HSUSB3,
    CLOCK_MSTP_DEV_IDX_CMM3,
    CLOCK_MSTP_DEV_IDX_CMM2,
    CLOCK_MSTP_DEV_IDX_CMM1,
    CLOCK_MSTP_DEV_IDX_CMM0,
    CLOCK_MSTP_DEV_IDX_CSI20,
    CLOCK_MSTP_DEV_IDX_CSI41,
    CLOCK_MSTP_DEV_IDX_CSI40,
    CLOCK_MSTP_DEV_IDX_DU3,
    CLOCK_MSTP_DEV_IDX_DU2,
    CLOCK_MSTP_DEV_IDX_DU1,
    CLOCK_MSTP_DEV_IDX_DU0,
    CLOCK_MSTP_DEV_IDX_LVDS,
    CLOCK_MSTP_DEV_IDX_HDMI1,
    CLOCK_MSTP_DEV_IDX_HDMI0,
    CLOCK_MSTP_DEV_IDX_VIN7,
    CLOCK_MSTP_DEV_IDX_VIN6,
    CLOCK_MSTP_DEV_IDX_VIN5,
    CLOCK_MSTP_DEV_IDX_VIN4,
    CLOCK_MSTP_DEV_IDX_VIN3,
    CLOCK_MSTP_DEV_IDX_VIN2,
    CLOCK_MSTP_DEV_IDX_VIN1,
    CLOCK_MSTP_DEV_IDX_VIN0,
    CLOCK_MSTP_DEV_IDX_ETHERAVB,
    CLOCK_MSTP_DEV_IDX_SATA0,
    CLOCK_MSTP_DEV_IDX_IMR3,
    CLOCK_MSTP_DEV_IDX_IMR2,
    CLOCK_MSTP_DEV_IDX_IMR1,
    CLOCK_MSTP_DEV_IDX_IMR0,
    CLOCK_MSTP_DEV_IDX_GPIO7,
    CLOCK_MSTP_DEV_IDX_GPIO6,
    CLOCK_MSTP_DEV_IDX_GPIO5,
    CLOCK_MSTP_DEV_IDX_GPIO4,
    CLOCK_MSTP_DEV_IDX_GPIO3,
    CLOCK_MSTP_DEV_IDX_GPIO2,
    CLOCK_MSTP_DEV_IDX_GPIO1,
    CLOCK_MSTP_DEV_IDX_GPIO0,
    CLOCK_MSTP_DEV_IDX_CAN_FD,
    CLOCK_MSTP_DEV_IDX_CAN_IF1,
    CLOCK_MSTP_DEV_IDX_CAN_IF0,
    CLOCK_MSTP_DEV_IDX_I2C6,
    CLOCK_MSTP_DEV_IDX_I2C5,
    CLOCK_MSTP_DEV_IDX_I2C_DVFS,
    CLOCK_MSTP_DEV_IDX_I2C4,
    CLOCK_MSTP_DEV_IDX_I2C3,
    CLOCK_MSTP_DEV_IDX_I2C2,
    CLOCK_MSTP_DEV_IDX_I2C1,
    CLOCK_MSTP_DEV_IDX_I2C0,
    CLOCK_MSTP_DEV_IDX_SSI_ALL,
    CLOCK_MSTP_DEV_IDX_SSI9,
    CLOCK_MSTP_DEV_IDX_SSI8,
    CLOCK_MSTP_DEV_IDX_SSI7,
    CLOCK_MSTP_DEV_IDX_SSI6,
    CLOCK_MSTP_DEV_IDX_SSI5,
    CLOCK_MSTP_DEV_IDX_SSI4,
    CLOCK_MSTP_DEV_IDX_SSI3,
    CLOCK_MSTP_DEV_IDX_SSI2,
    CLOCK_MSTP_DEV_IDX_SSI1,
    CLOCK_MSTP_DEV_IDX_SSI0,
    CLOCK_MSTP_DEV_IDX_SCU_ALL,
    CLOCK_MSTP_DEV_IDX_SCU_DVC1,
    CLOCK_MSTP_DEV_IDX_SCU_DVC0,
    CLOCK_MSTP_DEV_IDX_SCU_CTU0_MIX1,
    CLOCK_MSTP_DEV_IDX_SCU_CTU0_MIX0,
    CLOCK_MSTP_DEV_IDX_SCU_SRC9,
    CLOCK_MSTP_DEV_IDX_SCU_SRC8,
    CLOCK_MSTP_DEV_IDX_SCU_SRC7,
    CLOCK_MSTP_DEV_IDX_SCU_SRC6,
    CLOCK_MSTP_DEV_IDX_SCU_SRC5,
    CLOCK_MSTP_DEV_IDX_SCU_SRC4,
    CLOCK_MSTP_DEV_IDX_SCU_SRC3,
    CLOCK_MSTP_DEV_IDX_SCU_SRC2,
    CLOCK_MSTP_DEV_IDX_SCU_SRC1,
    CLOCK_MSTP_DEV_IDX_SCU_SRC0,
    CLOCK_MSTP_DEV_IDX_COUNT
};

#define CLK_ID_MSTP_START CLOCK_MSTP_DEV_IDX_FDP1_1
#define CLK_ID_MSTP_END CLOCK_MSTP_DEV_IDX_COUNT

#endif /* CLOCK_MSTP_DEVICES_H */
