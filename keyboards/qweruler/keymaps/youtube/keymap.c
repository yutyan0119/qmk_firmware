// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ A │ C │
     * ├───┼───┤
     * │ D │ F │
     * └───┴───┘
     */
    [0] = LAYOUT_ortho_2x2(
        KC_L,    KC_RGHT,
        KC_LEFT,    KC_J
    )
};
