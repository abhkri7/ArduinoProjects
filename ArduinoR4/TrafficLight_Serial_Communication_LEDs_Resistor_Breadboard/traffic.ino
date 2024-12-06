int redPin = 9;
int yellowPin = 10;
int greenPin = 11;
int br = 9600;
String mode;
void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  Serial.begin(br);
}
void loop(){
  Serial.println("Please enter the following words to adjust the traffic sign ('stop', 'slow', 'go'): ");
  while(!Serial.available()){
  }
  mode = Serial.readString();
  if(mode == "stop"){
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
  } else if(mode == "slow"){
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
  } else if(mode == "go"){
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
  } else{
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
  }
}