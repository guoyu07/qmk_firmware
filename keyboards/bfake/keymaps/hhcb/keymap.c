/*
Copyright 2017 Chris Lee <clee@mg8.org>

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

#include "bfake.h"

#define ESCTRL CTL_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* ┌─────────────────────────────────────────────────────────────────────────┐
 * │ `  | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | -  | =  | Bspc   │
 * │ Tab  | q  | w  | e  | r  | t  | y  | u  | i  | o  | p  | [  | ]  | \    │
 * │ Ctrl  | a  | s  | d  | f  | g  | h  | j  | k  | l  | ;  | '  |    Enter │
 * │ Shift   | z  | x  | c  | v  | b  | n  | m  | ,  | .  | /  |       Shift │
 * └──────┐ Alt| GUI  |                             | GUI  | Fn ┌────────────┘
 *        └─────────────────────────────────────────────────────┘
 */
  [0] = KEYMAP(
      KC_GRV,  KC_1,  KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
      KC_TAB,  KC_Q,  KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
      ESCTRL,  KC_A,  KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO,
      KC_NO, KC_LALT, KC_LGUI, KC_SPACE, KC_RGUI, MO(1), KC_NO, KC_NO
      ),
/* ┌─────────────────────────────────────────────────────────────────────────┐
 * │    |    |    |    |    |    |    |    |    |    |    |    |    |        │
 * │      |    |    |    |    |    |    |    |    |    |    |    |    |      │
 * │       |    |    |    |    |    |    |    |    |    |    |    |          │
 * │         |    |    |    |    |    |    |    |    |    |    |             │
 * └──────┐    |      |                             |      |    ┌────────────┘
 *        └─────────────────────────────────────────────────────┘
 */
  [1] = KEYMAP(
      KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_DEL,
      KC_CAPS, RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_EJCT, KC_TRNS, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RIGHT, KC_PENT,
      KC_TRNS, KC_TRNS, BL_DEC,  BL_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_PPLS, KC_PMNS, KC_END, KC_PGDN, KC_DOWN, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
      ),
};

