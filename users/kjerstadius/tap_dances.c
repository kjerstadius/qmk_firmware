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

#include "tap_dances.h"
#include "keys.h"
#include "layers.h"

#include QMK_KEYBOARD_H

static uint8_t space_tap_action = 0;


uint8_t get_dance_action(qk_tap_dance_state_t* state)
{
    uint8_t is_held = 1;
    if (state->interrupted || !state->pressed) {
        is_held = 0;
    }

    return (state->count - 1) * 2 + is_held;
}

void td_space_finished(qk_tap_dance_state_t* state, void* user_data)
{
    space_tap_action = get_dance_action(state);
    switch (space_tap_action) {
        case SINGLE_TAP:
            register_code(KC_SPC);
            break;
        case SINGLE_HOLD:
            layer_on(_NUMSYM);
            break;
        case DOUBLE_TAP:
            register_code(KC_ENT);
            break;
        default:
            break;
    }
}

void td_space_reset(qk_tap_dance_state_t* state, void* user_data)
{
    switch (space_tap_action) {
        case SINGLE_TAP:
            unregister_code(KC_SPC);
            break;
        case SINGLE_HOLD:
            layer_off(_NUMSYM);
            break;
        case DOUBLE_TAP:
            unregister_code(KC_ENT);
            break;
        default:
            break;
    }

    space_tap_action = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [_TD_SPACE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_space_finished, td_space_reset)
};
