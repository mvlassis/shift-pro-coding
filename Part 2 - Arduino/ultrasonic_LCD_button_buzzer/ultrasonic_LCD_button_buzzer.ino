// Program to calculate distance from ultrasonic sensor
// And beep if the distance is too short

#include <Wire.h>
#include "Waveshare_LCD1602.h"

const int BUZZERDISTANCE = 10;

const int buzzerPin = 5;
const int buttonPin = 2;
const int triggerPin = 3;
const int EchoPin = 4;
int buttonState = 0;
int lastButtonState = 0;
float duration = 0.0;
float distance = 0.0;

Waveshare_LCD1602 lcd(16,2);  //16 characters and 2 lines of show

void setup() {

  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(triggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);

  lcd.init();
  
}

void print_distance() {
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
  if(distance < BUZZERDISTANCE) {
    tone(buzzerPin, 1000);
    lcd.send_string("!");
  }
  delay(500);
  noTone(buzzerPin);
}

void loop() {
    buttonState = digitalRead(buttonPin);
    if(lastButtonState == LOW && buttonState == HIGH)
    {
      lcd.clear();
      print_distance();
    }
    lastButtonState = buttonState;
    delay(50);
}
