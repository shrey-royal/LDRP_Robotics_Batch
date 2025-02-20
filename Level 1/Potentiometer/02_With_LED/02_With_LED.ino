int led = 11;
int potPin = A0;
int potValue, mappedValue;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // potValue = analogRead(potPin) / 4;
  potValue = analogRead(potPin);
  mappedValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(led, mappedValue);
}