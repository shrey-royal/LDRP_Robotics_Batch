int ldr = 7, led = 13, buzz = 9;
int ldrState;
bool flag;

void setup() {
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrState = digitalRead(ldr);
  if(ldrState == HIGH) {
    Serial.println("Lights are OFF!");
    digitalWrite(led, HIGH);
    if (flag == true) beepBuzzer(2);
    flag = false;
  } else {
    Serial.println("Lights are ON!");
    digitalWrite(led, LOW);
    flag = true;
  }
}

void beepBuzzer(int times) {
  for(int i=0; i<times; i++) {
    digitalWrite(buzz, HIGH);
    delay(200);
    digitalWrite(buzz, LOW);
    delay(200);
  }
}