int pinHijau = 12;
int pinKuning = 11;
int pinMerah = 10;

void setup() {
  pinMode(pinHijau, OUTPUT);
  pinMode(pinKuning, OUTPUT);
  pinMode(pinMerah, OUTPUT);
}

void loop() {
  digitalWrite(pinHijau, HIGH);
  delay(5000);
  digitalWrite(pinHijau, LOW);
  digitalWrite(pinKuning, HIGH);
  delay(1500);
  digitalWrite(pinKuning, LOW);
  digitalWrite(pinMerah, HIGH);
  delay(2500);
  digitalWrite(pinMerah, LOW);
}