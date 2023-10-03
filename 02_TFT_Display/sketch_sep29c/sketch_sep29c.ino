#include <evive.h>
void setup() {
  // put your setup code here, to run once:
tft_init(INITR_BLACKTAB); //this is used to intialize TFT display
tft.setRotation(1); //this rotates screen by 9- degreee
tft.fillScreen(ST7735_BLACK); //this filles display with black colour
tft.setCursor(0,10); //this sets coursor to write on (0,10) location
tft.setTextColor(ST7735_WHITE); //this set the text colour
tft.println("HELLO WORD"); // print function
tft.println("");
tft.println("MY NAME IS CRISTO");
}

void loop() {
  // put your main code here, to run repeatedly:

}
