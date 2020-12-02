/*
 * digital_6.ino
 * Two external LEDs will blink alternatively every 500ms (0.5s).
 * 
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino/
 * 
 * Modified 02 Dec 2020
 * by Alberto Navalón Lillo
 */

// we define macros according to the pin numbers of the LEDs.
#define GREEN 12
#define RED 11

void setup() {
  // initialize green and red LEDs as digital outputs:
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  digitalWrite(GREEN, HIGH); // first, we turn the green LED on
  digitalWrite(RED, LOW);    // ...and red off, in case it was already on
                             // coming from the last iteration.
  delay(500); // we wait for 500ms (0.5s);

  digitalWrite(RED, HIGH); // now we do the same thing but with the opposite colors.
  digitalWrite(GREEN, LOW);

  delay(500); // we wait for 500ms before the next iteration.
}

