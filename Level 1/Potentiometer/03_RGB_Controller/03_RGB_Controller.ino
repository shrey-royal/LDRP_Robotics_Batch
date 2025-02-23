int r=11, g=10, b=9;
int p1=A0, p2=A1, p3=A2;

void setup() {
  pinMode(r, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(p1, INPUT);
  pinMode(p2, INPUT);
  pinMode(p3, INPUT);
}

void loop() {
  analogWrite(r, analogRead(p1)/4);
  analogWrite(g, analogRead(p2)/4);
  analogWrite(b, analogRead(p3)/4);
}