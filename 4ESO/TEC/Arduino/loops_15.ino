/*
 * loops_15.ino
 * This program will indefinitely show all EVEN numbers between
 * 1 and 30 in descending order on the serial monitor interface.
 * 
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/4ESO/TEC/Arduino
 * 
 * Modified 20 Jan 2021
 * Alberto Navalón Lillo (add comments)
 */

void setup () {
  Serial.begin(9600); // begin serial communication at a 9600 bits/sec rate
}

void loop () {
  // iterate from 30 through 1 (descending) by steps of
  // 2 [less] units per iteration (only EVEN numbers)
  for (int i = 30; i > 0; i-=2) {
    Serial.println(i);          // show the current index on screen
    delay(300);                 // 300ms (0.3s) delay, mainly for readability purposes
  }
}

