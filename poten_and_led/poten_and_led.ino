void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // possible values 0..1023
  int potValue = analogRead(A0);

  int mappedValue = map(potValue, 0, 1023, 0, 255);
  // possible values 0..255
  analogWrite(9, mappedValue);
}
