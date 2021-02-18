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

#include QMK_KEYBOARD_H

enum unicode_names {
    ADIARESIS_LC,
    ADIARESIS_UC,
    ARING_LC,
    ARING_UC,
    ODIARESIS_LC,
    ODIARESIS_UC
};

const uint32_t PROGMEM unicode_map[] = {
    [ADIARESIS_LC] = 0xe4, // ä
    [ADIARESIS_UC] = 0xc4, // Ä
    [ARING_LC]     = 0xe5, // å
    [ARING_UC]     = 0xc5, // Å
    [ODIARESIS_LC] = 0xf6, // ö
    [ODIARESIS_UC] = 0xd6, // Ö
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_tsangan(
        KC_ESC,          KC_1,            KC_2,            KC_3,   KC_4,            KC_5,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,          KC_Q,            KC_W,            KC_E,   KC_R,            KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        LCTL_T(KC_SCLN), KC_A,            KC_S,            KC_D,   KC_F,            KC_G,            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSPO,         KC_Z,            KC_X,            KC_C,   KC_V,            KC_B,            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC, MO(1),
        KC_NO,           LALT_T(KC_LBRC), LGUI_T(KC_LCBR), KC_SPC, RGUI_T(KC_RCBR), RALT_T(KC_RBRC), KC_NO),

	[1] = LAYOUT_tsangan(
        RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_NO,  KC_NUBS,
        KC_CAPS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_UP,   KC_NO,  KC_DEL,
        KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, KC_MPRV, KC_MNXT, RGB_VAD, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_NO,
        KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, KC_END,  KC_PGDN, KC_DOWN, KC_TRNS,   KC_NO,
        KC_NO,   KC_TRNS, KC_TRNS, KC_NO,   KC_TRNS, KC_TRNS, KC_NO),

	[2] = LAYOUT_tsangan(
        KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,    KC_5,    KC_6,  KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS,                        KC_EQL,                 KC_BSLS, KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,    KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,    XP(ADIARESIS_LC, ADIARESIS_UC), KC_SCLN,                KC_BSPC,
        LCTL_T(KC_SCLN),  KC_A,    KC_S,    KC_D,   KC_F,    KC_G,  KC_H,  KC_J,    KC_K,   KC_L,    XP(ODIARESIS_LC, ODIARESIS_UC), XP(ARING_LC, ARING_UC), KC_ENT,
        KC_LSPO, KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,    KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, TO(0),
        KC_NO,   KC_LALT, KC_LGUI, KC_SPC, KC_RGUI, KC_RALT, KC_NO),

	[3] = LAYOUT_tsangan(
        KC_GESC,         KC_1,            KC_2,            KC_3,                    KC_4,            KC_5,   KC_6,   KC_7,   KC_8,    KC_9,   KC_0,                   KC_MINS,                KC_EQL,                         KC_BSLS, KC_GRV,
        KC_TAB,          KC_Q,            KC_W,            KC_F,                    KC_P,            KC_G,   KC_J,   KC_L,   KC_U,    KC_Y,   XP(ARING_LC, ARING_UC), XP(ARING_LC, ARING_UC), XP(ODIARESIS_LC, ODIARESIS_UC), KC_BSPC,
        LCTL_T(KC_SCLN), KC_A,            KC_R,            KC_S,                    KC_T,            KC_D,   KC_H,   KC_N,   KC_E,    KC_I,   KC_O,                   KC_QUOT,                KC_ENT,
        KC_LSPO,         KC_Z,            KC_X,            KC_C,                    KC_V,            KC_B,   KC_K,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSPC,       MO(1),
        KC_NO,           LALT_T(KC_LBRC), LGUI_T(KC_LCBR), KC_SPC, RGUI_T(KC_RCBR), RALT_T(KC_RBRC), KC_NO)
};
