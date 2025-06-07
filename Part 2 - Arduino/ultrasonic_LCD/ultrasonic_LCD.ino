#include <Wire.h>
#include "Waveshare_LCD1602.h"

const int triggerPin = 3;
const int EchoPin = 4;
float duration = 0.0;
float distance = 0.0;

Waveshare_LCD1602 lcd(16,2);  //16 characters and 2 lines of show

void setup() {

  
  pinMode(triggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);

  lcd.init();
  
}

void loop() {
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  duration = pulseIn(EchoPin, HIGH);
  distance = 340 * duration / 10000 / 2;
  lcd.setCursor(0,0);
  lcd.send_string("The distance is: ");
  lcd.setCursor(0,1);
  lcd.send_string(String(distance).c_str());
  lcd.send_string(" cm   ");
  delay(1000);

}