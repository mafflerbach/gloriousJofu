#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    qmkbuilder
#define PRODUCT         keyboard
#define DESCRIPTION     Keyboard

#define SOFT_SERIAL_PIN D0
/* key matrix size */
#define MATRIX_ROWS 10 
#define MATRIX_COLS 9




/* key matrix pins */
//#define MATRIX_ROW_PINS { B0, B1, B2, B3, B4 }
//#define MATRIX_COL_PINS { B5, B6, B7, C0, C1, C2, C3, C4, C5, C6, C7, D0, D1, D2, D3, D4 }
//#define UNUSED_PINS

// B4, B5, B6, B2, B3 
#define MATRIX_ROW_PINS {E6, B4, B5, B6, B2}
//D4, C6, D7, A0, A1, A2, A3
#define MATRIX_COL_PINS {F5, F6, F7, B1, D7, C6, D4}
#define MATRIX_ROW_PINS_RIGHT {E6, B4, B5, B6, B2}
#define MATRIX_COL_PINS_RIGHT {F4, F5, F6, F7, B1, B3, D7, C6, D4}
#define SPLIT_HAND_PIN D3

#define MASTER_RIGHT



#define SOFT_SERIAL_PIN D0

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#define RGB_DI_PIN D3
#define DRIVER_LED_TOTAL 73

#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 73
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif
