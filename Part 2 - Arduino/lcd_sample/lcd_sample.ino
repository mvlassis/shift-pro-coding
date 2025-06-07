#include <Wire.h>
#include "Waveshare_LCD1602.h"
#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 4

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
Waveshare_LCD1602 lcd(16,2);  //16 characters and 2 lines of show
int r,g,b,t=0;
void setup() {
    // initialize
    lcd.init();
    
    lcd.setCursor(0,0);
    lcd.send_string("hello");
    delay(1000)
    lcd.setCursor(0,0);
    lcd.send_string("World!!!");
}

void loop() {
    delay(150);
}
