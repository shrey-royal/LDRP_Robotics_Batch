#include "pitches.h"

int buzzerPin = 9;

int melody[] = {
  NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_B4, NOTE_G4, NOTE_F4, NOTE_E4
};

int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 4, 4  // 4 = quarter note
};

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  for(int thisNote = 0; thisNote < 8; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];  //duration in ms
    tone(buzzerPin, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.3;
    delay(pauseBetweenNotes);
  
    noTone(buzzerPin);
  }
  delay(2000);
}