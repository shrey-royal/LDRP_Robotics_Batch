int led = LED_BUILTIN;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);  // 1000 milliseconds = 1 sec
  digitalWrite(led, LOW);
  delay(1000);
}