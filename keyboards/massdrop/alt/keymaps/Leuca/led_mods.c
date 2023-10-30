#include "led_mods.h"

void led_blink(uint8_t led_num, bool *on, uint16_t *timer){
    // start timer if not initialised
    if(*timer == 0)
        *timer = timer_read();

    if(timer_elapsed(*timer) > BLINK_MS){
        // after BLINK_MS milliseconds change state and reset timer
        *on = ! *on;
        *timer = timer_read(); 
    }
    else{
        if(! *on){
            rgb_matrix_set_color(led_num, 0, 0, 0);
        }
    }
}