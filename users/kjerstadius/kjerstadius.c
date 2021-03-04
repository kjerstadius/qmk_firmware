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

#include "kjerstadius.h"


/*
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
*/


__attribute__((weak)) layer_state_t layer_state_set_keymap(layer_state_t state)
{
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state)
{
    if (!is_keyboard_master()) { return state; }

    return update_tri_layer_state(state, _RAISE, _LOWER, _ADJUST);
}
