#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0003
#define MANUFACTURER    nglgzz
#define PRODUCT         42
#define DESCRIPTION     BT

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

/* key matrix pins  for beccas board*/
#define MATRIX_ROW_PINS { F6 }
#define MATRIX_COL_PINS { F7 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* OLED */


 

#define OLED_DISPLAY_128X32



