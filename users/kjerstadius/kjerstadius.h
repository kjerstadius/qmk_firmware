/*
Copyright 2020 Richard Kjerstadius

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

#include "process_records.h"
#include QMK_KEYBOARD_H


#define _____ KC_TRNS
#define KC_TBLW LT(MO(_LOWER), KC_TAB)
#define KC_DCTL MT(MOD_LCTL, KC_DEL)
#define KC_ADIA RALT(KC_W)
#define KC_ARING RALT(KC_A)
#define KC_ODIA RALT(KC_O)

#define QWERTY DF(_QWERTY)
#define SWERTY DF(_SWERTY)
#define COLEMAK DF(_COLEMAK)


#define LAYER_QWERTY1 KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC
#define LAYER_QWERTY2 KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT
#define LAYER_QWERTY3 KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH

#define LAYER_SWERTY1 KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_ARING, KC_RBRC
#define LAYER_SWERTY2 KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ADIA, KC_ODIA
#define LAYER_SWERTY3 KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH

#define LAYER_COLEMAK1 KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_LBRC, KC_RBRC
#define LAYER_COLEMAK2 KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT
#define LAYER_COLEMAK3 KC_X, KC_C, KC_D, KC_V, KC_Z, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH


#define LAYER_RAISE1 KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_GRV
#define LAYER_RAISE2 KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_RIGHT
#define LAYER_RAISE3 KC_NUBS, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_DOWN

#define LAYER_LOWER1 KC_NO, KC_POE_HO, KC_NO, KC_POE_RST_XP, KC_NO, KC_HOME, KC_END, KC_UP, KC_7, KC_8, KC_9, KC_0
#define LAYER_LOWER2 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_LEFT, KC_RIGHT, KC_4, KC_5, KC_6
#define LAYER_LOWER3 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_DOWN, KC_1, KC_2, KC_3

#define LAYER_ADJUST1 KC_ASRP, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QWERTY, SWERTY, KC_NO
#define LAYER_ADJUST2 KC_ASON, KC_ASOFF, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, COLEMAK, KC_NO
#define LAYER_ADJUST3 KC_ASDN, KC_ASUP, KC_NO, VRSN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO

#define LAYER_NUM_ROW KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0


/*
#define RK_HHKB_QWERTY_ROW1 KC_TBLW, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC
#define RK_HHKB_QWERTY_ROW2 LCTL_T(KC_SCLN), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT
#define RK_HHKB_QWERTY_ROW3 KC_LSPO, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, MO(_RAISE)

#define RK_HHKB_NUM_ROW KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV
#define RK_HHKB_BOTTOM  KC_NO, LGUI_T(KC_LCBR), LALT_T(KC_LBRC), KC_SPC, RALT_T(KC_RBRC), RGUI_T(KC_RCBR), KC_NO

#define RK_HHKB_RAISE_NUM_ROW RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NUBS
#define RK_HHKB_RAISE1 KC_CAPS, KC_NO, KC_POE_HO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_DEL
#define RK_HHKB_RAISE2 KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, KC_MPRV, KC_MNXT, RGB_VAD, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_NO
#define RK_HHKB_RAISE3 KC_TRNS, KC_NO, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, KC_END, KC_PGDN, KC_DOWN, KC_TRNS, KC_NO
#define RK_HHKB_RAISE_BOTTOM KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO
*/


enum kjerstadius_layers {
    _QWERTY = 0,
    _SWERTY,
    _COLEMAK,

    _RAISE,
    _LOWER,
    _ADJUST
};
