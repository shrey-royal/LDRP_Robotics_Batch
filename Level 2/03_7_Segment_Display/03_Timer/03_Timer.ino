#include <TM1637Display.h>

#define CLK 8
#define DIO 9

#define BUZZER_PIN 11

TM1637Display display(CLK, DIO);


void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  display.setBrightness(0x0f);

  display.showNumberDecEx(0, SEG_G, true, 4, 0);
}

void loop() {
  int minutes = 0;
  int seconds = 10;

  while(minutes >= 0) {
    while (seconds >= 0) {
      int timeToShow = minutes * 100 + seconds;
      display.showNumberDecEx(timeToShow, 0x40, true);

      delay(1000);

      if (seconds == 0 && minutes == 0) {
        triggerBuzzer();
        return;
      }
      seconds--;
    }
    minutes--;
    seconds = 59;
  }
}

void triggerBuzzer() {
  for (int i = 0; i < 3000; i += 500) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(250);
    digitalWrite(BUZZER_PIN, LOW);
    delay(250);
  }
}