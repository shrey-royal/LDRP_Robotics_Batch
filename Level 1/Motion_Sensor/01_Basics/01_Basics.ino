int pirSensor = 7;
int cs;
int ls = LOW;
int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(pirSensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  cs = digitalRead(pirSensor);

  if(ls == LOW && cs == HIGH) {
    digitalWrite(led, HIGH);
    Serial.println("Motion Detected!");
  } else if(ls == HIGH && cs == LOW) {
    digitalWrite(led, LOW);
    Serial.println("Motion Stopped!");
  }

  ls = cs;
}
