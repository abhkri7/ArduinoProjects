int redPin = 8;
int dit = 200;
int daw = 500;
int end_delay = 700;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}
void flicker(pin_size_t pin, int duration){
  digitalWrite(pin, HIGH);
  delay(duration);
  digitalWrite(pin, LOW);
  delay(duration);
}
void loop() {
  // put your main code here, to run repeatedly:
  flicker(redPin, dit);
  flicker(redPin, dit);
  flicker(redPin, dit);
  flicker(redPin, daw);
  flicker(redPin, daw);
  flicker(redPin, daw);
  flicker(redPin, dit);
  flicker(redPin, dit);
  flicker(redPin, dit);
  delay(end_delay);
}