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

#include "process_records.h"
//#include "sendstring_swedish.h"
#include "version.h"


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case VRSN:
        if (record->event.pressed) {
            SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION ", Built on: " QMK_BUILDDATE);
        }
        break;
    case KC_POE_HO:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ENT)"/hideout"SS_TAP(X_ENT));
        }
        break;
    case KC_POE_RST_XP:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_ENT)"/reset_xp"SS_TAP(X_ENT));
        }
        break;
    }
    return true;
}
