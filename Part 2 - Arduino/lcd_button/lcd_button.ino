#include <Wire.h>
#include "Waveshare_LCD1602.h"


#define ONE_WIRE_BUS 4

const int buttonPin = 2;

Waveshare_LCD1602 lcd(16,2);  //16 characters and 2 lines of show
int buttonState = 0;
int lastButtonState = 0;

void setup() {
    // initialize
    lcd.init();

    pinMode(buttonPin, INPUT);
    
    lcd.setCursor(0,0);
    lcd.send_string("The button isn't");
    lcd.setCursor(0,1);
    lcd.send_string("pressed.");
}

void loop() {
    buttonState = digitalRead(buttonPin);
    if(lastButtonState == LOW && buttonState == HIGH)
    {
        lcd.setCursor(13,0);
        lcd.send_string("   ");
    }
    else if (lastButtonState == HIGH && buttonState == LOW){
        lcd.setCursor(13,0);
        lcd.send_string("n't");
    }
    lastButtonState = buttonState;
}
