const int ledPins[] = {8, 9, 10, 11, 12};
const int buttonPin = 2;
int pattern = 0;
bool buttonPressed = false;

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(buttonPin), changePattern, FALLING);
}

void loop() {
  switch (pattern) {
    case 0: runningLights(); break;
    case 1: blinkAndChase(); break;
    case 2: knightRider(); break;
    case 3: randomTwinkle(); break;
    case 4: waveEffect(); break;
  }
}

void changePattern() {
  if (!buttonPressed) {
    buttonPressed = true;
    pattern = (pattern + 1) % 5; // Cycle through 5 patterns
    delay(200); // Debounce delay
    buttonPressed = false;
  }
}

// Pattern 1: Running Lights
void runningLights() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}

// Pattern 2: Blink & Chase
void blinkAndChase() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(100);
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(100);
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}

// Pattern 3: Knight Rider (Bouncing effect)
void knightRider() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = 4; i > 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}

// Pattern 4: Random Twinkle
void randomTwinkle() {
  int led = random(0, 5);
  digitalWrite(ledPins[led], HIGH);
  delay(100);
  digitalWrite(ledPins[led], LOW);
}

// Pattern 5: Wave Effect
void waveEffect() {
  for (int i = 0; i < 5; i++) {
    analogWrite(ledPins[i], 50);
    delay(50);
    analogWrite(ledPins[i], 150);
    delay(50);
    analogWrite(ledPins[i], 255);
  }
  for (int i = 4; i >= 0; i--) {
    analogWrite(ledPins[i], 150);
    delay(50);
    analogWrite(ledPins[i], 50);
    delay(50);
    analogWrite(ledPins[i], 0);
  }
}
