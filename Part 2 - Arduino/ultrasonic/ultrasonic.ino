// Program to calculate distance from the ultrasonic sensor

const int triggerPin = 3;
const int EchoPin = 4;
float duration = 0.0;
float distance = 0.0;

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  duration = pulseIn(EchoPin, HIGH);
  // The duration is in microseconds
  distance = 340 * duration / 10000 / 2;
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);

}
