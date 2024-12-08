int butPin = 2;
int br = 19200;
int dt = 100;
int redLED = 10;

bool butState = false;

void setup(){
  Serial.begin(br);
  pinMode(butPin, INPUT);
  pinMode(redLED, OUTPUT);

}
void loop(){
  while(digitalRead(butPin)){
    delay(dt);
  }
  while(!digitalRead(butPin)){
    delay(dt);
  }
  butState = !butState;
  digitalWrite(redLED, butState);
}