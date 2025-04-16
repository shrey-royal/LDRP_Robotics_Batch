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
  oled.setCursor(0, 0);
}

void loop() {
  //draw rectangle
  oled.clearDisplay();
  oled.drawRect(0, 15, 60, 40, WHITE);
  oled.display();
  delay(2000);

  // fill rectangle
  oled.clearDisplay();
  oled.fillRect(0, 15, 60, 40, WHITE);
  oled.display();
  delay(2000);


  // draw the round rectangle
  oled.clearDisplay();
  oled.drawRoundRect(0, 15, 60, 40, 8, WHITE);
  oled.display();
  delay(2000);

  // fill the round rectangle
  oled.clearDisplay();
  oled.fillRoundRect(0, 15, 60, 40, 8, WHITE);
  oled.display();
  delay(2000);

  // draw circle
  oled.clearDisplay();
  oled.drawCircle(20, 35, 20, WHITE);
  oled.display();
  delay(2000);

  // fill circle
  oled.clearDisplay();
  oled.fillCircle(20, 35, 20, WHITE);
  oled.display();
  delay(2000);

  // draw triangle
  oled.clearDisplay();
  oled.drawTriangle(30, 15, 0, 60, 60, 60, WHITE);
  oled.display();
  delay(2000);

  // fill triangle
  oled.clearDisplay();
  oled.fillTriangle(30, 15, 0, 60, 60, 60, WHITE);
  oled.display();
  delay(2000);

  // draw inverse triangle
  oled.clearDisplay();
  oled.drawTriangle(20, 10, 80, 10, 50, 60, WHITE);
  oled.display();
  delay(2000);
}
