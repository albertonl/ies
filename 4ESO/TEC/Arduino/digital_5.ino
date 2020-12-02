/*
  digital_5.ino
  The built-in LED will blink every 300ms (0.3s).

  This code is distributed under the MIT License.
  For more information, please refer to:
  https://albertonl.github.io/ies/4ESO/TEC/Arduino/

  Modified 26 Nov 2020
  by Alberto Navalón Lillo
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for 300ms (0.3s)
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(300);                       // wait for 300ms (0.3s)
}
