#include<MD_Parola.h>
#include<MD_MAX72XX.h>

#define HARDWARE_TYPE MD_MAX72XX::GENERIC_HW
#define MAX_DEVICES 1
#define CS_PIN 3

MD_Parola ledMatrix = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);
String text;

void setup() {
  Serial.begin(9600);
  ledMatrix.begin();
  ledMatrix.setIntensity(10);  //0-15
  ledMatrix.displayClear();

  text.reserve(30);
}

void loop() {
  if (Serial.available()) {
    text = Serial.readStringUntil('\n');
    text[text.length()-1] = NULL;

    ledMatrix.displayClear();
    ledMatrix.displayScroll(text.c_str(), PA_CENTER, PA_SCROLL_LEFT, 100);
    Serial.print("text: ");
    Serial.println(text);
  }

  if (ledMatrix.displayAnimate()) {
    ledMatrix.displayReset();
  }
}
