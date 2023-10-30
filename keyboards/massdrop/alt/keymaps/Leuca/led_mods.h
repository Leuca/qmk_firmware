#pragma once

#define BLINK_MS 500
#include QMK_KEYBOARD_H

void led_blink(uint8_t led_num, bool *on, uint16_t *timer);
