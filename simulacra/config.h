#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xe70c
#define PRODUCT_ID      0x9ed8
#define DEVICE_VER      0x0001
#define MANUFACTURER    DWShuo 

// defined in subfolder
#define DESCRIPTION     Dactyl Manuform - Simulacra edition
#define PRODUCT         Simulacra 5x6

/* mouse config */
#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_DELAY          0
#define MOUSEKEY_TIME_TO_MAX    60
#define MOUSEKEY_MAX_SPEED      7
#define MOUSEKEY_WHEEL_DELAY    0

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
//#define PERMISSIVE_HOLD

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
// #define MATRIX_HAS_GHOST

// wiring of the encoder (right side)
#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }

// define de timing for the tap dance time out
 //#define TAPPING_TERM 200

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
*/

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
#define LAYER_STATE_8BIT // If using low layer count, use to reduce firmware size
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
