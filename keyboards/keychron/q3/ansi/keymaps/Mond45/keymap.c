/* Copyright 2022 @ Keychron (https://www.keychron.com)
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

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_tkl_ansi(
        KC_ESC,                   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,       KC_F12,   KC_PSCR,  KC_NO,    KC_MPLY,
        KC_GRV,         KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,       KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,         KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,      KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        LT(2, KC_ESC),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                KC_ENT,
        KC_LSFT,                  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,                KC_RSFT,            KC_UP,
        KC_LCTL,        KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  MO(1),        KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),


    [1] = LAYOUT_tkl_ansi(
        KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_MPRV,  KC_TRNS,  KC_MNXT,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,              KC_TRNS,
        KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,              KC_TRNS,            KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

    [2] = LAYOUT_tkl_ansi(
        C(KC_ESC),                C(KC_F1),    C(KC_F2),    C(KC_F3),    C(KC_F4),    C(KC_F5),    C(KC_F6),    C(KC_F7),        C(KC_F8),    C(KC_F9),    C(KC_F10),   C(KC_F11),     C(KC_F12),   C(KC_PSCR),  KC_NO,       KC_NO,
        C(KC_GRV),   C(KC_1),     C(KC_2),     C(KC_3),     C(KC_4),     C(KC_5),     C(KC_6),     C(KC_7),     C(KC_8),         C(KC_9),     C(KC_0),     C(KC_MINS),  C(KC_EQL),     C(KC_BSPC),  C(KC_INS),   C(KC_HOME),  C(KC_PGUP),
        C(KC_TAB),   C(KC_Q),     C(KC_W),     C(KC_E),     C(KC_R),     C(KC_T),     C(KC_Y),     C(KC_U),     C(KC_I),         C(KC_O),     KC_UP,       C(KC_LBRC),  C(KC_RBRC),    C(KC_BSLS),  C(KC_DEL),   C(KC_END),   C(KC_PGDN),
        KC_NO,       C(KC_A),     C(KC_S),     C(KC_D),     C(KC_F),     C(KC_G),     KC_LEFT,     KC_DOWN,     KC_UP,           KC_RIGHT,    C(KC_SCLN),  C(KC_QUOT),                 C(KC_ENT),
        C(KC_LSFT),               C(KC_Z),     C(KC_X),     C(KC_C),     C(KC_V),     C(KC_B),     KC_DOWN,     C(KC_M),         C(KC_COMM),  C(KC_DOT),   C(KC_SLSH),                 C(KC_RSFT),               C(KC_UP),
        KC_LCTL,     C(KC_LWIN),  C(KC_LALT),                                         C(KC_SPC),                                              C(KC_RALT),  C(KC_RWIN),  KC_NO,         C(KC_RCTL),  C(KC_LEFT),  C(KC_DOWN),  C(KC_RGHT)),
};
// clang-format on
