/*
Copyright 2021 Richard Kjerstadius

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

#define _____ KC_TRNS
#define KC_TBLW LT(MO(_LOWER), KC_TAB)
#define KC_DCTL MT(MOD_LCTL, KC_DEL)
#define KC_ADIA RALT(KC_W)
#define KC_ARING RALT(KC_A)
#define KC_ODIA RALT(KC_O)
#define LT_SPC LT(_NUMSYM, KC_SPC)

// Home row mods
#define HOME_A LALT_T(KC_A)
#define HOME_S LGUI_T(KC_S)
#define HOME_D LSFT_T(KC_D)
#define HOME_F LCTL_T(KC_F)
#define HOME_J RCTL_T(KC_J)
#define HOME_K RSFT_T(KC_K)
#define HOME_L LGUI_T(KC_L)
#define HOME_SCLN LALT_T(KC_SCLN)
#define HOME_QUOT RALT_T(KC_QUOT)

// Home row layers
#define HOME_G LT(_LOWER, KC_G)
#define HOME_H LT(_RAISE, KC_H)

// Layer "keycodes"
#define COLEMAK DF(_COLEMAK)
#define ISRT    DF(_ISRT)
#define GAMING  DF(_GAMING)
#define QWERTY  DF(_QWERTY)
#define SWERTY  DF(_SWERTY)

// Tap dances
#define TD_SPACE TD(_TD_SPACE)

enum tap_dance_keys {
     _TD_SPACE
};
