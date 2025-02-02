int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(50);  // 1 sec (1000 milliseconds)
  digitalWrite(led, LOW);
  delay(50);
}
