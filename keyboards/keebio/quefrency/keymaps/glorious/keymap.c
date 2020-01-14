#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1
#define _FN2 2
/*#define _FN3 3*/

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { 

    [0] = LAYOUT(
   KC_TILD , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    ,         KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC , KC_DEL  , \
             KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,         KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_LBRC , KC_RBRC , KC_BSLS    , KC_1 ,\
             KC_CAPS , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,         KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT , KC_ENT    , KC_1, \
             KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,         KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT , KC_UP   , KC_1 ,\
             KC_LCTL , KC_LALT , MO(_FN1), KC_LGUI , KC_SPC ,                   KC_GESC , MO(_FN2), _______ , KC_RCTL     , KC_RALT     , KC_LEFT , KC_DOWN , KC_RGHT \


            

            )
    /*[1] = LAYOUT(*/
    /*KC_GESC,          KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL,  KC_BSPC, \*/
             /*_______, _______, _______,  _______, _______, _______, _______, _______, KC_UP,   _______, _______, _______,  _______, _______, _______ ,\*/
             /*_______, _______, _______,  _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, \*/
             /*_______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, \*/
             /*_______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______\*/

            /*),*/
    
    /*[2] = LAYOUT(*/

    /*KC_GESC,          _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, \*/
             /*_______,  _______, _______ , _______, _______ ,  _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______ ,\*/
             /*_______, KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,    _______, _______, \*/
             /*_______,  _______, _______,  _______, _______, _______, KC_F12,   _______, _______, _______, _______, _______,  _______, _______, \*/
             /*_______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______\*/
            /*)*/
    /*[_FN3] = LAYOUT(*/

    /*KC_GESC,          _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, \*/
            /*_______,  _______, OUT_AUTO, OUT_USB, OUT_BT,  _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______ \*/
             /*_______, KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,    _______, _______, \*/
            /*_______,  _______, _______,  _______, _______, _______, KC_12,   _______, _______, _______, _______, _______,  _______, _______, \*/
             /*_______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______\*/
            /*)*/



};





/*
 *
 *
        LA1, LA2, LA3, LA4, LA5, LA6  LB1         RA1, RA2, RA3, RA4, RA5, RA6, RA7, RA8, \
             LB2, LB3, LB4, LB5, LB6, LC1         RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8, RC1 \
             LC2, LC3, LC4, LC5, LC6, LD1         RC2, RC3, RC4, RC5, RC6, RC7, RC8, RD1 \
             LD2, LD3, LD4, LD5, LD6, LE1         RD2, RD3, RD4, RD5, RD6, RD7, RD8, RE1 \
             LE2, LE3, LE4, LE5, LE6,             RE2, RE3, RE4, RE5, RE6, RE7, RE8, RF1 \

KC_MUTE
KC_VOLU
KC_VOLD
KC_MNXT
KC_MPRV
KC_MSTP
KC_MPLY





`RGB_TOG`          
`RGB_MODE_FORWARD` 
`RGB_MODE_REVERSE` 
`RGB_HUI`          
`RGB_HUD`          
`RGB_SAI`          
`RGB_SAD`          
`RGB_VAI`          
`RGB_VAD`          
`RGB_MODE_PLAIN`   
`RGB_MODE_BREATHE` 
`RGB_MODE_RAINBOW` 
`RGB_MODE_SWIRL`   
`RGB_MODE_SNAKE`   
`RGB_MODE_KNIGHT`  
`RGB_MODE_XMAS`    
`RGB_MODE_GRADIENT`
`RGB_MODE_RGBTEST` 



   KC_TILD , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    ,         KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC , KC_DEL  , \
             KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,         KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_LBRC , KC_RBRC , KC_8    , KC_1 \
             KC_CAPS , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,         KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT , KC_8    , KC_1 \
             KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,         KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT , KC_UP   , RE1 \
             KC_LCTL , KC_LALT , MO(_FN1), KC_LGUI , KC_BSPC ,                   KC_GESC , MO(_FN2), MO(_FN3), RE5     , RE6     , KC_LEFT , KC_DOWN , KC_RGHT \



    KC_GESC, KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   ,         KC_F7   , KC_F8   , KC_F9    , KC_F10  , KC_F11  , KC_F12  , KC_DEL  , KC_BSPC , \
             ------  , ----    , ----    , ----    , ----    , ----    ,         ----    , ----    , KC_UP    , ----    , ----    , ------- , ------- , ---     , ---- \
             ------- , ----    , ----    , ----    , ----    , ----    ,         ----    , KC_LEFT , KC_DOWN  , KC_RGHT , ------- , -------- , ---    , ---   \
             ------  , ----    , ----    , ----    , ----    , ----    ,         ----    , ----    , ----     , ----    , ----    , ----    , ----    , ----  \
             ------- , ------  , ------  , -----   , ----    ,                   -----   , -----   , -----    , ---     , ---     , -----   , -----   , ----- \



    KC_GESC, -----   , -----   , ----    , ----    , ----    , ----    ,         -----   , -----   , -----    , ------  , ------  , ------  , ------  , ------- , \
             ------  , ----    , OUT_AUTO, OUT_USB , OUT_BT  , ----    ,         ----    , ----    , -----    , ----    , ----    , ------- , ------- , ---     , ---- \
             ------- , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,         KC_F6   , KC_F7   , KC_F8    , KC_F9   , KC_F10   , KC_F11   , KC_12   , ---   \
             ------  , ----    , ----    , ----    , ----    , ----    ,         ----    , ----    , ----     , ----    , ----    , ----    , ----    , ----  \
             ------- , ------  , ----    , ----    , ----    ,                   -----   , -----   , -----    , ---     , ---     , -----   , -----   , ----- \










 *
 */

