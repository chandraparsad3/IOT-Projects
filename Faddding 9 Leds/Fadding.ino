// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  // Fade in all LEDs
  for (int brightness = 0; brightness <= 255; brightness += 5) {
    analogWrite(13, brightness);
    analogWrite(12, brightness);
    analogWrite(11, brightness);
    analogWrite(10, brightness);
    analogWrite(9, brightness);
    analogWrite(8, brightness);
    analogWrite(7, brightness);
    analogWrite(6, brightness);
    analogWrite(5, brightness);
    delay(20); // Adjust delay for speed of fade-in effect
  }

  // Fade out all LEDs
  for (int brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(13, brightness);
    analogWrite(12, brightness);
    analogWrite(11, brightness);
    analogWrite(10, brightness);
    analogWrite(9, brightness);
    analogWrite(8, brightness);
    analogWrite(7, brightness);
    analogWrite(6, brightness);
    analogWrite(5, brightness);
    delay(20); // Adjust delay for speed of fade-out effect
  }
}
