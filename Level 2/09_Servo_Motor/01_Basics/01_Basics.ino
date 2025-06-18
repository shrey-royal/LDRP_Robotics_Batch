#include <Servo.h>

#define PIN 3

Servo sm;

void setup() {
  sm.attach(PIN);
  Serial.begin(9600);
}

void loop() {
  // sm.write(0);
  for (int i=0; i<180; i++) {
    sm.write(i);
    delay(10);
  }

  delay(1000);
  for (int i=180; i>=0; i--) {
    sm.write(i);
    delay(10);
  }
  delay(1000);
}
