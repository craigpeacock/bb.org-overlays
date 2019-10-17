/*
 * This header provides constants for DRA pinctrl bindings.
 *
 * Copyright (C) 2013 Texas Instruments Incorporated - http://www.ti.com/
 * Author: Rajendra Nayak <rnayak@ti.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _DT_BINDINGS_PINCTRL_DRA_H
#define _DT_BINDINGS_PINCTRL_DRA_H

/* DRA7 mux mode options for each pin. See TRM for options */
#define MUX_MODE0	0x0
#define MUX_MODE1	0x1
#define MUX_MODE2	0x2
#define MUX_MODE3	0x3
#define MUX_MODE4	0x4
#define MUX_MODE5	0x5
#define MUX_MODE6	0x6
#define MUX_MODE7	0x7
#define MUX_MODE8	0x8
#define MUX_MODE9	0x9
#define MUX_MODE10	0xa
#define MUX_MODE11	0xb
#define MUX_MODE12	0xc
#define MUX_MODE13	0xd
#define MUX_MODE14	0xe
#define MUX_MODE15	0xf

/* Certain pins need virtual mode, but note: they may glitch */
#define MUX_VIRTUAL_MODE0	(MODE_SELECT | (0x0 << 4))
#define MUX_VIRTUAL_MODE1	(MODE_SELECT | (0x1 << 4))
#define MUX_VIRTUAL_MODE2	(MODE_SELECT | (0x2 << 4))
#define MUX_VIRTUAL_MODE3	(MODE_SELECT | (0x3 << 4))
#define MUX_VIRTUAL_MODE4	(MODE_SELECT | (0x4 << 4))
#define MUX_VIRTUAL_MODE5	(MODE_SELECT | (0x5 << 4))
#define MUX_VIRTUAL_MODE6	(MODE_SELECT | (0x6 << 4))
#define MUX_VIRTUAL_MODE7	(MODE_SELECT | (0x7 << 4))
#define MUX_VIRTUAL_MODE8	(MODE_SELECT | (0x8 << 4))
#define MUX_VIRTUAL_MODE9	(MODE_SELECT | (0x9 << 4))
#define MUX_VIRTUAL_MODE10	(MODE_SELECT | (0xa << 4))
#define MUX_VIRTUAL_MODE11	(MODE_SELECT | (0xb << 4))
#define MUX_VIRTUAL_MODE12	(MODE_SELECT | (0xc << 4))
#define MUX_VIRTUAL_MODE13	(MODE_SELECT | (0xd << 4))
#define MUX_VIRTUAL_MODE14	(MODE_SELECT | (0xe << 4))
#define MUX_VIRTUAL_MODE15	(MODE_SELECT | (0xf << 4))

#define MODE_SELECT		(1 << 8)

#define PULL_ENA		(0 << 16)
#define PULL_DIS		(1 << 16)
#define PULL_UP			(1 << 17)
#define INPUT_EN		(1 << 18)
#define SLEWCONTROL		(1 << 19)
#define WAKEUP_EN		(1 << 24)
#define WAKEUP_EVENT		(1 << 25)

/* Active pin states */
#define PIN_OUTPUT		(0 | PULL_DIS)
#define PIN_OUTPUT_PULLUP	(PULL_UP)
#define PIN_OUTPUT_PULLDOWN	(0)
#define PIN_INPUT		(INPUT_EN | PULL_DIS)
#define PIN_INPUT_SLEW		(INPUT_EN | SLEWCONTROL)
#define PIN_INPUT_PULLUP	(PULL_ENA | INPUT_EN | PULL_UP)
#define PIN_INPUT_PULLDOWN	(PULL_ENA | INPUT_EN)

/*
 * Macro to allow using the absolute physical address instead of the
 * padconf registers instead of the offset from padconf base.
 */
#define DRA7XX_CORE_IOPAD(pa, val)	(((pa) & 0xffff) - 0x3400) (val)

/* DRA7 IODELAY configuration parameters */
#define A_DELAY_PS(val)			((val) & 0xffff)
#define G_DELAY_PS(val)			((val) & 0xffff)

#define DRA7XX_PIN_OFFSET_MIN			0x3400U

#define DRA7XX_PIN_GPMC_AD0			0x3400
#define DRA7XX_PIN_GPMC_AD1			0x3404
#define DRA7XX_PIN_GPMC_AD2			0x3408
#define DRA7XX_PIN_GPMC_AD3			0x340C
#define DRA7XX_PIN_GPMC_AD4			0x3410
#define DRA7XX_PIN_GPMC_AD5			0x3414
#define DRA7XX_PIN_GPMC_AD6			0x3418
#define DRA7XX_PIN_GPMC_AD7			0x341C
#define DRA7XX_PIN_GPMC_AD8			0x3420
#define DRA7XX_PIN_GPMC_AD9			0x3424
#define DRA7XX_PIN_GPMC_AD10			0x3428
#define DRA7XX_PIN_GPMC_AD11			0x342C
#define DRA7XX_PIN_GPMC_AD12			0x3430
#define DRA7XX_PIN_GPMC_AD13			0x3434
#define DRA7XX_PIN_GPMC_AD14			0x3438
#define DRA7XX_PIN_GPMC_AD15			0x343C
#define DRA7XX_PIN_GPMC_A0			0x3440
#define DRA7XX_PIN_GPMC_A1			0x3444
#define DRA7XX_PIN_GPMC_A2			0x3448
#define DRA7XX_PIN_GPMC_A3			0x344C
#define DRA7XX_PIN_GPMC_A4			0x3450
#define DRA7XX_PIN_GPMC_A5			0x3454
#define DRA7XX_PIN_GPMC_A6			0x3458
#define DRA7XX_PIN_GPMC_A7			0x345C
#define DRA7XX_PIN_GPMC_A8			0x3460
#define DRA7XX_PIN_GPMC_A9			0x3464
#define DRA7XX_PIN_GPMC_A10			0x3468
#define DRA7XX_PIN_GPMC_A11			0x346C
#define DRA7XX_PIN_GPMC_A12			0x3470
#define DRA7XX_PIN_GPMC_A13			0x3474
#define DRA7XX_PIN_GPMC_A14			0x3478
#define DRA7XX_PIN_GPMC_A15			0x347C
#define DRA7XX_PIN_GPMC_A16			0x3480
#define DRA7XX_PIN_GPMC_A17			0x3484
#define DRA7XX_PIN_GPMC_A18			0x3488
#define DRA7XX_PIN_GPMC_A19			0x348C
#define DRA7XX_PIN_GPMC_A20			0x3490
#define DRA7XX_PIN_GPMC_A21			0x3494
#define DRA7XX_PIN_GPMC_A22			0x3498
#define DRA7XX_PIN_GPMC_A23			0x349C
#define DRA7XX_PIN_GPMC_A24			0x34A0
#define DRA7XX_PIN_GPMC_A25			0x34A4
#define DRA7XX_PIN_GPMC_A26			0x34A8
#define DRA7XX_PIN_GPMC_A27			0x34AC
#define DRA7XX_PIN_GPMC_CS1			0x34B0
#define DRA7XX_PIN_GPMC_CS0			0x34B4
#define DRA7XX_PIN_GPMC_CS2			0x34B8
#define DRA7XX_PIN_GPMC_CS3			0x34BC
#define DRA7XX_PIN_GPMC_CLK			0x34C0
#define DRA7XX_PIN_GPMC_ADVN_ALE		0x34C4
#define DRA7XX_PIN_GPMC_OEN_REN			0x34C8
#define DRA7XX_PIN_GPMC_WEN			0x34CC
#define DRA7XX_PIN_GPMC_BEN0			0x34D0
#define DRA7XX_PIN_GPMC_BEN1			0x34D4
#define DRA7XX_PIN_GPMC_WAIT0			0x34D8
#define DRA7XX_PIN_VIN1A_CLK0			0x34DC
#define DRA7XX_PIN_VIN1B_CLK1			0x34E0
#define DRA7XX_PIN_VIN1A_DE0			0x34E4
#define DRA7XX_PIN_VIN1A_FLD0			0x34E8
#define DRA7XX_PIN_VIN1A_HSYNC0			0x34EC
#define DRA7XX_PIN_VIN1A_VSYNC0			0x34F0
#define DRA7XX_PIN_VIN1A_D0			0x34F4
#define DRA7XX_PIN_VIN1A_D1			0x34F8
#define DRA7XX_PIN_VIN1A_D2			0x34FC
#define DRA7XX_PIN_VIN1A_D3			0x3500
#define DRA7XX_PIN_VIN1A_D4			0x3504
#define DRA7XX_PIN_VIN1A_D5			0x3508
#define DRA7XX_PIN_VIN1A_D6			0x350C
#define DRA7XX_PIN_VIN1A_D7			0x3510
#define DRA7XX_PIN_VIN1A_D8			0x3514
#define DRA7XX_PIN_VIN1A_D9			0x3518
#define DRA7XX_PIN_VIN1A_D10			0x351C
#define DRA7XX_PIN_VIN1A_D11			0x3520
#define DRA7XX_PIN_VIN1A_D12			0x3524
#define DRA7XX_PIN_VIN1A_D13			0x3528
#define DRA7XX_PIN_VIN1A_D14			0x352C
#define DRA7XX_PIN_VIN1A_D15			0x3530
#define DRA7XX_PIN_VIN1A_D16			0x3534
#define DRA7XX_PIN_VIN1A_D17			0x3538
#define DRA7XX_PIN_VIN1A_D18			0x353C
#define DRA7XX_PIN_VIN1A_D19			0x3540
#define DRA7XX_PIN_VIN1A_D20			0x3544
#define DRA7XX_PIN_VIN1A_D21			0x3548
#define DRA7XX_PIN_VIN1A_D22			0x354C
#define DRA7XX_PIN_VIN1A_D23			0x3550
#define DRA7XX_PIN_VIN2A_CLK0			0x3554
#define DRA7XX_PIN_VIN2A_DE0			0x3558
#define DRA7XX_PIN_VIN2A_FLD0			0x355C
#define DRA7XX_PIN_VIN2A_HSYNC0			0x3560
#define DRA7XX_PIN_VIN2A_VSYNC0			0x3564
#define DRA7XX_PIN_VIN2A_D0			0x3568
#define DRA7XX_PIN_VIN2A_D1			0x356C
#define DRA7XX_PIN_VIN2A_D2			0x3570
#define DRA7XX_PIN_VIN2A_D3			0x3574
#define DRA7XX_PIN_VIN2A_D4			0x3578
#define DRA7XX_PIN_VIN2A_D5			0x357C
#define DRA7XX_PIN_VIN2A_D6			0x3580
#define DRA7XX_PIN_VIN2A_D7			0x3584
#define DRA7XX_PIN_VIN2A_D8			0x3588
#define DRA7XX_PIN_VIN2A_D9			0x358C
#define DRA7XX_PIN_VIN2A_D10			0x3590
#define DRA7XX_PIN_VIN2A_D11			0x3594
#define DRA7XX_PIN_VIN2A_D12			0x3598
#define DRA7XX_PIN_VIN2A_D13			0x359C
#define DRA7XX_PIN_VIN2A_D14			0x35A0
#define DRA7XX_PIN_VIN2A_D15			0x35A4
#define DRA7XX_PIN_VIN2A_D16			0x35A8
#define DRA7XX_PIN_VIN2A_D17			0x35AC
#define DRA7XX_PIN_VIN2A_D18			0x35B0
#define DRA7XX_PIN_VIN2A_D19			0x35B4
#define DRA7XX_PIN_VIN2A_D20			0x35B8
#define DRA7XX_PIN_VIN2A_D21			0x35BC
#define DRA7XX_PIN_VIN2A_D22			0x35C0
#define DRA7XX_PIN_VIN2A_D23			0x35C4
#define DRA7XX_PIN_VOUT1_CLK			0x35C8
#define DRA7XX_PIN_VOUT1_DE			0x35CC
#define DRA7XX_PIN_VOUT1_FLD			0x35D0
#define DRA7XX_PIN_VOUT1_HSYNC			0x35D4
#define DRA7XX_PIN_VOUT1_VSYNC			0x35D8
#define DRA7XX_PIN_VOUT1_D0			0x35DC
#define DRA7XX_PIN_VOUT1_D1			0x35E0
#define DRA7XX_PIN_VOUT1_D2			0x35E4
#define DRA7XX_PIN_VOUT1_D3			0x35E8
#define DRA7XX_PIN_VOUT1_D4			0x35EC
#define DRA7XX_PIN_VOUT1_D5			0x35F0
#define DRA7XX_PIN_VOUT1_D6			0x35F4
#define DRA7XX_PIN_VOUT1_D7			0x35F8
#define DRA7XX_PIN_VOUT1_D8			0x35FC
#define DRA7XX_PIN_VOUT1_D9			0x3600
#define DRA7XX_PIN_VOUT1_D10			0x3604
#define DRA7XX_PIN_VOUT1_D11			0x3608
#define DRA7XX_PIN_VOUT1_D12			0x360C
#define DRA7XX_PIN_VOUT1_D13			0x3610
#define DRA7XX_PIN_VOUT1_D14			0x3614
#define DRA7XX_PIN_VOUT1_D15			0x3618
#define DRA7XX_PIN_VOUT1_D16			0x361C
#define DRA7XX_PIN_VOUT1_D17			0x3620
#define DRA7XX_PIN_VOUT1_D18			0x3624
#define DRA7XX_PIN_VOUT1_D19			0x3628
#define DRA7XX_PIN_VOUT1_D20			0x362C
#define DRA7XX_PIN_VOUT1_D21			0x3630
#define DRA7XX_PIN_VOUT1_D22			0x3634
#define DRA7XX_PIN_VOUT1_D23			0x3638
#define DRA7XX_PIN_MDIO_MCLK			0x363C
#define DRA7XX_PIN_MDIO_D			0x3640
#define DRA7XX_PIN_RMII_MHZ_50_CLK		0x3644
#define DRA7XX_PIN_UART3_RXD			0x3648
#define DRA7XX_PIN_UART3_TXD			0x364C
#define DRA7XX_PIN_RGMII0_TXC			0x3650
#define DRA7XX_PIN_RGMII0_TXCTL			0x3654
#define DRA7XX_PIN_RGMII0_TXD3			0x3658
#define DRA7XX_PIN_RGMII0_TXD2			0x365C
#define DRA7XX_PIN_RGMII0_TXD1			0x3660
#define DRA7XX_PIN_RGMII0_TXD0			0x3664
#define DRA7XX_PIN_RGMII0_RXC			0x3668
#define DRA7XX_PIN_RGMII0_RXCTL			0x366C
#define DRA7XX_PIN_RGMII0_RXD3			0x3670
#define DRA7XX_PIN_RGMII0_RXD2			0x3674
#define DRA7XX_PIN_RGMII0_RXD1			0x3678
#define DRA7XX_PIN_RGMII0_RXD0			0x367C
#define DRA7XX_PIN_USB1_DRVVBUS			0x3680
#define DRA7XX_PIN_USB2_DRVVBUS			0x3684
#define DRA7XX_PIN_GPIO6_14			0x3688
#define DRA7XX_PIN_GPIO6_15			0x368C
#define DRA7XX_PIN_GPIO6_16			0x3690
#define DRA7XX_PIN_XREF_CLK0			0x3694
#define DRA7XX_PIN_XREF_CLK1			0x3698
#define DRA7XX_PIN_XREF_CLK2			0x369C
#define DRA7XX_PIN_XREF_CLK3			0x36A0
#define DRA7XX_PIN_MCASP1_ACLKX			0x36A4
#define DRA7XX_PIN_MCASP1_FSX			0x36A8
#define DRA7XX_PIN_MCASP1_ACLKR			0x36AC
#define DRA7XX_PIN_MCASP1_FSR			0x36B0
#define DRA7XX_PIN_MCASP1_AXR0			0x36B4
#define DRA7XX_PIN_MCASP1_AXR1			0x36B8
#define DRA7XX_PIN_MCASP1_AXR2			0x36BC
#define DRA7XX_PIN_MCASP1_AXR3			0x36C0
#define DRA7XX_PIN_MCASP1_AXR4			0x36C4
#define DRA7XX_PIN_MCASP1_AXR5			0x36C8
#define DRA7XX_PIN_MCASP1_AXR6			0x36CC
#define DRA7XX_PIN_MCASP1_AXR7			0x36D0
#define DRA7XX_PIN_MCASP1_AXR8			0x36D4
#define DRA7XX_PIN_MCASP1_AXR9			0x36D8
#define DRA7XX_PIN_MCASP1_AXR10			0x36DC
#define DRA7XX_PIN_MCASP1_AXR11			0x36E0
#define DRA7XX_PIN_MCASP1_AXR12			0x36E4
#define DRA7XX_PIN_MCASP1_AXR13			0x36E8
#define DRA7XX_PIN_MCASP1_AXR14			0x36EC
#define DRA7XX_PIN_MCASP1_AXR15			0x36F0
#define DRA7XX_PIN_MCASP2_ACLKX			0x36F4
#define DRA7XX_PIN_MCASP2_FSX			0x36F8
#define DRA7XX_PIN_MCASP2_ACLKR			0x36FC
#define DRA7XX_PIN_MCASP2_FSR			0x3700
#define DRA7XX_PIN_MCASP2_AXR0			0x3704
#define DRA7XX_PIN_MCASP2_AXR1			0x3708
#define DRA7XX_PIN_MCASP2_AXR2			0x370C
#define DRA7XX_PIN_MCASP2_AXR3			0x3710
#define DRA7XX_PIN_MCASP2_AXR4			0x3714
#define DRA7XX_PIN_MCASP2_AXR5			0x3718
#define DRA7XX_PIN_MCASP2_AXR6			0x371C
#define DRA7XX_PIN_MCASP2_AXR7			0x3720
#define DRA7XX_PIN_MCASP3_ACLKX			0x3724
#define DRA7XX_PIN_MCASP3_FSX			0x3728
#define DRA7XX_PIN_MCASP3_AXR0			0x372C
#define DRA7XX_PIN_MCASP3_AXR1			0x3730
#define DRA7XX_PIN_MCASP4_ACLKX			0x3734
#define DRA7XX_PIN_MCASP4_FSX			0x3738
#define DRA7XX_PIN_MCASP4_AXR0			0x373C
#define DRA7XX_PIN_MCASP4_AXR1			0x3740
#define DRA7XX_PIN_MCASP5_ACLKX			0x3744
#define DRA7XX_PIN_MCASP5_FSX			0x3748
#define DRA7XX_PIN_MCASP5_AXR0			0x374C
#define DRA7XX_PIN_MCASP5_AXR1			0x3750
#define DRA7XX_PIN_MMC1_CLK			0x3754
#define DRA7XX_PIN_MMC1_CMD			0x3758
#define DRA7XX_PIN_MMC1_DAT0			0x375C
#define DRA7XX_PIN_MMC1_DAT1			0x3760
#define DRA7XX_PIN_MMC1_DAT2			0x3764
#define DRA7XX_PIN_MMC1_DAT3			0x3768
#define DRA7XX_PIN_MMC1_SDCD			0x376C
#define DRA7XX_PIN_MMC1_SDWP			0x3770
#define DRA7XX_PIN_GPIO6_10			0x3774
#define DRA7XX_PIN_GPIO6_11			0x3778
#define DRA7XX_PIN_MMC3_CLK			0x377C
#define DRA7XX_PIN_MMC3_CMD			0x3780
#define DRA7XX_PIN_MMC3_DAT0			0x3784
#define DRA7XX_PIN_MMC3_DAT1			0x3788
#define DRA7XX_PIN_MMC3_DAT2			0x378C
#define DRA7XX_PIN_MMC3_DAT3			0x3790
#define DRA7XX_PIN_MMC3_DAT4			0x3794
#define DRA7XX_PIN_MMC3_DAT5			0x3798
#define DRA7XX_PIN_MMC3_DAT6			0x379C
#define DRA7XX_PIN_MMC3_DAT7			0x37A0
#define DRA7XX_PIN_SPI1_SCLK			0x37A4
#define DRA7XX_PIN_SPI1_D1			0x37A8
#define DRA7XX_PIN_SPI1_D0			0x37AC
#define DRA7XX_PIN_SPI1_CS0			0x37B0
#define DRA7XX_PIN_SPI1_CS1			0x37B4
#define DRA7XX_PIN_SPI1_CS2			0x37B8
#define DRA7XX_PIN_SPI1_CS3			0x37BC
#define DRA7XX_PIN_SPI2_SCLK			0x37C0
#define DRA7XX_PIN_SPI2_D1			0x37C4
#define DRA7XX_PIN_SPI2_D0			0x37C8
#define DRA7XX_PIN_SPI2_CS0			0x37CC
#define DRA7XX_PIN_DCAN1_TX			0x37D0
#define DRA7XX_PIN_DCAN1_RX			0x37D4
#define DRA7XX_PIN_UART1_RXD			0x37E0
#define DRA7XX_PIN_UART1_TXD			0x37E4
#define DRA7XX_PIN_UART1_CTSN			0x37E8
#define DRA7XX_PIN_UART1_RTSN			0x37EC
#define DRA7XX_PIN_UART2_RXD			0x37F0
#define DRA7XX_PIN_UART2_TXD			0x37F4
#define DRA7XX_PIN_UART2_CTSN			0x37F8
#define DRA7XX_PIN_UART2_RTSN			0x37FC
#define DRA7XX_PIN_I2C1_SDA			0x3800
#define DRA7XX_PIN_I2C1_SCL			0x3804
#define DRA7XX_PIN_I2C2_SDA			0x3808
#define DRA7XX_PIN_I2C2_SCL			0x380C
#define DRA7XX_PIN_WAKEUP0			0x3818
#define DRA7XX_PIN_WAKEUP1			0x381C
#define DRA7XX_PIN_WAKEUP2			0x3820
#define DRA7XX_PIN_WAKEUP3			0x3824
#define DRA7XX_PIN_ON_OFF			0x3828
#define DRA7XX_PIN_RTC_PORZ			0x382C
#define DRA7XX_PIN_TMS				0x3830
#define DRA7XX_PIN_TDI				0x3834
#define DRA7XX_PIN_TDO				0x3838
#define DRA7XX_PIN_TCLK				0x383C
#define DRA7XX_PIN_TRSTN			0x3840
#define DRA7XX_PIN_RTCK				0x3844
#define DRA7XX_PIN_EMU0				0x3848
#define DRA7XX_PIN_EMU1				0x384C
#define DRA7XX_PIN_RESETN			0x385C
#define DRA7XX_PIN_NMIN_DSP			0x3860
#define DRA7XX_PIN_RSTOUTN			0x3864

#define DRA7XX_PIN_OFFSET_MAX			0x3864U

/*
 * https://docs.google.com/spreadsheets/d/1fE-AsDZvJ-bBwzNBj1_sPDrutvEvsmARqFwvbw_HkrE/edit#gid=227990209
 */

#define BBAI_P8_03		DRA7XX_PIN_MMC3_DAT6
#define BBAI_P8_04		DRA7XX_PIN_MMC3_DAT7
#define BBAI_P8_05		DRA7XX_PIN_MMC3_DAT2
#define BBAI_P8_06		DRA7XX_PIN_MMC3_DAT3
#define BBAI_P8_07		DRA7XX_PIN_MCASP1_AXR14
#define BBAI_P8_08		DRA7XX_PIN_MCASP1_AXR15
#define BBAI_P8_09		DRA7XX_PIN_XREF_CLK1
#define BBAI_P8_10		DRA7XX_PIN_MCASP1_AXR13
#define BBAI_P8_11		DRA7XX_PIN_VIN1A_D7
#define BBAI_P8_12		DRA7XX_PIN_VIN1A_D6
#define BBAI_P8_13		DRA7XX_PIN_VIN2A_D10
#define BBAI_P8_14		DRA7XX_PIN_VIN2A_D12

#define BBAI_P8_15A		DRA7XX_PIN_VIN2A_D2
#define BBAI_P8_15B		DRA7XX_PIN_VIN2A_D19

#define BBAI_P8_16		DRA7XX_PIN_VIN2A_D21
#define BBAI_P8_17		DRA7XX_PIN_VOUT1_D18
#define BBAI_P8_18		DRA7XX_PIN_VIN2A_D8
#define BBAI_P8_19		DRA7XX_PIN_VIN2A_D9
#define BBAI_P8_20		DRA7XX_PIN_MMC3_CMD
#define BBAI_P8_21		DRA7XX_PIN_MMC3_CLK
#define BBAI_P8_22		DRA7XX_PIN_MMC3_DAT5
#define BBAI_P8_23		DRA7XX_PIN_MMC3_DAT4
#define BBAI_P8_24		DRA7XX_PIN_MMC3_DAT1
#define BBAI_P8_25		DRA7XX_PIN_MMC3_DAT0
#define BBAI_P8_26		DRA7XX_PIN_VIN2A_D20

#define BBAI_P8_27A		DRA7XX_PIN_VOUT1_VSYNC
#define BBAI_P8_27B		DRA7XX_PIN_VOUT1_D19

#define BBAI_P8_28A		DRA7XX_PIN_VOUT1_CLK
#define BBAI_P8_28B		DRA7XX_PIN_VOUT1_D20

#define BBAI_P8_29A		DRA7XX_PIN_VOUT1_HSYNC
#define BBAI_P8_29B		DRA7XX_PIN_VOUT1_D21

#define BBAI_P8_30A		DRA7XX_PIN_VOUT1_DE
#define BBAI_P8_30B		DRA7XX_PIN_VOUT1_D22

#define BBAI_P8_31A		DRA7XX_PIN_VOUT1_D14
#define BBAI_P8_31B		DRA7XX_PIN_MCASP4_AXR0

#define BBAI_P8_32A		DRA7XX_PIN_VOUT1_D15
#define BBAI_P8_32B		DRA7XX_PIN_MCASP4_AXR1

#define BBAI_P8_33A		DRA7XX_PIN_VOUT1_D13
#define BBAI_P8_33B		DRA7XX_PIN_VIN1A_FLD0

#define BBAI_P8_34A		DRA7XX_PIN_VOUT1_D11
#define BBAI_P8_34B		DRA7XX_PIN_VIN2A_VSYNC0

#define BBAI_P8_35A		DRA7XX_PIN_VOUT1_D12
#define BBAI_P8_35B		DRA7XX_PIN_VIN1A_DE0

#define BBAI_P8_36A		DRA7XX_PIN_VOUT1_D10
#define BBAI_P8_36B		DRA7XX_PIN_VIN2A_D0

#define BBAI_P8_37A		DRA7XX_PIN_VOUT1_D8
#define BBAI_P8_37B		DRA7XX_PIN_MCASP4_FSX

#endif

