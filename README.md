# Bop-It_Repository_Kappa
This is our team repository for our F1 Driving Simulator project

My name is Kadyn Geddes

Microcontroller Source Code:

// One_LED


void setup() {
  // Set LED pin as output
  pinMode(8, OUTPUT);

  // Set button pin as input with internal pull-up
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  // Read the button state
  int buttonState = digitalRead(7);

  if (buttonState == LOW) {
    // Button is pressed
    digitalWrite(8, HIGH);
    delay(1000);

    digitalWrite(8, LOW);
    delay(1000);
  }
  else {
    // Button is not pressed
    digitalWrite(8, LOW);
  }
}


// Three_LEDs

void setup() {
  // Set LED pins as outputs
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  // Set button pin with internal pull-up
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  // Read button state
  int buttonState = digitalRead(7);

  // Keep all LEDs off when idle
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);

  if (buttonState == LOW) {
    // LED 1
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    delay(1000);

    // LED 2
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
    delay(1000);

    // LED 3
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(10, LOW);
    delay(1000);
  }
}

