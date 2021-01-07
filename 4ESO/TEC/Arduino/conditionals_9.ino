/*
 * conditionals_9.ino
 * The connected LED will remain on as the push button is released, and
 * it will turn off when the button is pressed.
 *
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 *
 * Modified 7 Jan 2021
 * Alberto Navalón Lillo (add comments)
 */

// Constant values relative to the pins:
const int pushSwitch = 8; // Push Switch → Pin 8
const int led = 3; // (Red) LED → Pin 3

void setup () {
  // Declaration of I/O devices:
  pinMode(led, OUTPUT); // (Red) LED as digital output
  pinMode(pushSwitch, INPUT_PULLUP); // Push Switch as digital input

  /*
   * NOTE: as pushSwitch is declared as INPUT_PULLUP, we have to
   * remember that all logic involving it will ve reversed.
   */
}

void loop () {
  // Read state of the push switch and store it in an int variable:
  int switchState = digitalRead(pushSwitch);

  if (switchState == HIGH) {
    digitalWrite(led, HIGH); // turn LED on if the push switch state is HIGH
                             // (it is released).
  } else {
    digitalWrite(led, LOW); // otherwise, the LED will be off (when the push
                            // switch is pressed).
  }
}
