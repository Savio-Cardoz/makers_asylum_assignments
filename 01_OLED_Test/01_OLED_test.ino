/* =============================================================================
   OLED TEST
   Hardware: 1.3" SH1106 128x64 OLED (I2C)
   Purpose : Verify the OLED display connection and look for bad pixels
   =============================================================================
*/

#include <U8glib.h>

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NO_ACK);

void setup() {
    // No special setup needed for U8glib
}

void loop() {
  // All pixels ON
  u8g.firstPage();
  do {
    u8g.drawBox(0, 0, 128, 64);
  } while (u8g.nextPage());
  delay(2000);

  // All pixels OFF
  u8g.firstPage();
  do {
    
  } while (u8g.nextPage());
  delay(1000);
}
