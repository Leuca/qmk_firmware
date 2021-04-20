#define HSV_ALP HSV_WHITE
#define HSV_MDF HSV_CORAL
#define HSV_NUM HSV_WHITE
#define HSV_PLU HSV_GREEN
#define HSV_MIN HSV_RED
#define HSV_UGL 192, 217, 255

#define MAX_SG 38

static const uint8_t max_ledmap_layer = 2;
static uint8_t ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {
      {HSV_MDF}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_ALP}, {HSV_ALP}, {HSV_MDF}, {HSV_MDF},
      {HSV_MDF}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_MDF},
      {HSV_MDF}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP},            {HSV_MDF}, {HSV_MDF},
      {HSV_MDF}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP},            {HSV_MDF}, {HSV_MDF}, {HSV_MDF},
      {HSV_MDF}, {HSV_MDF}, {HSV_MDF},                                  {HSV_ALP},                                  {HSV_MDF}, {HSV_MDF}, {HSV_MDF}, {HSV_MDF}, {HSV_MDF},
      //Uderglow (doesn't change anything if F_SIDEGLOW is defined)
      {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, //bottom strip
      {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, // right side strip
      {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, // top strip
      {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL} // left side strip
    },
    [1] = {
      {HSV_MDF}, {HSV_BLUE}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_ALP}, {HSV_ALP}, {HSV_MDF}, {HSV_MDF},
      {HSV_MDF}, {HSV_MIN}, {HSV_PLU}, {HSV_PLU}, {HSV_PLU}, {HSV_PLU}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_MDF},
      {HSV_MDF}, {HSV_MIN}, {HSV_MIN}, {HSV_PLU}, {HSV_MIN}, {HSV_MIN}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP},            {HSV_MDF}, {HSV_PLU},
      {HSV_MDF}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP},            {HSV_MDF}, {HSV_PLU}, {HSV_MIN},
      {HSV_MDF}, {HSV_MDF}, {HSV_MDF},                                  {HSV_ALP},                                  {HSV_MDF}, {HSV_MDF}, {HSV_MDF}, {HSV_MIN}, {HSV_MDF},
      //Uderglow (doesn't change anything if F_SIDEGLOW is defined)
      {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, //bottom strip
      {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, // right side strip
      {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, // top strip
      {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL} // left side strip
    }
    /*
    [NULL] = {
      {HSV_MDF}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_NUM}, {HSV_ALP}, {HSV_ALP}, {HSV_MDF}, {HSV_MDF},
      {HSV_MDF}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_MDF},
      {HSV_MDF}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP},            {HSV_MDF}, {HSV_MDF},
      {HSV_MDF}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP}, {HSV_ALP},            {HSV_MDF}, {HSV_MDF}, {HSV_MDF},
      {HSV_MDF}, {HSV_MDF}, {HSV_MDF},                                  {HSV_ALP},                                  {HSV_MDF}, {HSV_MDF}, {HSV_MDF}, {HSV_MDF}, {HSV_MDF},
      //Uderglow (doesn't change anything if F_SIDEGLOW is defined)
      {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, //bottom strip
      {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, // right side strip
      {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, // top strip
      {HSV_UGL}, {HSV_UGL}, {HSV_UGL}, {HSV_UGL} // left side strip
    }
    */
};
