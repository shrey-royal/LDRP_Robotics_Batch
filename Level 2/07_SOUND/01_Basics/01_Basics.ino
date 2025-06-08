#define SENSOR_PIN 7

int cs, ls = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR_PIN, INPUT);
}

void loop() {
  cs = digitalRead(SENSOR_PIN);

  if (ls == HIGH && cs == LOW) {
    Serial.println("Sound has been detected");
  }
  ls = cs;
}
