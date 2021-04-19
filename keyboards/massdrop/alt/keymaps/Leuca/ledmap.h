#define RGB_ALP RGB_OFF
#define RGB_MDF RGB_OFF
#define RGB_NUM RGB_OFF
#define RGB_PLU RGB_GREEN
#define RGB_MIN RGB_RED



static const uint8_t max_ledmap_layer = 2;
static uint8_t ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {
      {RGB_MDF}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_ALP}, {RGB_ALP}, {RGB_MDF}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP},            {RGB_MDF}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP},            {RGB_MDF}, {RGB_MDF},
      {RGB_MDF}, {RGB_MDF}, {RGB_MDF},                                  {RGB_ALP},                                  {RGB_MDF}, {RGB_MDF}, {RGB_MDF}, {RGB_MDF}, {RGB_MDF},
      //Uderglow (doesn't change anything if F_SIDEGLOW is defined)
      {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}
    },
    [1] = {
      {RGB_MDF}, {RGB_BLUE}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_NUM}, {RGB_ALP}, {RGB_ALP}, {RGB_MDF}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_PLU}, {RGB_PLU}, {RGB_PLU}, {RGB_PLU}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_MDF},
      {RGB_MDF}, {RGB_ALP}, {RGB_MIN}, {RGB_MIN}, {RGB_MIN}, {RGB_MIN}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP},            {RGB_MDF}, {RGB_PLU},
      {RGB_MDF}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP}, {RGB_ALP},            {RGB_PLU}, {RGB_MIN},
      {RGB_MDF}, {RGB_MDF}, {RGB_MDF},                                  {RGB_ALP},                                  {RGB_MDF}, {RGB_MDF}, {RGB_MDF}, {RGB_MIN}, {RGB_MDF},
      //Uderglow (doesn't change anything if F_SIDEGLOW is defined)
      {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}
    }
    /*
    [NULL] = {
      {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF},
      {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF},
      {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF},            {RGB_OFF}, {RGB_OFF},
      {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF},            {RGB_OFF}, {RGB_OFF},
      {RGB_OFF}, {RGB_OFF}, {RGB_OFF},                                  {RGB_OFF},                                  {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF},
      //Uderglow
      {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF},                                                                                                                                                {RGB_OFF},
      {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF}, {RGB_OFF},
    }
    */
};
