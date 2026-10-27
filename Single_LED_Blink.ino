//adding my edit for the intro to git assignment - Matthew Zoschg
void setup() {
  //set LED pin
  pinMode(8, OUTPUT);

  //set button pin
  pinMode(7, INPUT);

}

void loop() {
  int buttonState = digitalRead(7);
  digitalWrite(8, LOW);

  if(buttonState == HIGH)
  {
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    delay(1000);
  }
  
  digitalWrite(8, LOW);

}
