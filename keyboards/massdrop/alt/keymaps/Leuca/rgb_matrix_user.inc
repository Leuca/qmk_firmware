RGB_MATRIX_EFFECT(custom_indicators)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

//static uint8_t some_global_state;
static void custom_indicators_init(effect_params_t* params){
  //some_global_state = 1;
}

static bool custom_indicators_run(effect_params_t* params){
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
      RGB rgb;
      rgb.r = ledmap[layer][i][0];
      rgb.g = ledmap[layer][i][1];
      rgb.b = ledmap[layer][i][2];

      rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
      //rgb_matrix_set_color(i, 0xff, some_global_state++, 0xff);
    }
  }

  return led_max < DRIVER_LED_TOTAL;
}

static bool custom_indicators(effect_params_t* params) {
  if (params->init) custom_indicators_init(params);
  return custom_indicators_run(params);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
