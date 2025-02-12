int leds[] = {5, 6, 7, 8, 9, 10, 11, 12, 13};
int size = sizeof(leds)/sizeof(leds[0]);

void setup() {
  for (int i=0; i<size; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  for (int i=0; i<size; i++) {
    digitalWrite(leds[i], HIGH);
    digitalWrite(leds[i+1], HIGH);
    delay(500);
    digitalWrite(leds[i], LOW);
  }
}
