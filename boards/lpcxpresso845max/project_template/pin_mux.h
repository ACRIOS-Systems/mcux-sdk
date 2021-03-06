/*
 * Copyright 2018 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
    kPIN_MUX_DirectionInput = 0U,        /* Input direction */
    kPIN_MUX_DirectionOutput = 1U,       /* Output direction */
    kPIN_MUX_DirectionInputOrOutput = 2U /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M0P */

#define IOCON_PIO_CLKDIV0 0x00u      /*!<@brief IOCONCLKDIV0 */
#define IOCON_PIO_HYS_EN 0x20u       /*!<@brief Enable hysteresis */
#define IOCON_PIO_INV_DI 0x00u       /*!<@brief Input not invert */
#define IOCON_PIO_MODE_PULLUP 0x10u  /*!<@brief Selects pull-up function */
#define IOCON_PIO_OD_DI 0x00u        /*!<@brief Disables Open-drain function */
#define IOCON_PIO_OD_EN 0x0400u      /*!<@brief Enables Open-drain function */
#define IOCON_PIO_SMODE_BYPASS 0x00u /*!<@brief Bypass input filter */

/*! @name PIO0_0 (number 48), D1/P0_0-GREEN
  @{ */
/*!
 * @brief Device name: GPIO */
#define BOARD_INITLEDSPINS_LED_GREEN_PERIPHERAL GPIO
/*!
 * @brief GPIO signal: PIO0 */
#define BOARD_INITLEDSPINS_LED_GREEN_SIGNAL PIO0
/*!
 * @brief GPIO device name: GPIO */
#define BOARD_INITLEDSPINS_LED_GREEN_GPIO GPIO
/*!
 * @brief PIO0 pin index: 0 */
#define BOARD_INITLEDSPINS_LED_GREEN_GPIO_PIN 0U
/*!
 * @brief PORT device name: 0U */
#define BOARD_INITLEDSPINS_LED_GREEN_PORT 0U
/*!
 * @brief 0U pin index: 0 */
#define BOARD_INITLEDSPINS_LED_GREEN_PIN 0U
/*!
 * @brief GPIO PIO0 channel: 0 */
#define BOARD_INITLEDSPINS_LED_GREEN_CHANNEL 0
/*!
 * @brief Pin name */
#define BOARD_INITLEDSPINS_LED_GREEN_PIN_NAME PIO0_0
/*!
 * @brief Label */
#define BOARD_INITLEDSPINS_LED_GREEN_LABEL "D1/P0_0-GREEN"
/*!
 * @brief Identifier name */
#define BOARD_INITLEDSPINS_LED_GREEN_NAME "LED_GREEN"
/*!
 * @brief Direction */
#define BOARD_INITLEDSPINS_LED_GREEN_DIRECTION kPIN_MUX_DirectionOutput
/* @} */

/*! @name PIO1_15 (number 24), D2/P3[44]/P1_15-BLUE
  @{ */
#define BOARD_INITLEDSPINS_LED_BLUE_PERIPHERAL GPIO                    /*!<@brief Device name: GPIO */
#define BOARD_INITLEDSPINS_LED_BLUE_SIGNAL PIO1                        /*!<@brief GPIO signal: PIO1 */
#define BOARD_INITLEDSPINS_LED_BLUE_GPIO GPIO                          /*!<@brief GPIO device name: GPIO */
#define BOARD_INITLEDSPINS_LED_BLUE_GPIO_PIN 15U                       /*!<@brief PIO1 pin index: 15 */
#define BOARD_INITLEDSPINS_LED_BLUE_PORT 1U                            /*!<@brief PORT device name: 1U */
#define BOARD_INITLEDSPINS_LED_BLUE_PIN 15U                            /*!<@brief 1U pin index: 15 */
#define BOARD_INITLEDSPINS_LED_BLUE_CHANNEL 15                         /*!<@brief GPIO PIO1 channel: 15 */
#define BOARD_INITLEDSPINS_LED_BLUE_PIN_NAME PIO1_15                   /*!<@brief Pin name */
#define BOARD_INITLEDSPINS_LED_BLUE_LABEL "D2/P3[44]/P1_15-BLUE"       /*!<@brief Label */
#define BOARD_INITLEDSPINS_LED_BLUE_NAME "LED_BLUE"                    /*!<@brief Identifier name */
#define BOARD_INITLEDSPINS_LED_BLUE_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                       /* @} */

/*! @name PIO0_12 (number 4), D3/P3[45]/SW1/P0_12-RED-ISP
  @{ */
#define BOARD_INITLEDSPINS_LED_RED_PERIPHERAL GPIO                     /*!<@brief Device name: GPIO */
#define BOARD_INITLEDSPINS_LED_RED_SIGNAL PIO0                         /*!<@brief GPIO signal: PIO0 */
#define BOARD_INITLEDSPINS_LED_RED_GPIO GPIO                           /*!<@brief GPIO device name: GPIO */
#define BOARD_INITLEDSPINS_LED_RED_GPIO_PIN 12U                        /*!<@brief PIO0 pin index: 12 */
#define BOARD_INITLEDSPINS_LED_RED_PORT 0U                             /*!<@brief PORT device name: 0U */
#define BOARD_INITLEDSPINS_LED_RED_PIN 12U                             /*!<@brief 0U pin index: 12 */
#define BOARD_INITLEDSPINS_LED_RED_CHANNEL 12                          /*!<@brief GPIO PIO0 channel: 12 */
#define BOARD_INITLEDSPINS_LED_RED_PIN_NAME PIO0_12                    /*!<@brief Pin name */
#define BOARD_INITLEDSPINS_LED_RED_LABEL "D3/P3[45]/SW1/P0_12-RED-ISP" /*!<@brief Label */
#define BOARD_INITLEDSPINS_LED_RED_NAME "LED_RED"                      /*!<@brief Identifier name */
#define BOARD_INITLEDSPINS_LED_RED_DIRECTION kPIN_MUX_DirectionOutput  /*!<@brief Direction */
                                                                       /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void); /* Function assigned for the Cortex-M0P */

#define IOCON_PIO_CLKDIV0 0x00u      /*!<@brief IOCONCLKDIV0 */
#define IOCON_PIO_HYS_EN 0x20u       /*!<@brief Enable hysteresis */
#define IOCON_PIO_INV_DI 0x00u       /*!<@brief Input not invert */
#define IOCON_PIO_MODE_PULLUP 0x10u  /*!<@brief Selects pull-up function */
#define IOCON_PIO_OD_DI 0x00u        /*!<@brief Disables Open-drain function */
#define IOCON_PIO_SMODE_BYPASS 0x00u /*!<@brief Bypass input filter */

/*! @name PIO1_17 (number 37), P3[13]/P6[1]/U4[31]/TARGET_TX_DEBUG_P1_17
  @{ */
/*!
 * @brief Device name: USART0 */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PERIPHERAL USART0
/*!
 * @brief USART0 signal: TXD */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_SIGNAL TXD
/*!
 * @brief PORT device name: 1U */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PORT 1U
/*!
 * @brief 1U pin index: 17 */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN 17U
/*!
 * @brief Pin name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN_NAME PIO1_17
/*!
 * @brief Label */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_LABEL "P3[13]/P6[1]/U4[31]/TARGET_TX_DEBUG_P1_17"
/*!
 * @brief Identifier name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_NAME "DEBUG_UART_TX"
/* @} */

/*! @name PIO1_16 (number 36), P7[1]/U4[32]/TARGET_RX_DEBUG_P1_16
  @{ */
/*!
 * @brief Device name: USART0 */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PERIPHERAL USART0
/*!
 * @brief USART0 signal: RXD */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_SIGNAL RXD
/*!
 * @brief PORT device name: 1U */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PORT 1U
/*!
 * @brief 1U pin index: 16 */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN 16U
/*!
 * @brief Pin name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN_NAME PIO1_16
/*!
 * @brief Label */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_LABEL "P7[1]/U4[32]/TARGET_RX_DEBUG_P1_16"
/*!
 * @brief Identifier name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_NAME "DEBUG_UART_RX"
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void); /* Function assigned for the Cortex-M0P */

#define IOCON_PIO_CLKDIV0 0x00u      /*!<@brief IOCONCLKDIV0 */
#define IOCON_PIO_HYS_EN 0x20u       /*!<@brief Enable hysteresis */
#define IOCON_PIO_INV_DI 0x00u       /*!<@brief Input not invert */
#define IOCON_PIO_MODE_PULLUP 0x10u  /*!<@brief Selects pull-up function */
#define IOCON_PIO_OD_DI 0x00u        /*!<@brief Disables Open-drain function */
#define IOCON_PIO_SMODE_BYPASS 0x00u /*!<@brief Bypass input filter */

/*! @name SWCLK (number 12), U4[16]/P4[4]/TARGET_SWCLK
  @{ */
/*!
 * @brief Device name: SWD */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWCLK_PERIPHERAL SWD
/*!
 * @brief SWD signal: SWCLK */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWCLK_SIGNAL SWCLK
/*!
 * @brief Pin name */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWCLK_PIN_NAME SWCLK
/*!
 * @brief Label */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWCLK_LABEL "U4[16]/P4[4]/TARGET_SWCLK"
/*!
 * @brief Identifier name */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWCLK_NAME "DEBUG_SWD_SWCLK"
/* @} */

/*! @name SWDIO (number 14), U4[17]/P4[2]/TARGET_SWDIO
  @{ */
/*!
 * @brief Device name: SWD */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_PERIPHERAL SWD
/*!
 * @brief SWD signal: SWDIO */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_SIGNAL SWDIO
/*!
 * @brief Pin name */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_PIN_NAME SWDIO
/*!
 * @brief Label */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_LABEL "U4[17]/P4[2]/TARGET_SWDIO"
/*!
 * @brief Identifier name */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_SWDIO_NAME "DEBUG_SWD_SWDIO"
/* @} */

/*! @name RESETN (number 5), P3[4]/J5[3]/U4[8]/P4[10]/SW3[1]/TARGET_nRESET-P0_5
  @{ */
/*!
 * @brief Device name: SYSCON */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_RESETN_PERIPHERAL SYSCON
/*!
 * @brief SYSCON signal: RESETN */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_RESETN_SIGNAL RESETN
/*!
 * @brief Pin name */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_RESETN_PIN_NAME RESETN
/*!
 * @brief Label */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_RESETN_LABEL "P3[4]/J5[3]/U4[8]/P4[10]/SW3[1]/TARGET_nRESET-P0_5"
/*!
 * @brief Identifier name */
#define BOARD_INITSWD_DEBUGPINS_DEBUG_SWD_RESETN_NAME "DEBUG_SWD_RESETN"
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSWD_DEBUGPins(void); /* Function assigned for the Cortex-M0P */

#define IOCON_PIO_CLKDIV0 0x00u      /*!<@brief IOCONCLKDIV0 */
#define IOCON_PIO_HYS_EN 0x20u       /*!<@brief Enable hysteresis */
#define IOCON_PIO_INV_DI 0x00u       /*!<@brief Input not invert */
#define IOCON_PIO_MODE_PULLUP 0x10u  /*!<@brief Selects pull-up function */
#define IOCON_PIO_OD_DI 0x00u        /*!<@brief Disables Open-drain function */
#define IOCON_PIO_SMODE_BYPASS 0x00u /*!<@brief Bypass input filter */

/*! @name PIO0_12 (number 4), D3/P3[45]/SW1/P0_12-RED-ISP
  @{ */
#define BOARD_INITBUTTONSPINS_SW1_PERIPHERAL GPIO                     /*!<@brief Device name: GPIO */
#define BOARD_INITBUTTONSPINS_SW1_SIGNAL PIO0                         /*!<@brief GPIO signal: PIO0 */
#define BOARD_INITBUTTONSPINS_SW1_GPIO GPIO                           /*!<@brief GPIO device name: GPIO */
#define BOARD_INITBUTTONSPINS_SW1_GPIO_PIN 12U                        /*!<@brief PIO0 pin index: 12 */
#define BOARD_INITBUTTONSPINS_SW1_PORT 0U                             /*!<@brief PORT device name: 0U */
#define BOARD_INITBUTTONSPINS_SW1_PIN 12U                             /*!<@brief 0U pin index: 12 */
#define BOARD_INITBUTTONSPINS_SW1_CHANNEL 12                          /*!<@brief GPIO PIO0 channel: 12 */
#define BOARD_INITBUTTONSPINS_SW1_PIN_NAME PIO0_12                    /*!<@brief Pin name */
#define BOARD_INITBUTTONSPINS_SW1_LABEL "D3/P3[45]/SW1/P0_12-RED-ISP" /*!<@brief Label */
#define BOARD_INITBUTTONSPINS_SW1_NAME "SW1"                          /*!<@brief Identifier name */
#define BOARD_INITBUTTONSPINS_SW1_DIRECTION kPIN_MUX_DirectionInput   /*!<@brief Direction */
                                                                      /* @} */

/*! @name PIO0_4 (number 6), P3[50]/SW2/P0_4-WAKEUP
  @{ */
#define BOARD_INITBUTTONSPINS_SW2_PERIPHERAL GPIO                   /*!<@brief Device name: GPIO */
#define BOARD_INITBUTTONSPINS_SW2_SIGNAL PIO0                       /*!<@brief GPIO signal: PIO0 */
#define BOARD_INITBUTTONSPINS_SW2_GPIO GPIO                         /*!<@brief GPIO device name: GPIO */
#define BOARD_INITBUTTONSPINS_SW2_GPIO_PIN 4U                       /*!<@brief PIO0 pin index: 4 */
#define BOARD_INITBUTTONSPINS_SW2_PORT 0U                           /*!<@brief PORT device name: 0U */
#define BOARD_INITBUTTONSPINS_SW2_PIN 4U                            /*!<@brief 0U pin index: 4 */
#define BOARD_INITBUTTONSPINS_SW2_CHANNEL 4                         /*!<@brief GPIO PIO0 channel: 4 */
#define BOARD_INITBUTTONSPINS_SW2_PIN_NAME PIO0_4                   /*!<@brief Pin name */
#define BOARD_INITBUTTONSPINS_SW2_LABEL "P3[50]/SW2/P0_4-WAKEUP"    /*!<@brief Label */
#define BOARD_INITBUTTONSPINS_SW2_NAME "SW2"                        /*!<@brief Identifier name */
#define BOARD_INITBUTTONSPINS_SW2_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */
                                                                    /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitBUTTONsPins(void); /* Function assigned for the Cortex-M0P */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
