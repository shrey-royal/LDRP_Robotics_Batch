#include<MD_Parola.h>
#include<MD_MAX72XX.h>

#define HARDWARE_TYPE MD_MAX72XX::GENERIC_HW
#define MAX_DEVICES 1
#define CS_PIN 3

MD_Parola ledMatrix = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup() {
  ledMatrix.begin();
  ledMatrix.setIntensity(15);  //0-15
  ledMatrix.displayClear();

  
  ledMatrix.displayScroll("Hello", PA_CENTER, PA_SCROLL_LEFT, 100);
  // ledMatrix.displayText("S", PA_CENTER, 0, 100, PA_PRINT);
}

void loop() {

  if (ledMatrix.displayAnimate()) {
    ledMatrix.displayReset();
  }
}


/* 
// FC-16 HW

#include<MD_Parola.h>
#include<MD_MAX72XX.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define CS_PIN 3

MD_Parola ledMatrix = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup() {
  ledMatrix.begin();
  ledMatrix.setIntensity(15);  //0-15
  ledMatrix.displayClear();

  // ledMatrix.displayScroll("Hello", PA_CENTER, PA_SCROLL_LEFT, 100);
  ledMatrix.displayText("S", PA_CENTER, 0, 100, PA_PRINT);
}

void loop() {
  if (ledMatrix.displayAnimate()) {
    ledMatrix.displayReset();
  }
}
*/