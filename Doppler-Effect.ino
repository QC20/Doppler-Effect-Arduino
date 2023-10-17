const int ledPin = 8;  // LED pin
const int fadeDelay = 10; // Delay for fading effect

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Simulate the Doppler effect by fading the LED in and out
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledPin, brightness);
    delay(fadeDelay);
  }
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness);
    delay(fadeDelay);
  }
}
            