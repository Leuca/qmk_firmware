#include "led_mods.h"

void turn_off_empty_keys(const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS]){
    uint8_t layer = 0;

    while (IS_LAYER_OFF(layer) && layer<15) {
        layer++;
    }
    for(uint8_t j = 0; j < MATRIX_ROWS; j++){
        for(uint8_t k = 0; k < MATRIX_COLS; k++){
            if(key_leds_map[j][k] != NO_LED && keymaps[layer][j][k] == _______ ){
                rgb_matrix_set_color(key_leds_map[j][k], 0, 0, 0);
            }
        }
    }
}