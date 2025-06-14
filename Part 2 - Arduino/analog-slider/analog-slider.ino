// Start the program when the button is pressed
// Show a slider of the potentiometer knob in the LCD screen
// Turn on the light above a certain threshold
// Turn on the buzzer below a certain threshold

#include <Wire.h>
#include "Waveshare_LCD1602.h"

const int buttonPin = 2;
const int ledPin = 4;
const int THRESHOLD = 512;
const int  buzzerPin = 3;  //

int buttonState = 0;
int lastButtonState = 0;
int programStarted = 0;
Waveshare_LCD1602 lcd(16,2);  //16 characters and 2 lines of show

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  lcd.init();
  lcd.setCursor(0, 0);
  lcd.send_string("Press button to ");
  lcd.setCursor(0, 1);
  lcd.send_string("begin!");
}


void loop() {
  buttonState = digitalRead(buttonPin);
  if(lastButtonState == LOW && buttonState == HIGH)
  {
    programStarted = 1;
    lcd.clear();
  }
  lastButtonState = buttonState;
  if (programStarted == 1) {
    lcd.setCursor(0,0);
    int sensorValue = analogRead(A0);
    int progress_bar = sensorValue / 63;
    lcd.send_string(String(sensorValue).c_str());
    lcd.send_string("  ");
    lcd.setCursor(0,1);
    for (int i=0; i<progress_bar; i++) {
        lcd.send_string("=");
    }
    for (int i=progress_bar; i<16; i++) {
        lcd.send_string("  ");
    }
    if (sensorValue >= THRESHOLD) {
      digitalWrite(ledPin, HIGH);

    } else {
      digitalWrite(ledPin, LOW);
    }
    if (sensorValue <= THRESHOLD)  {
      tone(buzzerPin, 1000);
    } else {
      noTone(buzzerPin);
    }
    delay(300);
  }
  delay(50);
    
}
