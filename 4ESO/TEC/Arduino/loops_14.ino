/*
 * loops_14.ino
 * This code will indefinitely print all integers from 0 through 9 in
 * increasing order on the serial monitor interface.
 * 
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 * 
 * Modified 20 Jan 2021
 * Alberto Navalón Lillo (add comments)
 */

void setup () {
  Serial.begin(9600); // begin serial communication at a 9600 bits/sec rate
}

void loop () {
  for (int i = 0; i < 10; i++) { // iterate from 0 through 9
    Serial.println(i);  // print current index on serial
    delay(300);         // delay for 300ms (0.3s), mainly for readability
  }

  /*
   * The loop() function will run indefinitely, and thus also the for loop,
   * repeating the entire process.
   */
}

