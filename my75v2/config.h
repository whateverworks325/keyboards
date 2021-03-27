/*
Copyright 2020 DmNosachev

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFAED
#define PRODUCT_ID   0x6066
#define DEVICE_VER   0x0001
#define MANUFACTURER frankch
#define PRODUCT      MY75V2
/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* blue pill */
//#define MATRIX_ROW_PINS { A3, A2, A1, A0, C15, C14 }
//#define MATRIX_COL_PINS { B9, B8, B7, B6, B5, B4, B3, A15, A12, A11, A8, B15, B14, B13, B12 }

/* black pill flip: PA11/PA12 for USB */
#define MATRIX_ROW_PINS { A0, A5, A4, A3, A2, A1 }
#define MATRIX_COL_PINS { B12, B13, B14, B15, A8, A9, A10, A7, A6, A15, B3, B4, B5, B6, B7 }

#define UNUSED_PINS

#define ENCODERS_PAD_A { B0 }
#define ENCODERS_PAD_B { B1 }

#define I2C_DRIVER I2CD2      //I2C peripheral to use
#define I2C1_SCL_BANK GPIOB   //The bank of pins to use for SCL (B__)
#define I2C1_SCL 10           //The pin number for SCL (B10)
#define I2C1_SDA_BANK GPIOB   //The bank of pins to use for SDA (B__)
#define I2C1_SDA 11           //The pin number for SDA (B11)

/* don't intend to wire leds */
//#define NUM_LOCK_LED_PIN B13
//#define SCROLL_LOCK_LED_PIN B14
//#define CAPS_LOCK_LED_PIN B15

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/*
 * Force NKRO
 *
 * Force NKRO (nKey Rollover) to be enabled by default, regardless of the saved
 * state in the bootmagic EEPROM settings. (Note that NKRO must be enabled in the
 * makefile for this to work.)
 *
 * If forced on, NKRO can be disabled via magic key (default = LShift+RShift+N)
 * until the next keyboard reset.
 *
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 *
 */
//#define FORCE_NKRO

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0
