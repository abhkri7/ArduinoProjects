void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}
void flicker(pin_size_t pin, int duration){
  digitalWrite(pin, HIGH);
  delay(duration);
  digitalWrite(pin, LOW);
  delay(duration);
}
void loop() {
  // put your main code here, to run repeatedly:
  flicker(13, 200);
  flicker(13, 200);
  flicker(13, 200);
  flicker(13, 500);
  flicker(13, 500);
  flicker(13, 500);
  flicker(13, 200);
  flicker(13, 200);
  flicker(13, 200);
  delay(700);
}
