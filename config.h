#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 	0xEEEE
#define PRODUCT_ID 	0x0001
// #define RAW_USAGE_PAGE	0xFF60
// #define RAW_USAGE_ID 	0x61
#define DEVICE_VER	0x0001
#define MANUFACTURER    DWin
#define PRODUCT         MACRO_SPLIT

//#define MASTER_LEFT
// #define EE_HANDS
#define USE_I2C
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define FORCED_SYNC_THROTTLE_MS 100
#define SPLIT_MAX_CONNECTION_ERRORS 10
#define SPLIT_CONNECTION_CHECK_TIMEOUT 500
// #define SOFT_SERIAL_PIN D0

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { B2, B6 }
#define MATRIX_COL_PINS { B1, B3 }
// #define MATRIX_ROW_PINS_RIGHT { B2, B6 }
// #define MATRIX_COL_PINS_RIGHT { B1, B3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
