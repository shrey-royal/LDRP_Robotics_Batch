int l1=11, l2=12, l3=13;

void setup() {
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
}

void loop() {
  digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  delay(1000);

  digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, LOW);
  delay(1000);

  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, HIGH);
  delay(1000);

  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  delay(1000);

  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  delay(1000);
}
