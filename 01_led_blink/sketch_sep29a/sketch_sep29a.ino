int LEDPin =3;

void setup() {
  // initialize digital pin ledpin as an output
pinMode(LEDPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  digitalWrite(LEDPin, HIGH); //turn the led on (HIGH is the voltage level)
  Serial.println("LED is turned on");
  delay(1000); //wait for few second
  digitalWrite(LEDPin, LOW); //turn the led off by making the voltage low
  Serial.println("LED is turned off");
  delay(1000); //wait for a socond

}
