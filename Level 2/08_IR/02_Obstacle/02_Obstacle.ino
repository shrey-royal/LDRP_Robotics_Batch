int ir = 8;

void setup() {
  Serial.begin(9600);
  pinMode(ir, INPUT);
}

void loop() {
  int state = digitalRead(ir);
  
  if (state == LOW) Serial.println("The obstacle is NOT present");
  else Serial.println("The obstacle is present");
  
  delay(100);
}