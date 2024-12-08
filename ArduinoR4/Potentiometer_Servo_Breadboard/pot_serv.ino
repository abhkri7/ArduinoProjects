#include <Servo.h>
int servoPin=9;
int servoAngle=180;
int br=19200;
int dt = 50;
int potPin = A2;
Servo myServo;
void setup(){
  Serial.begin(br);
  myServo.attach(servoPin);
  pinMode(potPin, INPUT);
}
void loop(){
  int val = (180.0 / 1023.0) * analogRead(potPin);
  //delay(100);
  myServo.write(val);
  Serial.println(val);
}