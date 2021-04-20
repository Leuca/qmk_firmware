RGB_MATRIX_EFFECT(custom_indicators)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS


static bool custom_indicators(effect_params_t* params){
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  uint8_t layer;
  layer = 0;

  while (IS_LAYER_OFF(layer) && layer<15) {
    layer++;
  }

#include "ledmap.h"

#ifdef F_SIDEGLOW // repeat led pattern to match the sideglow with keycap leds

const uint8_t last_key = 66;
uint8_t i;
const uint8_t skip = 13;
uint8_t k = 0;

// TODO

#endif // F_SIDEGLOW

  if (layer < max_ledmap_layer){
    for (uint8_t i = led_min; i < led_max; i++) {
      RGB_MATRIX_TEST_LED_FLAGS();

      HSV hsv,hsv_s;
      hsv_s = rgb_matrix_config.hsv;

      hsv.h = (uint8_t)((float)ledmap[layer][i][0] * (float)((255.0 - (float)hsv_s.h)/255.0));
      hsv.s = (uint8_t)((float)ledmap[layer][i][1] * (float)((float)hsv_s.s/255.0));
      hsv.v = (uint8_t)((float)ledmap[layer][i][2] * (float)((float)hsv_s.v/255.0));
      RGB rgb = rgb_matrix_hsv_to_rgb(hsv);
      rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }

  return led_max < DRIVER_LED_TOTAL;
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
