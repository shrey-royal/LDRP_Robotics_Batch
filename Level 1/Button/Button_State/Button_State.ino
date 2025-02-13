int btn = 7, cs, ls = HIGH, ledState = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(btn, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  cs = digitalRead(btn);
  if (ls == HIGH && cs == LOW) {
    ledState = !ledState;
  }
  digitalWrite(LED_BUILTIN, ledState);
  ls = cs;
}