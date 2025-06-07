int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    int value = analogRead(A0);

    Serial.println("Analog Value: ");
    Serial.println(value);

    if (value > 450) {
        digitalWrite(ledPin, LOW);
    } else {
        digitalWrite(ledPin, HIGH);
    }

    delay(250);
}
