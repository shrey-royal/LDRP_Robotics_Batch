int r = 11;
int g = 10;
int b = 9;
int r_input, g_input, b_input;

void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    r_input = Serial.readStringUntil(' ').toInt();
    g_input = Serial.readStringUntil(' ').toInt();
    b_input = Serial.readStringUntil(' ').toInt();
    // r_input = Serial.parseInt();
    // g_input = Serial.parseInt();
    // b_input = Serial.parseInt();
    
    Serial.print("colorRGB(");
    Serial.print(r_input);
    Serial.print(", ");
    Serial.print(g_input);
    Serial.print(", ");
    Serial.print(b_input);
    Serial.println(")");
    
    colorRGB(r_input, g_input, b_input);
  }
}

void colorRGB(int r_val, int g_val, int b_val) {
  analogWrite(r, r_val);
  analogWrite(g, g_val);
  analogWrite(b, b_val);
}