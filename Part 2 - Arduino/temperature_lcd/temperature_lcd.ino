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
    sensors.begin();
    
    lcd.setCursor(0,0);
    lcd.send_string("Waveshare");
    lcd.setCursor(0,1);
    lcd.send_string("Hello,World!!!");

}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.send_string("Temperature is:");
  lcd.setCursor(0,1);

  sensors.requestTemperatures(); 
  
  // Why "byIndex"? You can have more than one IC on the same bus. 0 refers to the first IC on the wire
  String result = String(sensors.getTempCByIndex(0));
  lcd.send_string(result.c_str());

  delay(2000);
}
