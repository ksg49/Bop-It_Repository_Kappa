void setup() {
  //set LED pins
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);

  //set button pin
  pinMode(7, INPUT);

}

void loop() {
  int buttonState = digitalRead(7);
  digitalWrite(8, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

  if(buttonState == HIGH)
  {
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    delay(1000);

    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(6, LOW);
    delay(1000);

    digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    delay(1000);
  }

}
