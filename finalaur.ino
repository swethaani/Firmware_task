const int indication = 13;
const int eepromSize = 1024;

void setup() {
  Serial.begin(2400);
  pinMode(indication, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    String data = Serial.readString();

    for (int i = 0; i < data.length(); i++) {
      EEPROM_write(i, data[i]);
    }

    for (int i = 0; i < data.length(); i++) {
      char c = EEPROM_read(i);
      Serial.print(c);

      digitalWrite(indication, HIGH);
      delay(100);
      digitalWrite(indication, LOW);
      delay(100);
    }
  }
}

void EEPROM_write(int address, byte value) {
  while (EECR & (1 << EEPE)) {}
  EEAR = address;
  EEDR = value;
  EECR |= (1 << EEMPE);
  EECR |= (1 << EEPE);
}

byte EEPROM_read(int address) {
  while (EECR & (1 << EEPE)) {}
  EEAR = address;
  EECR |= (1 << EERE);
  return EEDR;
}