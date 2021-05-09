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

#include "kjerstadius.h"


#define LAYOUT_prophet_hhkb( \
        K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
        K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, \
        K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
        K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A \
    ) LAYOUT_all( \
        KC_ESC, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, KC_MINS, KC_EQL, KC_BSLS, KC_DEL, \
        KC_TBLW, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, KC_BSPC, \
        KC_DCTL, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, KC_ENT, \
        KC_LSPO, KC_NO, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, KC_RSPC, MO(_RAISE), \
        KC_NO, KC_LGUI, KC_LALT, TD_SPACE, KC_RALT, KC_RGUI, KC_NO \
    )

#define LAYOUT_prophet_hhkb_wrapper(...) LAYOUT_prophet_hhkb(__VA_ARGS__)
#define LAYOUT_prophet_all_wrapper(...) LAYOUT_all(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_prophet_hhkb_wrapper(
      LAYER_NUM_ROW,
      LAYER_QWERTY1,
      LAYER_QWERTY2,
      LAYER_QWERTY3),

  [_NUMSYM] = LAYOUT_prophet_hhkb_wrapper(
      LAYER_NUM_ROW,
      LAYER_NUMSYM1,
      LAYER_NUMSYM2,
      LAYER_NUMSYM3),

  [_RAISE] = LAYOUT_prophet_hhkb_wrapper(
      LAYER_NUM_ROW,
      LAYER_RAISE1,
      LAYER_RAISE2,
      LAYER_RAISE3),

  [_LOWER] = LAYOUT_prophet_hhkb_wrapper(
      LAYER_NUM_ROW,
      LAYER_LOWER1,
      LAYER_LOWER2,
      LAYER_LOWER3),

  [_ADJUST] = LAYOUT_prophet_hhkb_wrapper(
      LAYER_NUM_ROW,
      LAYER_ADJUST1,
      LAYER_ADJUST2,
      LAYER_ADJUST3),

  [_SWERTY] = LAYOUT_prophet_hhkb_wrapper(
      LAYER_NUM_ROW,
      LAYER_SWERTY1,
      LAYER_SWERTY2,
      LAYER_SWERTY3),

  [_COLEMAK] = LAYOUT_prophet_hhkb_wrapper(
      LAYER_NUM_ROW,
      LAYER_COLEMAK1,
      LAYER_COLEMAK2,
      LAYER_COLEMAK3),

  [_HDALT] = LAYOUT_prophet_hhkb_wrapper(
      LAYER_NUM_ROW,
      LAYER_HDALT1,
      LAYER_HDALT2,
      LAYER_HDALT3),

  [_ISRT] = LAYOUT_prophet_hhkb_wrapper(
      LAYER_NUM_ROW,
      LAYER_ISRT1,
      LAYER_ISRT2,
      LAYER_ISRT3),

  [_GAMING] = LAYOUT_prophet_all_wrapper(
      KC_ESC, LAYER_NUM_ROW, KC_MINS, KC_EQL, KC_BSLS, KC_DEL,
      KC_TBLW, LAYER_GAMING1, KC_BSPC,
      KC_RCTL, LAYER_GAMING2, KC_ENT,
      KC_LSFT, KC_NO, LAYER_GAMING3, KC_RSFT, MO(_RAISE),
      KC_NO, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, KC_NO)
};

const uint16_t PROGMEM ae_combo[] = {RGUI_T(KC_A), RSFT_T(KC_E), COMBO_END};
const uint16_t PROGMEM ao_combo[] = {RGUI_T(KC_A), LALT_T(KC_O), COMBO_END};
const uint16_t PROGMEM cd_combo[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM cl_combo[] = {KC_C, KC_L, COMBO_END};
const uint16_t PROGMEM cx_combo[] = {KC_C, KC_X, COMBO_END};
const uint16_t PROGMEM dl_combo[] = {KC_D, KC_L, COMBO_END};
const uint16_t PROGMEM mw_combo[] = {KC_M, KC_W, COMBO_END};
const uint16_t PROGMEM oe_combo[] = {RSFT_T(KC_E), LALT_T(KC_O), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [COPY] = COMBO(cl_combo, RCTL(KC_C)),
    [CUT] = COMBO(cd_combo, RCTL(KC_X)),
    [ESC] = COMBO(mw_combo, KC_ESC),
    [PASTE] = COMBO(dl_combo, RCTL(KC_V)),
    [SWE_AE] = COMBO(ae_combo, RALT(KC_A)),
    [SWE_AA] = COMBO(ao_combo, RALT(KC_W)),
    [SWE_OE] = COMBO(oe_combo, RALT(KC_O)),
    [UNDO] = COMBO(cx_combo, RCTL(KC_Z))
};
