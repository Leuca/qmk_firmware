#define RGB_ALP RGB_WHITE
#define RGB_MDF RGB_CORAL
#define RGB_NUM RGB_WHITE
#define RGB_PLU RGB_GREEN
#define RGB_MIN RGB_RED
#define RGB_UGL 148, 38, 255

#define MAX_SG 38

static const uint8_t max_ledmap_layer = 2;
static uint8_t ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {
      {RGB_MDF}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_ALP}, {RGB_ALP}, {RGB_MDF}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP},            {RGB_MDF}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP},            {RGB_MDF}, {RGB_MDF}, {RGB_MDF},
      {RGB_MDF}, {RGB_MDF}, {RGB_MDF},                                  {RGB_ALP},                                  {RGB_MDF}, {RGB_MDF}, {RGB_MDF}, {RGB_MDF}, {RGB_MDF},
      //Uderglow (doesn't change anything if F_SIDEGLOW is defined)
      {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, //bottom strip
      {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, // right side strip
      {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, // top strip
      {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL} // left side strip
    },
    [1] = {
      {RGB_MDF}, {RGB_BLUE}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_ALP}, {RGB_ALP}, {RGB_MDF}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_PLU}, {RGB_PLU}, {RGB_PLU}, {RGB_PLU}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_MIN}, {RGB_MIN}, {RGB_MIN}, {RGB_MIN}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP},            {RGB_MDF}, {RGB_PLU},
      {RGB_MDF}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP},            {RGB_MDF}, {RGB_PLU}, {RGB_MIN},
      {RGB_MDF}, {RGB_MDF}, {RGB_MDF},                                  {RGB_ALP},                                  {RGB_MDF}, {RGB_MDF}, {RGB_MDF}, {RGB_MIN}, {RGB_MDF},
      //Uderglow (doesn't change anything if F_SIDEGLOW is defined)
      {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, //bottom strip
      {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, // right side strip
      {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, // top strip
      {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL} // left side strip
    }
    /*
    [NULL] = {
      {RGB_MDF}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_ALP}, {RGB_ALP}, {RGB_MDF}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP},            {RGB_MDF}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP},            {RGB_MDF}, {RGB_MDF}, {RGB_MDF},
      {RGB_MDF}, {RGB_MDF}, {RGB_MDF},                                  {RGB_ALP},                                  {RGB_MDF}, {RGB_MDF}, {RGB_MDF}, {RGB_MDF}, {RGB_MDF},
      //Uderglow (doesn't change anything if F_SIDEGLOW is defined)
      {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, //bottom strip
      {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, // right side strip
      {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, // top strip
      {RGB_UGL}, {RGB_UGL}, {RGB_UGL}, {RGB_UGL} // left side strip
    }
    */
};
