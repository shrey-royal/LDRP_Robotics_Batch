int led = LED_BUILTIN;
String user_input;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600); // baud rate (9600 bps)
  Serial.println("Comms Established!");
}

void loop() {
  while (Serial.available() == 0) {}
  user_input = Serial.readString();

  if(user_input == "on") digitalWrite(led, HIGH);
  else if (user_input == "off") digitalWrite(led, LOW);
  else Serial.println("Wrong Input!");
}