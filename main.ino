#include <Servo.h>

Servo realservo;

void setup() {
  Serial.begin(9600);
  realservo.attach(8);
  realservo.write(0);
  delay(1000);
}

void loop() {
  int sensorValue = analogRead(A0);
  int angle = map(sensorValue, 0, 1000, 0, 180);
  Serial.println(sensorValue);
  realservo.write(angle);
  delay(1);
}