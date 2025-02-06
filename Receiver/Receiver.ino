#include <SoftwareSerial.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;
SoftwareSerial mySerial (6, 7); //RX, TV pins

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.print("Waiting...");
  delay(100);
  
  

  if (mySerial.available() > 0) {
    String recievedMessage = mySerial.readString();
    lcd.clear();
    lcd.print(recievedMessage);
    delay(3000);
  }
}
