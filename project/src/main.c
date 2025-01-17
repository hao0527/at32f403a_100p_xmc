/* add user code begin Header */
/**
 **************************************************************************
 * @file     main.c
 * @brief    main program
 **************************************************************************
 *                       Copyright notice & Disclaimer
 *
 * The software Board Support Package (BSP) that is made available to
 * download from Artery official website is the copyrighted work of Artery.
 * Artery authorizes customers to use, copy, and distribute the BSP
 * software and its related documentation for the purpose of design and
 * development in conjunction with Artery microcontrollers. Use of the
 * software is governed by this copyright notice and the following disclaimer.
 *
 * THIS SOFTWARE IS PROVIDED ON "AS IS" BASIS WITHOUT WARRANTIES,
 * GUARANTEES OR REPRESENTATIONS OF ANY KIND. ARTERY EXPRESSLY DISCLAIMS,
 * TO THE FULLEST EXTENT PERMITTED BY LAW, ALL EXPRESS, IMPLIED OR
 * STATUTORY OR OTHER WARRANTIES, GUARANTEES OR REPRESENTATIONS,
 * INCLUDING BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT.
 *
 **************************************************************************
 */
/* add user code end Header */

/* Includes ------------------------------------------------------------------*/
#include "at32f403a_407_wk_config.h"

/* private includes ----------------------------------------------------------*/
/* add user code begin private includes */
#include "app_delay.h"
#include "xmc_lcd.h"

/* add user code end private includes */

/* private typedef -----------------------------------------------------------*/
/* add user code begin private typedef */

/* add user code end private typedef */

/* private define ------------------------------------------------------------*/
/* add user code begin private define */

/* add user code end private define */

/* private macro -------------------------------------------------------------*/
/* add user code begin private macro */

/* add user code end private macro */

/* private variables ---------------------------------------------------------*/
/* add user code begin private variables */

/* add user code end private variables */

/* private function prototypes --------------------------------------------*/
/* add user code begin function prototypes */

/* add user code end function prototypes */

/* private user code ---------------------------------------------------------*/
/* add user code begin 0 */

/* add user code end 0 */

/**
 * @brief main function.
 * @param  none
 * @retval none
 */
int main(void)
{
	/* add user code begin 1 */

	/* add user code end 1 */

	/* system clock config. */
	wk_system_clock_config();

	/* config periph clock. */
	wk_periph_clock_config();

	/* init debug function. */
	wk_debug_config();

	/* nvic config. */
	wk_nvic_config();

	/* init dma1 channel1 */
	wk_dma1_channel1_init();
	/* config dma channel transfer parameter */
	/* user need to modify define values DMAx_CHANNELy_XXX_BASE_ADDR and DMAx_CHANNELy_BUFFER_SIZE in at32xxx_wk_config.h */
	wk_dma_channel_config(DMA1_CHANNEL1, (uint32_t)&SPI1->dt, DMA1_CHANNEL1_MEMORY_BASE_ADDR, DMA1_CHANNEL1_BUFFER_SIZE);
	dma_channel_enable(DMA1_CHANNEL1, TRUE);

	/* init wk_xmc_gpio function. */
	wk_xmc_gpio_init();

	/* init xmc_bank1_nor_sram1 function. */
	wk_xmc_bank1_nor_sram1_init();

	/* init spi1 function. */
	wk_spi1_init();

	/* add user code begin 2 */
	delay_init();
	/* add user code end 2 */

	while (1) {
		/* add user code begin 3 */
		lcd_init();
		delay_sec(1);
		/* add user code end 3 */
	}
}
