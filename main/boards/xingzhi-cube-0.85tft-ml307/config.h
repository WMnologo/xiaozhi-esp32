
#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

#define AUDIO_INPUT_SAMPLE_RATE  16000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

#define AUDIO_I2S_MIC_GPIO_WS   GPIO_NUM_4
#define AUDIO_I2S_MIC_GPIO_SCK  GPIO_NUM_5
#define AUDIO_I2S_MIC_GPIO_DIN  GPIO_NUM_6
#define AUDIO_I2S_SPK_GPIO_DOUT GPIO_NUM_7
#define AUDIO_I2S_SPK_GPIO_BCLK GPIO_NUM_15
#define AUDIO_I2S_SPK_GPIO_LRCK GPIO_NUM_16

#define BOOT_BUTTON_GPIO        GPIO_NUM_0
#define VOLUME_UP_BUTTON_GPIO   GPIO_NUM_NC
#define VOLUME_DOWN_BUTTON_GPIO GPIO_NUM_NC

#define DISPLAY_SDA GPIO_NUM_10
#define DISPLAY_SCL GPIO_NUM_9
#define DISPLAY_DC GPIO_NUM_8
#define DISPLAY_CS GPIO_NUM_14
#define DISPLAY_RES GPIO_NUM_18
#define DISPLAY_WIDTH   128
#define DISPLAY_HEIGHT  128
#define DISPLAY_SWAP_XY  false
#define DISPLAY_MIRROR_X false
#define DISPLAY_MIRROR_Y true
#define BACKLIGHT_INVERT false
#define DISPLAY_OFFSET_X  0
#define DISPLAY_OFFSET_Y  0
#define DISPLAY_BACKLIGHT_PIN GPIO_NUM_13
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

#define ML307_RX_PIN GPIO_NUM_12
#define ML307_TX_PIN GPIO_NUM_11

#endif // _BOARD_CONFIG_H_
