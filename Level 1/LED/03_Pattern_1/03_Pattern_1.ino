int leds[] = {8, 9, 10, 11, 12, 13};

void setup() {
  for (int i=0; i<6; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  for (int i=0; i<6; i++) {
    digitalWrite(leds[i], HIGH);
    delay(50);
  }
  delay(500);
  
  for (int i=6; i>=0; i--) {
    digitalWrite(leds[i], LOW);
    delay(50);
  }
  delay(500);
}
