/*
 * Arduino - Ultrasonic Sensor HC-SR04
 *
 * Wiring: Ultrasonic Sensor -> Arduino:
 * - VCC  -> 5V
 * - TRIG -> Pin 9
 * - ECHO -> Pin 8
 * - GND  -> GND
 */

 #include <NewPing.h>

int trigPin = 9;    // TRIG pin
int echoPin = 8;    // ECHO pin

NewPing sensor(trigPin, echoPin, 200);

void setup() {
  Serial.begin (9600);
}

void loop() {
  Serial.print("Ping: ");
  Serial.print(sensor.ping_cm());
  Serial.println(" cm");

  delay(500);
}
