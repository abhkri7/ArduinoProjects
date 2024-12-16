#include "Servo.h"
int lightPin = A0;
int servoPin = 11;
int br = 19200;
int lightVal;
double conversion = (180./1023.); 
Servo myServo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(br);
  myServo.attach(servoPin);
}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.print(1023);
  Serial.print(",");
  Serial.print(lightVal);
  Serial.print(",");
  Serial.println(0);
  myServo.write(conversion * lightVal);
  delay(100);
}
