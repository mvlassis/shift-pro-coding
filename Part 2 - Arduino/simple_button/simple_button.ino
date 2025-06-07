
#define LED_PIN 8
#define BUTTON_PIN 10
int lastButtonState = LOW;
int ledState = LOW;
void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
} 
void loop(){
int buttonState = digitalRead(BUTTON_PIN);
if (buttonState !=lastButtonState){
  lastButtonState = buttonState;
  if (buttonState == LOW){
      if (ledState == HIGH) {
        ledState = LOW;
        } else {
          ledState = HIGH;
        }
        digitalWrite(LED_PIN, ledState);
  }
  }
}
         
  

