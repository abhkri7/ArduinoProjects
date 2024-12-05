int potPin=A2;
int LEDPin=11;
int potVal;
//int br=9600;
int waitT = 100;
void setup() {
  pinMode(potPin, INPUT);
  pinMode(LEDPin, OUTPUT);
  //Serial.begin(br);
}
void loop() {
  potVal=analogRead(potPin) * (255./1023.);
  //Serial.println(potVal);
  analogWrite(LEDPin, potVal);
  delay(waitT);
}