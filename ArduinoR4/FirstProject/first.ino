//Make the built-in light on the Arduino R4 light up
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH)
  delay(200);
  digitalWrite(13, LOW)
  delay(200);
}
