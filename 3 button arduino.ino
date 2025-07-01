// C++
// this code is for lighting up three separate leds, with a botton for each led

const int buttonPin1 = 2;  // Button connected to pin 2
const int ledPin1 = 3;     // LED connected to pin 3
const int buttonPin2 = 4;  // Button connected to pin 4
const int ledPin2 = 5;     // LED connected to pin 5
const int buttonPin3 = 6;  // Button connected to pin 6
const int ledPin3 = 7;     // LED connected to pin 7

void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);  // Enable internal pull-up resistor
  pinMode(ledPin1, OUTPUT);   // Set LED pin as output
  pinMode(buttonPin2, INPUT_PULLUP);  // Enable internal pull-up resistor
  pinMode(ledPin2, OUTPUT);  // Set LED pin as output
  pinMode(buttonPin3, INPUT_PULLUP);  // Enable internal pull-up resistor
  pinMode(ledPin3, OUTPUT);  // Set LED pin as output
}

void loop() {
  // Since using pull-up, LOW means the button is pressed
  if (digitalRead(buttonPin1) == LOW) {
    digitalWrite(ledPin1, HIGH);  // Turn LED on
  } else {
    digitalWrite(ledPin1, LOW);   // Turn LED off
  }
    if (digitalRead(buttonPin2) == LOW) {
    digitalWrite(ledPin2, HIGH);  // Turn LED on
  } else {
    digitalWrite(ledPin2, LOW);   // Turn LED off
  }
      if (digitalRead(buttonPin3) == LOW) {
    digitalWrite(ledPin3, HIGH);  // Turn LED on
  } else {
    digitalWrite(ledPin3, LOW);   // Turn LED off
  }
}
