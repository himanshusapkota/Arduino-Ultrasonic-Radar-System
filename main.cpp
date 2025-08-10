#include <Servo.h>

Servo myServo;
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;

void setup() {
  myServo.attach(3);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  for (int pos = 0; pos <= 180; pos++) {
    myServo.write(pos);
    delay(30);
    distance = getDistance();
    Serial.print(pos);
    Serial.print(",");
    Serial.println(distance);
  }
  for (int pos = 180; pos >= 0; pos--) {
    myServo.write(pos);
    delay(30);
    distance = getDistance();
    Serial.print(pos);
    Serial.print(",");
    Serial.println(distance);
  }
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  return distance;
}
