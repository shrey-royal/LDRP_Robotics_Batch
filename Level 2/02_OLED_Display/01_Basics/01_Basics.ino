#include<Adafruit_GFX.h>
#include<Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 //px
#define SCREEN_HEIGHT 64 //px

Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT);

void setup() {
  Serial.begin(9600);

  if(!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed!"));
    while (true);
  }
  delay(2000);

  oled.clearDisplay();
  
  oled.setTextSize(1);
  oled.setTextColor(WHITE);
  oled.setCursor(40, 25);
  oled.println("Hello World!");
  oled.display();
}

void loop() {
  //
}
