/**
 * conditionals_10.ino
 * When pressing a push switch, a red LED will be on. Otherwise, a green
 * LED will be on. In addition to this, we are using INPUT_PULLUP for the
 * push switch.
 *
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 *
 * Modified 7 Jan 2021
 * Alberto Navalón Lillo
 */

// Constant values relative to the pins
const int redLed = 3;
const int greenLed = 4;
const int pushSwitch = 8;

void setup () {
  // Declaration of I/O devices:
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(pushSwitch, INPUT_PULLUP);

  /*
   * NOTE: as pushSwitch is declared as INPUT_PULLUP, we have to
   * remember that all logic involving it will be reversed.
   */
}

void loop () {
  int input = digitalRead(pushSwitch); // we store the state of the push switch

  if (input == HIGH) { // button is NOT pressed (logic reversed)
    // In this case, the green LED is turned on, and the red one, off.
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
  } else { // button is pressed
    // Green LED off, red LED on.
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
  }

  /*
   * Once the applicable conditional block has been executed, we will
   * immediately run the loop() function again.
   */
}
