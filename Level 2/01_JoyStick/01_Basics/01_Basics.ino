int x = A0, y = A1, sw = 7;
int vx, vy, vsw;
int led = 11;

void setup() {
  pinMode(x, INPUT);
  pinMode(y, INPUT);
  pinMode(sw, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  vx = analogRead(x);
  vy = analogRead(y);
  vsw = digitalRead(sw);

  analogWrite(led, map(vx, 0, 1023, 0, 255));

  Serial.print("Vx = ");
  Serial.print(vx);
  Serial.print(", Vy = ");
  Serial.print(vy);
  Serial.print(", Vsw = ");
  Serial.println(vsw);
}
