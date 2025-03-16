int ldr = 7, led = 13;
int ldrState;

void setup() {
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrState = digitalRead(ldr);
  if(ldrState == HIGH) {
    Serial.println("Lights are OFF!");
    digitalWrite(led, HIGH);
  } else {
    Serial.println("Lights are ON!");
    digitalWrite(led, LOW);
  }
}