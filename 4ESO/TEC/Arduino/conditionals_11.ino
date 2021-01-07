/**
 * conditionals_11.ino
 * When pressing two push switches at the same time, a buzzer will ring.
 * In addition to this, we are using INPUT_PULLUP for both switches.
 *
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 *
 * Modified 7 Jan 2021
 * Alberto Navalón Lillo
 */

// Constant values relative to the pins
const int buzzer = 3;
const int pushSwitch1 = 8;
const int pushSwitch2 = 9;

void setup () {
  // Declaration of I/O devices:
  pinMode(buzzer, OUTPUT);
  pinMode(pushSwitch1, INPUT_PULLUP);
  pinMode(pushSwitch2, INPUT_PULLUP);

  /*
   * NOTE: as both push switches are declared as INPUT_PULLUP, we have to
   * remember that all logic involving them will be reversed.
   */
}

void loop () {
  // we store the state of both push switches
  int input1 = digitalRead(pushSwitch1);
  int input2 = digitalRead(pushSwitch2);

  if (input1 == LOW && input2 == LOW) {
    // both buttons are pressed (reversed logic)
    // turn buzzer on
    digitalWrite(buzzer, HIGH);
  } else {
    // fallback case (buzzer off)
    digitalWrite(buzzer, LOW);
  }
}
