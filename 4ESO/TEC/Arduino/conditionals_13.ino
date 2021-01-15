/**
 * conditionals_13.ino
 * If two push switches are pressed at the same time, only a green LED is on.
 * If only the first one is pressed, only a red LED is on. If only the second
 * one is pressed, only a yellow LED is on. If neither of them are pressed,
 * the three LEDs are off.
 *
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 *
 * Modified 7 Jan 2021
 * Alberto Navalón Lillo
 *
 * Modified 15 Jan 2021
 * Alberto Navalón Lillo (change to INPUT_PULLUP and invert logic)
 */

// Constant values relative to the pins
const int redLed = 3;
const int yellowLed = 4;
const int greenLed = 5;
const int pushSwitch1 = 8;
const int pushSwitch2 = 9;

void setup () {
  // Declaration of I/O devices
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(pushSwitch1, INPUT_PULLUP);
  pinMode(pushSwitch2, INPUT_PULLUP);

  // Both push switches are INPUT_PULLUP, so the
  // logic involving them will be reversed.
}

void loop () {
  // we store the state of both push switches
  int input1 = digitalRead(pushSwitch1);
  int input2 = digitalRead(pushSwitch2);

  if (input1 == LOW && input2 == LOW) {
    // BOTH buttons are pressed → only green LED on
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, HIGH);
  } else if (input1 == LOW) {
    // ONLY the FIRST button is pressed → only red LED on
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, LOW);
  } else if (input2 == LOW) {
    // ONLY the SECOND button is pressed → only yellow LED on
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(greenLed, LOW);
  } else {
    // fallback case (no buttons pressed) → all LEDs off
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, LOW);
  }
}
