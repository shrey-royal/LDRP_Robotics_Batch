int btn = 7, cs, ls = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(btn, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  cs = digitalRead(btn);
  if (ls == HIGH && cs == LOW) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else if (ls == LOW && cs == HIGH){
    digitalWrite(LED_BUILTIN, LOW);
  }
  ls = cs;
}

//On a single press of a button led should turn on and on the second press, led should turn off