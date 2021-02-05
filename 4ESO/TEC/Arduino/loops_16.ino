/*
 * loops_16.ino
 * The built-in LED will blink every 0.3 seconds, 30 times, and then
 * it will remain off for 3 seconds before blinking again.
 * 
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 * 
 * Modified 22 Jan 2021
 * Alberto Navalón Lillo
 */

void setup () {
  // initialize built-in LED as digital output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop () {
  // loop 30 times:
  for (int i = 0; i < 30; i++) {
    digitalWrite(LED_BUILTIN, HIGH);  // LED on
    delay(300);                       // remain on for 300ms
    digitalWrite(LED_BUILTIN, LOW);   // LED off
    delay(300);                       // remain off for 300ms
  }

  // wait three seconds before blinking again
  // (LED is already off)
  delay(3000);
}

