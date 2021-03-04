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

// Alpha layers
#define LAYER_COLEMAK1 KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_LBRC, KC_RBRC
#define LAYER_COLEMAK2 KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT
#define LAYER_COLEMAK3 KC_X, KC_C, KC_D, KC_V, KC_Z, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH

#define LAYER_GAMING1 KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC
#define LAYER_GAMING2 KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT
#define LAYER_GAMING3 KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH

#define LAYER_QWERTY1 KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC
#define LAYER_QWERTY2 HOME_A, HOME_S, HOME_D, HOME_F, HOME_G, HOME_H, HOME_J, HOME_K, HOME_L, HOME_SCLN, KC_QUOT
#define LAYER_QWERTY3 KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH

#define LAYER_SWERTY1 KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_ARING, KC_RBRC
#define LAYER_SWERTY2 KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ADIA, KC_ODIA
#define LAYER_SWERTY3 KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH

#define LAYER_NUM_ROW KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0

// Mod layers
#define LAYER_RAISE1 KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_GRV
#define LAYER_RAISE2 KC_TAB, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_RIGHT
#define LAYER_RAISE3 KC_CAPS, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_DOWN

#define LAYER_LOWER1 KC_NO, KC_POE_HO, KC_NO, KC_POE_RST_XP, KC_NO, KC_HOME, KC_END, KC_UP, KC_7, KC_8, KC_9, KC_0
#define LAYER_LOWER2 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_LEFT, KC_RIGHT, KC_4, KC_5, KC_6
#define LAYER_LOWER3 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_DOWN, KC_1, KC_2, KC_3

#define LAYER_ADJUST1 KC_ASRP, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QWERTY, SWERTY, GAMING
#define LAYER_ADJUST2 KC_ASON, KC_ASOFF, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, COLEMAK, KC_NO
#define LAYER_ADJUST3 KC_ASDN, KC_ASUP, KC_NO, VRSN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO

/*
 *  1 2 3 4 5 6 7 8 9 0
 *  ( ) ~ - = * _ $ | \ +
 *   ! # { } & ^ [ ] % @
 */
#define LAYER_NUMSYM1 KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO
#define LAYER_NUMSYM2 KC_LPRN, KC_RPRN, KC_TILDE, KC_MINS, KC_EQL, KC_ASTR, KC_UNDS, KC_DLR, KC_PIPE, KC_BSLS, KC_PLUS
#define LAYER_NUMSYM3 KC_EXLM, KC_HASH, KC_LCBR, KC_RCBR, KC_AMPR, KC_CIRC, KC_LBRC, KC_RBRC, KC_PERC, KC_AT


enum kjerstadius_layers {
    _QWERTY = 0,
    _SWERTY,
    _COLEMAK,
    _GAMING,

    _NUMSYM,
    _RAISE,
    _LOWER,
    _ADJUST
};
