/*
 * Copyright 2024 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v15.0
processor: MCXC444
package_id: MCXC444VLH
mcu_data: ksdk2_0
processor_version: 0.16.2
board: FRDM-MCXC444
expansion_headers:
- id: micro_bus
  name: mikroBUS(TM)
  connectors:
  - id: C1
    name: J6
    pins:
    - {id: 1, pin_num: '35', pin_signal: LCD_P0/ADC0_SE8/PTB0/LLWU_P5/I2C0_SCL/TPM1_CH0}
    - {id: 2, pin_num: '18', pin_signal: DAC0_OUT/ADC0_SE23/CMP0_IN4/PTE30/TPM0_CH3/TPM_CLKIN1/LPUART1_TX/LPTMR0_ALT1}
    - {id: 3, pin_num: '61', pin_signal: LCD_P44/PTD4/LLWU_P14/SPI1_SS/UART2_RX/TPM0_CH4/FXIO0_D4}
    - {id: 4, pin_num: '62', pin_signal: LCD_P45/ADC0_SE6b/PTD5/SPI1_SCK/UART2_TX/TPM0_CH5/FXIO0_D5}
    - {id: 5, pin_num: '64', pin_signal: LCD_P47/PTD7/SPI1_MISO/LPUART0_TX/SPI1_MOSI/FXIO0_D7}
    - {id: 6, pin_num: '63', pin_signal: LCD_P46/ADC0_SE7b/PTD6/LLWU_P15/SPI1_MOSI/LPUART0_RX/SPI1_MISO/FXIO0_D6}
  - id: C2
    name: J5
    pins:
    - {id: 1, pin_num: '28', pin_signal: PTA12/TPM1_CH0/I2S0_TXD0}
    - {id: 2, pin_num: '60', pin_signal: LCD_P43/PTD3/SPI0_MISO/UART2_TX/TPM0_CH3/SPI0_MOSI/FXIO0_D3}
    - {id: 3, pin_num: '2', pin_signal: LCD_P49/PTE1/SPI1_MOSI/LPUART1_RX/SPI1_MISO/I2C1_SCL}
    - {id: 4, pin_num: '1', pin_signal: LCD_P48/PTE0/CLKOUT32K/SPI1_MISO/LPUART1_TX/RTC_CLKOUT/CMP0_OUT/I2C1_SDA}
    - {id: 5, pin_num: '44', pin_signal: LCD_P21/ADC0_SE15/PTC1/LLWU_P6/RTC_CLKIN/I2C1_SCL/TPM0_CH0/I2S0_TXD0}
    - {id: 6, pin_num: '45', pin_signal: LCD_P22/ADC0_SE11/PTC2/I2C1_SDA/TPM0_CH1/I2S0_TX_FS}
- id: frdm_arduino
  name: LPCXpresso V3 (Arduino compatible)
  connectors:
  - id: C1
    name: J3
    pins:
    - {id: 6, pin_num: '34', pin_signal: PTA20/RESET_b}
  - id: C2
    name: J2
    pins:
    - {id: 2, pin_num: '29', pin_signal: PTA13/TPM1_CH1/I2S0_TX_FS}
    - {id: 4, pin_num: '59', pin_signal: LCD_P42/PTD2/SPI0_MOSI/UART2_RX/TPM0_CH2/SPI0_MISO/FXIO0_D2}
    - {id: 6, pin_num: '61', pin_signal: LCD_P44/PTD4/LLWU_P14/SPI1_SS/UART2_RX/TPM0_CH4/FXIO0_D4}
    - {id: 8, pin_num: '63', pin_signal: LCD_P46/ADC0_SE7b/PTD6/LLWU_P15/SPI1_MOSI/LPUART0_RX/SPI1_MISO/FXIO0_D6}
    - {id: 10, pin_num: '64', pin_signal: LCD_P47/PTD7/SPI1_MISO/LPUART0_TX/SPI1_MOSI/FXIO0_D7}
    - {id: 12, pin_num: '62', pin_signal: LCD_P45/ADC0_SE6b/PTD5/SPI1_SCK/UART2_TX/TPM0_CH5/FXIO0_D5}
    - {id: 17, pin_num: '40', pin_signal: LCD_P13/PTB17/SPI1_MISO/LPUART0_TX/TPM_CLKIN1/SPI1_MOSI}
    - {id: 18, pin_num: '1', pin_signal: LCD_P48/PTE0/CLKOUT32K/SPI1_MISO/LPUART1_TX/RTC_CLKOUT/CMP0_OUT/I2C1_SDA}
    - {id: 19, pin_num: '39', pin_signal: LCD_P12/PTB16/SPI1_MOSI/LPUART0_RX/TPM_CLKIN0/SPI1_MISO}
    - {id: 20, pin_num: '2', pin_signal: LCD_P49/PTE1/SPI1_MOSI/LPUART1_RX/SPI1_MISO/I2C1_SCL}
  - id: C3
    name: J1
    pins:
    - {id: 1, pin_num: '41', pin_signal: LCD_P14/PTB18/TPM2_CH0/I2S0_TX_BCLK}
    - {id: 2, pin_num: '23', pin_signal: PTA1/LPUART0_RX/TPM2_CH0}
    - {id: 3, pin_num: '42', pin_signal: LCD_P15/PTB19/TPM2_CH1/I2S0_TX_FS}
    - {id: 4, pin_num: '24', pin_signal: PTA2/LPUART0_TX/TPM2_CH1}
    - {id: 5, pin_num: '43', pin_signal: LCD_P20/ADC0_SE14/PTC0/EXTRG_IN/USB_SOF_OUT/CMP0_OUT/I2S0_TXD0}
    - {id: 6, pin_num: '60', pin_signal: LCD_P43/PTD3/SPI0_MISO/UART2_TX/TPM0_CH3/SPI0_MOSI/FXIO0_D3}
    - {id: 7, pin_num: '53', pin_signal: LCD_P24/PTC4/LLWU_P8/SPI0_SS/LPUART1_TX/TPM0_CH3/I2S0_MCLK}
    - {id: 8, pin_num: '28', pin_signal: PTA12/TPM1_CH0/I2S0_TXD0}
    - {id: 9, pin_num: '55', pin_signal: LCD_P26/CMP0_IN0/PTC6/LLWU_P10/SPI0_MOSI/EXTRG_IN/I2S0_RX_BCLK/SPI0_MISO/I2S0_MCLK}
    - {id: 10, pin_num: '26', pin_signal: PTA4/I2C1_SDA/TPM0_CH1/NMI_b}
    - {id: 11, pin_num: '56', pin_signal: LCD_P27/CMP0_IN1/PTC7/SPI0_MISO/USB_SOF_OUT/I2S0_RX_FS/SPI0_MOSI}
    - {id: 12, pin_num: '27', pin_signal: PTA5/USB_CLKIN/TPM0_CH2/I2S0_TX_BCLK}
    - {id: 14, pin_num: '17', pin_signal: CMP0_IN5/ADC0_SE4b/PTE29/TPM0_CH2/TPM_CLKIN0}
    - {id: 15, pin_num: '54', pin_signal: LCD_P25/PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/I2S0_RXD0/CMP0_OUT}
    - {id: 16, pin_num: '18', pin_signal: DAC0_OUT/ADC0_SE23/CMP0_IN4/PTE30/TPM0_CH3/TPM_CLKIN1/LPUART1_TX/LPTMR0_ALT1}
  - id: C4
    name: J4
    pins:
    - {id: 1, pin_num: '9', pin_signal: LCD_P59/ADC0_DP0/ADC0_SE0/PTE20/TPM1_CH0/LPUART0_TX/FXIO0_D4}
    - {id: 2, pin_num: '35', pin_signal: LCD_P0/ADC0_SE8/PTB0/LLWU_P5/I2C0_SCL/TPM1_CH0}
    - {id: 3, pin_num: '10', pin_signal: LCD_P60/ADC0_DM0/ADC0_SE4a/PTE21/TPM1_CH1/LPUART0_RX/FXIO0_D5}
    - {id: 4, pin_num: '36', pin_signal: LCD_P1/ADC0_SE9/PTB1/I2C0_SDA/TPM1_CH1}
    - {id: 5, pin_num: '11', pin_signal: ADC0_DP3/ADC0_SE3/PTE22/TPM2_CH0/UART2_TX/FXIO0_D6}
    - {id: 6, pin_num: '37', pin_signal: LCD_P2/ADC0_SE12/PTB2/I2C0_SCL/TPM2_CH0}
    - {id: 7, pin_num: '12', pin_signal: ADC0_DM3/ADC0_SE7a/PTE23/TPM2_CH1/UART2_RX/FXIO0_D7}
    - {id: 8, pin_num: '38', pin_signal: LCD_P3/ADC0_SE13/PTB3/I2C0_SDA/TPM2_CH1}
    - {id: 9, pin_num: '1', pin_signal: LCD_P48/PTE0/CLKOUT32K/SPI1_MISO/LPUART1_TX/RTC_CLKOUT/CMP0_OUT/I2C1_SDA}
    - {id: 10, pin_num: '45', pin_signal: LCD_P22/ADC0_SE11/PTC2/I2C1_SDA/TPM0_CH1/I2S0_TX_FS}
    - {id: 11, pin_num: '18', pin_signal: DAC0_OUT/ADC0_SE23/CMP0_IN4/PTE30/TPM0_CH3/TPM_CLKIN1/LPUART1_TX/LPTMR0_ALT1}
    - {id: 12, pin_num: '44', pin_signal: LCD_P21/ADC0_SE15/PTC1/LLWU_P6/RTC_CLKIN/I2C1_SCL/TPM0_CH0/I2S0_TXD0}
external_user_signals: {}
pin_labels:
- {pin_num: '1', pin_signal: LCD_P48/PTE0/CLKOUT32K/SPI1_MISO/LPUART1_TX/RTC_CLKOUT/CMP0_OUT/I2C1_SDA, label: 'PTE0/J2[18]/J4[9]/J5[4]'}
- {pin_num: '2', pin_signal: LCD_P49/PTE1/SPI1_MOSI/LPUART1_RX/SPI1_MISO/I2C1_SCL, label: 'PTE1/J2[20]/J5[3]'}
- {pin_num: '3', pin_signal: VDD17, label: P3V3_MCU}
- {pin_num: '4', pin_signal: VSS18, label: GND}
- {pin_num: '5', pin_signal: USB0_DP, label: USB0_DP}
- {pin_num: '6', pin_signal: USB0_DM, label: USB0_DM}
- {pin_num: '7', pin_signal: VOUT33, label: TP4}
- {pin_num: '8', pin_signal: VREGIN, label: VREGIN}
- {pin_num: '9', pin_signal: LCD_P59/ADC0_DP0/ADC0_SE0/PTE20/TPM1_CH0/LPUART0_TX/FXIO0_D4, label: 'PTE20/J4[1]'}
- {pin_num: '10', pin_signal: LCD_P60/ADC0_DM0/ADC0_SE4a/PTE21/TPM1_CH1/LPUART0_RX/FXIO0_D5, label: 'PTE21/J4[3]'}
- {pin_num: '11', pin_signal: ADC0_DP3/ADC0_SE3/PTE22/TPM2_CH0/UART2_TX/FXIO0_D6, label: 'PTE22/J4[5]'}
- {pin_num: '12', pin_signal: ADC0_DM3/ADC0_SE7a/PTE23/TPM2_CH1/UART2_RX/FXIO0_D7, label: 'PTE23/J4[7]'}
- {pin_num: '13', pin_signal: VDDA, label: P3V3_MCU}
- {pin_num: '14', pin_signal: VREFH, label: 'VREFH/JP6[2]'}
- {pin_num: '15', pin_signal: VREFL, label: VREFL/GND}
- {pin_num: '16', pin_signal: VSSA, label: GND}
- {pin_num: '17', pin_signal: CMP0_IN5/ADC0_SE4b/PTE29/TPM0_CH2/TPM_CLKIN0, label: 'PTE29/J1[14]/J7[4]', identifier: LED_BLUE}
- {pin_num: '18', pin_signal: DAC0_OUT/ADC0_SE23/CMP0_IN4/PTE30/TPM0_CH3/TPM_CLKIN1/LPUART1_TX/LPTMR0_ALT1, label: 'PTE30/J1[16]/J4[11]/J6[2]'}
- {pin_num: '19', pin_signal: PTE31/TPM0_CH4, label: PTE31, identifier: LED_RED}
- {pin_num: '20', pin_signal: PTE24/TPM0_CH0/I2C0_SCL, label: PTE24}
- {pin_num: '21', pin_signal: PTE25/TPM0_CH1/I2C0_SDA, label: PTE25}
- {pin_num: '22', pin_signal: PTA0/TPM0_CH5/SWD_CLK, label: 'PTA0/J10[4]/JP5[1]', identifier: DEBUG_SWD_SWDCLK}
- {pin_num: '23', pin_signal: PTA1/LPUART0_RX/TPM2_CH0, label: 'PTA1/J1[2]', identifier: DEBUG_UART_RX}
- {pin_num: '24', pin_signal: PTA2/LPUART0_TX/TPM2_CH1, label: 'PTA2/J1[4]', identifier: DEBUG_UART_TX}
- {pin_num: '25', pin_signal: PTA3/I2C1_SCL/TPM0_CH0/SWD_DIO, label: 'PTA3/J10[2]', identifier: DEBUG_SWD_SWDIO}
- {pin_num: '26', pin_signal: PTA4/I2C1_SDA/TPM0_CH1/NMI_b, label: 'PTA4/J1[10]', identifier: SW3}
- {pin_num: '27', pin_signal: PTA5/USB_CLKIN/TPM0_CH2/I2S0_TX_BCLK, label: 'PTA5/J1[12]/J7[2]'}
- {pin_num: '28', pin_signal: PTA12/TPM1_CH0/I2S0_TXD0, label: 'PTA12/J1[8]/J5[1]'}
- {pin_num: '29', pin_signal: PTA13/TPM1_CH1/I2S0_TX_FS, label: 'PTA13/J2[2]'}
- {pin_num: '30', pin_signal: VDD96, label: P3V3_MCU}
- {pin_num: '31', pin_signal: VSS97, label: GND}
- {pin_num: '32', pin_signal: EXTAL0/PTA18/LPUART1_RX/TPM_CLKIN0, label: 'PTA18/EXTAL_32KHZ/Y1[1]'}
- {pin_num: '33', pin_signal: XTAL0/PTA19/LPUART1_TX/TPM_CLKIN1/LPTMR0_ALT1, label: 'PTA19/XTAL_32KHZ/Y1[2]'}
- {pin_num: '34', pin_signal: PTA20/RESET_b, label: 'PTA20/J10[10]/SW1[2]/SW1[4]/SW1[6]', identifier: SW1}
- {pin_num: '35', pin_signal: LCD_P0/ADC0_SE8/PTB0/LLWU_P5/I2C0_SCL/TPM1_CH0, label: 'PTB0/J4[2]/J6[1]'}
- {pin_num: '36', pin_signal: LCD_P1/ADC0_SE9/PTB1/I2C0_SDA/TPM1_CH1, label: 'PTB1/J4[4]'}
- {pin_num: '37', pin_signal: LCD_P2/ADC0_SE12/PTB2/I2C0_SCL/TPM2_CH0, label: 'PTB2/J4[6]'}
- {pin_num: '38', pin_signal: LCD_P3/ADC0_SE13/PTB3/I2C0_SDA/TPM2_CH1, label: 'PTB3/J4[8]'}
- {pin_num: '39', pin_signal: LCD_P12/PTB16/SPI1_MOSI/LPUART0_RX/TPM_CLKIN0/SPI1_MISO, label: 'PTB16/J2[19]'}
- {pin_num: '40', pin_signal: LCD_P13/PTB17/SPI1_MISO/LPUART0_TX/TPM_CLKIN1/SPI1_MOSI, label: 'PTB17/J2[17]'}
- {pin_num: '41', pin_signal: LCD_P14/PTB18/TPM2_CH0/I2S0_TX_BCLK, label: 'PTB18/J1[1]'}
- {pin_num: '42', pin_signal: LCD_P15/PTB19/TPM2_CH1/I2S0_TX_FS, label: 'PTB19/J1[3]'}
- {pin_num: '43', pin_signal: LCD_P20/ADC0_SE14/PTC0/EXTRG_IN/USB_SOF_OUT/CMP0_OUT/I2S0_TXD0, label: 'PTC0/J1[5]'}
- {pin_num: '44', pin_signal: LCD_P21/ADC0_SE15/PTC1/LLWU_P6/RTC_CLKIN/I2C1_SCL/TPM0_CH0/I2S0_TXD0, label: 'PTC1/J4[12]/J5[5]/J7[6]'}
- {pin_num: '45', pin_signal: LCD_P22/ADC0_SE11/PTC2/I2C1_SDA/TPM0_CH1/I2S0_TX_FS, label: 'PTC2/J4[10]/J5[6]/J7[8]'}
- {pin_num: '46', pin_signal: LCD_P23/PTC3/LLWU_P7/SPI1_SCK/LPUART1_RX/TPM0_CH2/CLKOUT/I2S0_TX_BCLK, label: 'PTC3/SW2[2]/SW2[4]/SW2[6]', identifier: SW2}
- {pin_num: '47', pin_signal: VSS138, label: GND}
- {pin_num: '48', pin_signal: VLL3, label: 'JP7[2]'}
- {pin_num: '49', pin_signal: VLL2/LCD_P4/PTC20, label: PTC20/TP2}
- {pin_num: '50', pin_signal: VLL1/LCD_P5/PTC21, label: PTC21/TP1}
- {pin_num: '51', pin_signal: VCAP2/LCD_P6/PTC22, label: PTC22}
- {pin_num: '52', pin_signal: VCAP1/LCD_P39/PTC23, label: PTC23}
- {pin_num: '53', pin_signal: LCD_P24/PTC4/LLWU_P8/SPI0_SS/LPUART1_TX/TPM0_CH3/I2S0_MCLK, label: 'PTC4/J1[7]'}
- {pin_num: '54', pin_signal: LCD_P25/PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/I2S0_RXD0/CMP0_OUT, label: 'PTC5/J1[15]'}
- {pin_num: '55', pin_signal: LCD_P26/CMP0_IN0/PTC6/LLWU_P10/SPI0_MOSI/EXTRG_IN/I2S0_RX_BCLK/SPI0_MISO/I2S0_MCLK, label: 'PTC6/J1[9]'}
- {pin_num: '56', pin_signal: LCD_P27/CMP0_IN1/PTC7/SPI0_MISO/USB_SOF_OUT/I2S0_RX_FS/SPI0_MOSI, label: 'PTC7/J1[11]'}
- {pin_num: '57', pin_signal: LCD_P40/PTD0/SPI0_SS/TPM0_CH0/FXIO0_D0, label: 'PTD0/DS1[9]'}
- {pin_num: '58', pin_signal: LCD_P41/ADC0_SE5b/PTD1/SPI0_SCK/TPM0_CH1/FXIO0_D1, label: PTD1}
- {pin_num: '59', pin_signal: LCD_P42/PTD2/SPI0_MOSI/UART2_RX/TPM0_CH2/SPI0_MISO/FXIO0_D2, label: 'PTD2/J2[4]'}
- {pin_num: '60', pin_signal: LCD_P43/PTD3/SPI0_MISO/UART2_TX/TPM0_CH3/SPI0_MOSI/FXIO0_D3, label: 'PTD3/J1[6]/J5[2]'}
- {pin_num: '61', pin_signal: LCD_P44/PTD4/LLWU_P14/SPI1_SS/UART2_RX/TPM0_CH4/FXIO0_D4, label: 'PTD4/J2[6]/J7[1]/J6[3]'}
- {pin_num: '62', pin_signal: LCD_P45/ADC0_SE6b/PTD5/SPI1_SCK/UART2_TX/TPM0_CH5/FXIO0_D5, label: 'PTD5/J2[12]/J7[7]/J6[4]', identifier: LED_GREEN}
- {pin_num: '63', pin_signal: LCD_P46/ADC0_SE7b/PTD6/LLWU_P15/SPI1_MOSI/LPUART0_RX/SPI1_MISO/FXIO0_D6, label: 'PTD6/J2[8]/J7[3]/J6[6]'}
- {pin_num: '64', pin_signal: LCD_P47/PTD7/SPI1_MISO/LPUART0_TX/SPI1_MOSI/FXIO0_D7, label: 'PTD7/J2[10]/J7[5]/J6[5]'}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitDEBUG_UARTPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitDEBUG_UARTPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '23', peripheral: LPUART0, signal: RX, pin_signal: PTA1/LPUART0_RX/TPM2_CH0}
  - {pin_num: '24', peripheral: LPUART0, signal: TX, pin_signal: PTA2/LPUART0_TX/TPM2_CH1}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitDEBUG_UARTPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitDEBUG_UARTPins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);

    /* PORTA1 (pin 23) is configured as LPUART0_RX */
    PORT_SetPinMux(BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PORT, BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN, kPORT_MuxAlt2);

    /* PORTA2 (pin 24) is configured as LPUART0_TX */
    PORT_SetPinMux(BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PORT, BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN, kPORT_MuxAlt2);

    SIM->SOPT5 = ((SIM->SOPT5 &
                   /* Mask bits to zero which are setting */
                   (~(SIM_SOPT5_LPUART0TXSRC_MASK | SIM_SOPT5_LPUART0RXSRC_MASK)))

                  /* LPUART0 Transmit Data Source Select: LPUART0_TX pin. */
                  | SIM_SOPT5_LPUART0TXSRC(SOPT5_LPUART0TXSRC_LPUART_TX)

                  /* LPUART0 Receive Data Source Select: LPUART_RX pin. */
                  | SIM_SOPT5_LPUART0RXSRC(SOPT5_LPUART0RXSRC_LPUART_RX));
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitSWD_DEBUGPins:
- options: {callFromInitBoot: 'false', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '22', peripheral: SWD, signal: CLK, pin_signal: PTA0/TPM0_CH5/SWD_CLK}
  - {pin_num: '25', peripheral: SWD, signal: DIO, pin_signal: PTA3/I2C1_SCL/TPM0_CH0/SWD_DIO}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitSWD_DEBUGPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitSWD_DEBUGPins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);

    /* PORTA0 (pin 22) is configured as SWD_CLK */
    PORT_SetPinMux(BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_PORT, BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDCLK_PIN, kPORT_MuxAlt7);

    /* PORTA3 (pin 25) is configured as SWD_DIO */
    PORT_SetPinMux(BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_PORT, BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_PIN, kPORT_MuxAlt7);
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitLEDsPins:
- options: {callFromInitBoot: 'false', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '17', peripheral: GPIOE, signal: 'GPIO, 29', pin_signal: CMP0_IN5/ADC0_SE4b/PTE29/TPM0_CH2/TPM_CLKIN0}
  - {pin_num: '19', peripheral: GPIOE, signal: 'GPIO, 31', pin_signal: PTE31/TPM0_CH4}
  - {pin_num: '62', peripheral: GPIOD, signal: 'GPIO, 5', pin_signal: LCD_P45/ADC0_SE6b/PTD5/SPI1_SCK/UART2_TX/TPM0_CH5/FXIO0_D5}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitLEDsPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitLEDsPins(void)
{
    /* Port D Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortD);
    /* Port E Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortE);

    /* PORTD5 (pin 62) is configured as PTD5 */
    PORT_SetPinMux(BOARD_INITLEDSPINS_LED_GREEN_PORT, BOARD_INITLEDSPINS_LED_GREEN_PIN, kPORT_MuxAsGpio);

    /* PORTE29 (pin 17) is configured as PTE29 */
    PORT_SetPinMux(BOARD_INITLEDSPINS_LED_BLUE_PORT, BOARD_INITLEDSPINS_LED_BLUE_PIN, kPORT_MuxAsGpio);

    /* PORTE31 (pin 19) is configured as PTE31 */
    PORT_SetPinMux(BOARD_INITLEDSPINS_LED_RED_PORT, BOARD_INITLEDSPINS_LED_RED_PIN, kPORT_MuxAsGpio);
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitBUTTONsPins:
- options: {callFromInitBoot: 'false', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '26', peripheral: GPIOA, signal: 'GPIO, 4', pin_signal: PTA4/I2C1_SDA/TPM0_CH1/NMI_b}
  - {pin_num: '34', peripheral: RCM, signal: RESET, pin_signal: PTA20/RESET_b}
  - {pin_num: '46', peripheral: GPIOC, signal: 'GPIO, 3', pin_signal: LCD_P23/PTC3/LLWU_P7/SPI1_SCK/LPUART1_RX/TPM0_CH2/CLKOUT/I2S0_TX_BCLK}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBUTTONsPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBUTTONsPins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Port C Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortC);

    /* PORTA20 (pin 34) is configured as RESET_b */
    PORT_SetPinMux(BOARD_INITBUTTONSPINS_SW1_PORT, BOARD_INITBUTTONSPINS_SW1_PIN, kPORT_MuxAlt7);

    /* PORTA4 (pin 26) is configured as PTA4 */
    PORT_SetPinMux(BOARD_INITBUTTONSPINS_SW3_PORT, BOARD_INITBUTTONSPINS_SW3_PIN, kPORT_MuxAsGpio);

    /* PORTC3 (pin 46) is configured as PTC3 */
    PORT_SetPinMux(BOARD_INITBUTTONSPINS_SW2_PORT, BOARD_INITBUTTONSPINS_SW2_PIN, kPORT_MuxAsGpio);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/