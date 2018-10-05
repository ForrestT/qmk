/* Copyright 2017 Benjamin Kesselring
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "xd75.h"

// Fillers to make layering more clear
#define _______ KC_TRNS
#define ___T___ KC_TRNS
#define XXXXXXX KC_NO

// Layer shorthand
#define _QW 0
#define _LW 1
#define _RS 2
#define _FN 3

// My Custom definitions
#define FN_ESC LT(_FN, KC_ESC)
#define RS_SPC LT(_RS, KC_SPC)
#define LW_SPC LT(_LW, KC_SPC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY - MIT ENHANCED / GRID COMPATIBLE
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | `/~    | -/_    | +/=    | 6      | 7      | 8      | 9      | 0      | BSPC   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | {[     | \|     | ]}     | Y      | U      | I      | O      | P      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | FN     | A      | S      | D      | F      | G      | HOME   | INS    | PG UP  | H      | J      | K      | L      | ;      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | END    | UP     | Pg DN  | N      | M      | ,      | .      | /      | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | BRITE  | LCTRL  | LGUI   | LALT   | RAISE  | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | LOWER  | RALT   | RGUI   | RCTRL  |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
	
 [_QW] = { /* QWERTY */
  { KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_GRV,  KC_MINS, KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC  },
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, KC_BSLS, KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT   },
  { FN_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_HOME, KC_INS,  KC_PGUP, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT  },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_END,  KC_UP,   KC_PGDN, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT  },
  { M(0),    KC_LCTL, KC_LGUI, KC_LALT, RS_SPC,  KC_SPC,  KC_LEFT, KC_DOWN, KC_RGHT, KC_RALT, LW_SPC,  MO(_FN), KC_RGUI, KC_RCTL, KC_RGHT  },
 },

/* LOWERED
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F11    | F1     | F2     | F3     | F4     | F5     | =      | /      | *      | F6     | F7     | F8     | F9     | F10    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    |        |        |        |        |        | P7     | P8     | P9     | -      | HOME   | UP     | END    | PG UP  |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | FN     |        |        |        |        |        | P4     | P5     | P6     | +      | LEFT   | DOWN   | RIGHT  | PG DN  |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT |        |        |        |        |        | P1     | P2     | P3     | ENT    |        |        |        |        | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | BRITE  | LCTRL  | LGUI   | LALT   | RAISE  | SPACE  | P0     | P0     | PDOT   | SPACE  | LOWER  | RALT   | RGUI   | RCTRL  |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 
 [_LW] = { /* LOWERED */
  { KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_PEQL, KC_PSLS, KC_PAST, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12   },
  { _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______  },
  { _______, _______, _______, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______  },
  { _______, _______, _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______, _______, _______, _______, _______  },
  { _______, _______, _______, _______, _______, _______, KC_P0,   KC_P0,   KC_PDOT, _______, _______, _______, _______, _______, _______  },
 },

/* RAISED
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F11    | F1     | F2     | F3     | F4     | F5     | =      | /      | *      | F6     | F7     | F8     | F9     | F10    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    |        |        |        |        |        | P7     | P8     | P9     | -      | HOME   | UP     | END    | PG UP  |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | FN     |        |        |        |        |        | P4     | P5     | P6     | +      | LEFT   | DOWN   | RIGHT  | PG DN  |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT |        |        |        |        |        | P1     | P2     | P3     | ENT    |        |        |        |        | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | BRITE  | LCTRL  | LGUI   | LALT   | RAISE  | SPACE  | P0     | P0     | PDOT   | SPACE  | LOWER  | RALT   | RGUI   | RCTRL  |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 
 [_RS] = { /* RAISED */
  { KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_PEQL, KC_PSLS, KC_PAST, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12   },
  { _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______  },
  { _______, _______, _______, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______  },
  { _______, _______, _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______, _______, _______, _______, _______  },
  { _______, _______, _______, _______, _______, _______, KC_P0,   KC_P0,   KC_PDOT, _______, _______, _______, _______, _______, _______  },
 },
 
/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F11    | F1     | F2     | F3     | F4     | F5     | =      | /      | *      | F6     | F7     | F8     | F9     | F10    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    |        |        |        |        |        | P7     | P8     | P9     | -      | HOME   | UP     | END    | PG UP  |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | FN     |        |        |        |        |        | P4     | P5     | P6     | +      | LEFT   | DOWN   | RIGHT  | PG DN  |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT |        |        |        |        |        | P1     | P2     | P3     | ENT    |        |        |        |        | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | BRITE  | LCTRL  | LGUI   | LALT   | RAISE  | SPACE  | P0     | P0     | PDOT   | SPACE  | LOWER  | RALT   | RGUI   | RCTRL  |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 
 [_FN] = { /* FUNCTION */
  { KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_PEQL, KC_PSLS, KC_PAST, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12   },
  { _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______  },
  { _______, _______, _______, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______  },
  { _______, _______, _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______, _______, _______, _______, _______  },
  { _______, _______, _______, _______, _______, _______, KC_P0,   KC_P0,   KC_PDOT, _______, _______, _______, _______, _______, _______  },
 },
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
