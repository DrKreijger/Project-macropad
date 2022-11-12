#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0003
#define MANUFACTURER    nglgzz
#define PRODUCT         42
/*#define DESCRIPTION     BT*/

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 5

/* key matrix pins  for beccas board*/
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { C7, D6, B7, B6, B5  }
/*#define UNUSED_PINS*/

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* OLED */

#define OLED_DISPLAY_128X32

#define ENCODERS_PAD_A {C6}
#define ENCODERS_PAD_B {D7}
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

