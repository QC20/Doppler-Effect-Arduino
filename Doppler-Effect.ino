const int redPin = 9;    // Red LED pin
const int bluePin = 11;  // Blue LED pin
const int fadeDelay = 10; // Delay for fading effect

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Simulate redshift (LED moving away)
  for (int i = 0; i <= 255; i++) {
    analogWrite(redPin, 255 - i);
    analogWrite(bluePin, i / 2);  // Adjust fading rate for blueshift
    delay(fadeDelay);
  }

  // Simulate blueshift (LED moving closer)
  for (int i = 0; i <= 255; i++) {
    analogWrite(redPin, i / 2);  // Adjust fading rate for redshift
    analogWrite(bluePin, 255 - i);
    delay(fadeDelay);
  }
}
