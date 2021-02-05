/*
 * loops_17.ino
 * 
 * An LED will blink every 400 milliseconds, as long as the connected
 * push switch is pressed.
 * 
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 * 
 * Modified 28 Jan 2021
 * Alberto Navalón Lillo (add comments)
 * 
 */

// Constant values relative to the pins
const int pinSwitch = 5;
const int led = 8;

void setup () {
  // Declaration of I/O devices
  pinMode(led, OUTPUT);             // LED → pin 8
  pinMode(pinSwitch, INPUT_PULLUP); // Switch → pin 5

  /*
   * NOTE: as pinSwitch is declared as INPUT_PULLUP, we have to
   * remember that all logic involving it will be reversed.
   */
}

void loop () {
  int switchState; // variable to store the state of the push switch

  switchState = digitalRead(pinSwitch); // read state of push switch
  
  while (switchState == LOW) { // while push switch pressed (inverted logic)
    digitalWrite(led, HIGH);   // LED on
    delay(400);                // remain on for 400ms

    digitalWrite(led, LOW);    // LED off
    delay(400);                // remain on for 400ms

    // re-read the state of the push switch in order to re-evaluate the
    // while() condition.
    switchState = digitalRead(pinSwitch);
  }
}

