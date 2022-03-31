#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 	0xEEEE
#define PRODUCT_ID 	0x0001
#define RAW_USAGE_PAGE	0xFF60
#define RAW_USAGE_ID 	0x61
#define DEVICE_VER	0x0001
#define MANUFACTURER    DWin
#define PRODUCT         SCREEN

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

/* key matrix pins */
#define MATRIX_ROW_PINS { B2 }
#define MATRIX_COL_PINS { B1 }
#define UNUSED_PINS

#define ENCODERS_PAD_A {D3}
#define ENCODERS_PAD_B {F5}
#define ENCODER_RESOLUTION 2

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
