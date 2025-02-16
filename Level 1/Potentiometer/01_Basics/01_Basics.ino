int potPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
}

void loop() {
  int sensorValue = analogRead(potPin);
  Serial.println(sensorValue);
}
