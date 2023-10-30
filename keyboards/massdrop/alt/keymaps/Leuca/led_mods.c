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


// constructor that sets a series of leds based on an rgb array of values
void led_slider_line_composer(uint16_t first_led, uint16_t last_led, uint16_t count, RGB led_buffer[count]){
    for(uint8_t i = first_led; i <= last_led && last_led - first_led <= count; i++){
        rgb_matrix_set_color(i, led_buffer[-(last_led - first_led - i)].r, led_buffer[-(last_led - first_led - i)].g, led_buffer[-(last_led - first_led - i)].b);
    }
}
