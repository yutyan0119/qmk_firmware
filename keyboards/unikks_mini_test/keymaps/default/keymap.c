// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// #include "keymap_japanese.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* layer 0
    * ┌───┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬──────┬──────┬──────┐
    * │Esc│ F1 │ F2 │ F3 │ F4 │ F5 │ F6 │ F7 │ F8 │ F9 │F10 │F11 │F12 │PrtSc │ScrLk │Pause │
    * ├───┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴──────┴──────┴──────┘
    * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐┌──────┬──────┬──────┐
    * │`~ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp││Insert│ Home │ PgUp │
    * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤├──────┼──────┼──────┤
    * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  ││ Del  │ End  │PgDn  │
    * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤└──────┴──────┴──────┘
    * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ Enter  │
    * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐
    * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift    │     │ ↑ │
    * ├────┬───┴┬──┴─┬─┴───┼───┴───┴───┴┬──┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐
    * │Ctrl│GUI │Alt │MO(1)│            │M0(1)│Alt │Win │Menu│Ctrl│ │ ← │ ↓ │ → │
    * └────┴────┴────┴─────┴────────────┴─────┴────┴────┴────┴────┘ └───┴───┴───┘
    */

    /* layer 1
    * ┌───┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬──────┬──────┬──────┐
    * │Esc│ F1 │ F2 │ F3 │ F4 │ F5 │ F6 │ F7 │ F8 │ F9 │F10 │F11 │F12 │PrtSc │ScrLk │Pause │
    * ├───┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴──────┴──────┴──────┘
    * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐┌──────┬──────┬──────┐
    * │半全│F1 │F2 │F3 │F4 │F  │F6 │F7 │F8 │F9 │F10│F11│F12│ Del   ││Insert│ Home │ PgUp │
    * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤├──────┼──────┼──────┤
    * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  ││ Del  │ End  │PgDn  │
    * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤└──────┴──────┴──────┘
    * │無変換 │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ Enter  │
    * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐
    * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift    │     │vlu│
    * ├────┬───┴┬──┴─┬─┴───┼───┴───┴───┴┬──┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐
    * │Ctrl│GUI │Alt │MO(1)│            │M0(1)│Alt │Win │Menu│Ctrl│ │ ← │vld│ → │
    * └────┴────┴────┴─────┴────────────┴─────┴────┴────┴────┴────┘ └───┴───┴───┘
    */

    [0] = LAYOUT(
        KC_ESC,          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SCRL, KC_PAUS,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,KC_QUOT,          KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                  KC_RSFT,          KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT, MO(1),            KC_SPC,           MO(1),   KC_RALT, KC_RGUI,           KC_APP,         KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SCRL,           KC_PAUS,
        KC_LNG5, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_INS,  KC_HOME,            KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,            KC_PGDN,
        KC_INT5, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT,          KC_KB_VOLUME_UP,
        KC_LCTL, KC_LGUI, KC_LALT, MO(1),            KC_SPC,           MO(1),   KC_RALT, KC_RGUI,          KC_APP,           KC_RCTL, KC_LEFT, KC_KB_VOLUME_DOWN, KC_RGHT
    )
};
