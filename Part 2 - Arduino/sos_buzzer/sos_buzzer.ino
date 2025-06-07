const int pin = 8;
const int pin2 = 9;
const int buzzer = 10;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pin, HIGH);  // turn the LED on (HIGH is the voltage level)
  tone(buzzer, 2000);
  delay(500);                      // wait for a second
  digitalWrite(pin, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(pin2, HIGH);
  tone(buzzer, 440);
  delay(500);                      // wait for a second
  digitalWrite(pin2, LOW);
}
