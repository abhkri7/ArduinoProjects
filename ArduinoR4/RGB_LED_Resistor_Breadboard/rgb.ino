int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int redINT;
int greenINT;
int blueINT;
int br = 9600;
void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  Serial.begin(br);
}
void loop(){
  Serial.println("Please enter the red level from 0 to 255: ");
  while(!Serial.available()){
  }
  redINT = Serial.parseInt();

  Serial.println("Please enter the green level from 0 to 255: ");
  while(!Serial.available()){
  }
  greenINT = Serial.parseInt();

  Serial.println("Please enter the blue level from 0 to 255: ");
  while(!Serial.available()){
  }
  blueINT = Serial.parseInt();
  analogWrite(redPin, redINT);
  analogWrite(greenPin, greenINT);
  analogWrite(bluePin, blueINT);
}