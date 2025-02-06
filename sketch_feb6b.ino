#include <SoftwareSerial.h>

SoftwareSerial mySerial (7,6); //RX, TX pins

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

}

void loop() {
  if (Serial.available()) {
    mySerial.print(Serial.readStringUntil('\n'));
  }
}
