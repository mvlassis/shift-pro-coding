// Program that counts the number of button presses
// and displays that number in the LCD display

#include <Wire.h>
#include "Waveshare_LCD1602.h"

const int buttonPin = 2;
const int resetButtonPin = 3;

Waveshare_LCD1602 lcd(16,2);  // 16 characters and 2 lines of show
int buttonState = 0;
int lastButtonState = 0;
int counter = 0;
int resetButtonState = 0;

void setup() {
    // initialize
    lcd.init();

    pinMode(buttonPin, INPUT);
    pinMode(resetButtonPin, INPUT);
    
    lcd.setCursor(0,0);
    lcd.send_string("Button presses:");
    lcd.setCursor(0,1);
    lcd.send_string("0   times.");
}

void loop() {
    buttonState = digitalRead(buttonPin);
    resetButtonState = digitalRead(resetButtonPin);

    if(lastButtonState == LOW && buttonState == HIGH)
    {
        counter++;
        lcd.setCursor(0,1);
        lcd.send_string(String(counter).c_str());
    }
    lastButtonState = buttonState;
    if(resetButtonState == HIGH) {
        counter = 0;
        lcd.setCursor(0,1);
        lcd.send_string("0   times");
    }

    delay(50);
}
