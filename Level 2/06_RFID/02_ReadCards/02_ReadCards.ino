#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 5
#define BUZZER 7

MFRC522 rfid(SS_PIN, RST_PIN);

const byte validCards[][4] = {
  {0x53, 0xD8, 0x8C, 0xFD},
  {0xD3, 0xA4, 0x47, 0xF5}
};
const int numValidCards = sizeof(validCards)/sizeof(validCards[0]);

void setup() {
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();

  Serial.println("Tap RFID/NFC Tag on reader");
}

void loop() {
  if (rfid.PICC_IsNewCardPresent() && rfid.PICC_ReadCardSerial()) {
    if (isCardValid(rfid.uid.uidByte, rfid.uid.size)) {
      Serial.println("Access Granted!");
      beepBuzzer(1);
    } else {
      Serial.println("Access Denied!");
      beepBuzzer(2);
    }

    rfid.PICC_HaltA();
    rfid.PCD_StopCrypto1();
  }
}

bool isCardValid(byte *uid, byte size) {
  for (int i = 0; i < numValidCards; i++) {
    bool match = true;
    for (int j = 0; j < size; j++) {
      if(uid[j] != validCards[i][j]) {
        match = false;
        break;
      }
    }
    if(match) return true;
  }
  return false;
}

void beepBuzzer(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(BUZZER, HIGH);
    delay(200);
    digitalWrite(BUZZER, LOW);
    delay(200);
  }
}