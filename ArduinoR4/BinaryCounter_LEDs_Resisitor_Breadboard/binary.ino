int i = 0;
void setup() {
    // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}
void dispBin(int number){
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  if(number >= 8){
    number -= 8;
    digitalWrite(7, HIGH);
  }
  if(number >= 4){
    number -= 4;
    digitalWrite(6, HIGH);
  }
  if(number >= 2){
    number -= 2;
    digitalWrite(5, HIGH);
  }
  if(number == 1){
    number -= 1;
    digitalWrite(4, HIGH);
  }
}
void loop() {
  dispBin(i);
  delay(200);
  if(i < 15){
    i++;
  }
}