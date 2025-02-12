int btn = 7, cs, ls = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(btn, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  cs = digitalRead(btn);
  if (ls == HIGH && cs == LOW) {
    Serial.print("(ls: ");
    Serial.print(ls);
    Serial.print(", cs: ");
    Serial.print(cs);
    Serial.print(") -> ");
    Serial.println("Button pressed!");
  } else if (ls == LOW && cs == HIGH){
    Serial.print("(ls: ");
    Serial.print(ls);
    Serial.print(", cs: ");
    Serial.print(cs);
    Serial.print(") -> ");
    Serial.println("Button released!");
  }
  ls = cs;
}