/*
 * analog_23.ino
 * Two for loops will iterate through all possible analog values
 * while applying them to the connected LED, therefore incrementally
 * increasing the light intensity from lowest (0) to highest, and
 * then decreasing it the other way around.
 *
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 *
 * Modified 5 Feb 2021
 * Alberto Navalón Lillo
 */

// Constant values relative to pin numbers
const int led = 9;

void setup () {
  // the LED will be used as an analog output, thus we don't
  // need to declare it with pinMode()
}

void loop () {
  for (int i = 0; i <= 255; i++) {
    // write every possible analog value in order to
    // increase the LED intensity
    analogWrite(led, i);
    delay(30); // wait 30ms before incrementing i again
  }
  
  for (int i = 255; i >= 0; i--) {
    // now do the same thing, but reversed, so that the
    // LED intensity goes from highest to lowest.
    analogWrite(led, i);
    delay(30); // wait 30ms before decrementing i again
  }
}
    
