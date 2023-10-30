RGB_MATRIX_EFFECT(Leuca_static)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS


static bool Leuca_static(effect_params_t* params){
  RGB_MATRIX_USE_LIMITS(led_min, led_max);

  for (uint8_t i = led_min; i < led_max; i++) {
    RGB_MATRIX_TEST_LED_FLAGS();

    if(g_led_config.flags[i] & LED_FLAG_KEYLIGHT)
      rgb_matrix_set_color(i, RGB_WHITE);

    if(g_led_config.flags[i] & LED_FLAG_MODIFIER || g_led_config.flags[i] & LED_FLAG_INDICATOR)
      rgb_matrix_set_color(i, RGB_CORAL);
      
    if(g_led_config.flags[i] & LED_FLAG_UNDERGLOW || g_led_config.flags[i] & LED_FLAG_NONE)
      rgb_matrix_set_color(i, 71, 0, 140);
  }

  return led_max < RGB_MATRIX_LED_COUNT;
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
