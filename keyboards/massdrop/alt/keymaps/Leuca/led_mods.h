#pragma once

#define BLINK_MS 500
#include QMK_KEYBOARD_H

static const uint8_t key_leds_map[MATRIX_ROWS][MATRIX_COLS] = {
    {   0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14 },
    {  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29 },
    {  30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41, NO_LED,  42,  43 },
    {  44, NO_LED,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57 },
    {  58,  59,  60, NO_LED, NO_LED, NO_LED,  61, NO_LED, NO_LED, NO_LED,  62,  63,  64,  65,  66 }
};

void turn_off_empty_keys(const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS]);
void led_blink(uint8_t led_num, bool *on, uint16_t *timer);