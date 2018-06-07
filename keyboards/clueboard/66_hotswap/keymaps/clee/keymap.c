#include "66_hotswap.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
#define _BL 0
#define _FL 1
#define _CL 2

#define kNO KC_NO

#define CLEEOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k50, k51, k52, k53, k54, k55, k56, k57, \
    k10, k11, k12, k13, k14, k15, k16, k17, k60, k61, k62, k63, k64, k65,      k67, \
    k20, k21, k22, k23, k24, k25, k26, k27, k70, k71, k72, k73,      k75, \
    k30,      k32, k33, k34, k35, k36, k37, k80, k81, k82, k83,      k85, k86, \
    k40,      k42, k43,      k45, k46,      k90,      k92,      k94, k95, k96, k97 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27 }, \
    { k30, kNO, k32, k33, k34, k35, k36, k37 }, \
    { k40, kNO, k42, k43, kNO, k45, k46, kNO }, \
    { k50, k51, k52, k53, k54, k55, k56, k57 }, \
    { k60, k61, k62, k63, k64, k65, kNO, k67 }, \
    { k70, k71, k72, k73, kNO, k75, kNO, kNO }, \
    { k80, k81, k82, k83, kNO, k85, k86, kNO }, \
    { k90, kNO, k92, kNO, k94, k95, k96, k97 }  \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: Base Layer (Default Layer)
   */
[_BL] = CLEEOUT(
  KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL,KC_LCBR,KC_RCBR,         KC_PGUP, \
  KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,                KC_PGDN, \
  KC_ESC, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,      KC_ENT,                            \
  KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,      KC_RSFT,                 KC_UP,            \
  KC_LCTL,        KC_LALT,KC_LGUI,       KC_BSPC,KC_SPC,                         KC_RGUI,KC_RALT,       MO(_FL),KC_LEFT,KC_DOWN,KC_RGHT),

  /* Keymap _FL: Function Layer
   */
[_FL] = CLEEOUT(
  KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,_______,_______,         KC_VOLU, \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_MUTE,                KC_VOLD, \
  _______,_______,MO(_CL),_______,_______,_______,_______,_______,_______,_______,_______,_______,    _______,                             \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        _______,                KC_PGUP,         \
  _______,        _______,_______,        KC_DEL, _______,                        _______,_______,        _______,KC_HOME,KC_PGDN,KC_END),

  /* Keymap _CL: Control layer
   */
[_CL] = CLEEOUT(
  BL_STEP,RGB_M_P,RGB_M_B,RGB_M_R,RGB_M_SW,RGB_M_SN,RGB_M_K,RGB_M_X,RGB_M_G,_______,_______,_______,_______,_______,RGB_TOG,      RGB_VAI, \
  _______,_______,_______,_______,RESET,  _______,_______,_______,_______,_______,_______,_______,_______,_______,                RGB_VAD, \
  _______,_______,MO(_CL),_______,_______,_______,_______,_______,_______,_______,_______,_______,    _______,                             \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        _______,                RGB_SAI,         \
  _______,        _______,_______,        RGB_MOD,RGB_MOD,                        _______,_______,        _______,RGB_HUD,RGB_SAD,RGB_HUI),
};
