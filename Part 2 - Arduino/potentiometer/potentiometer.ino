const int POTENTIOMETER_PIN = A2;
const int LED_PIN = 3;
const int ANALOG_THRESHOLD = 500;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  int analogValue = analogRead(POTENTIOMETER_PIN);
  if(analogValue > ANALOG_THRESHOLD) {
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
  }
}

  