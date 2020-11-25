/*
  serial_3.ino
  Shows the message "HELLO WORLD" indefinitely on the serial monitor every 1000ms.

  This code is distributed under the MIT License.
  For more information, please refer to:
  https://albertonl.github.io/ies/4ESO/TEC/Arduino/

  Modified 20 Nov 2020
  by Alberto Navalón Lillo
*/

void setup() {
  Serial.begin(9600); // set up serial communication at a 9600 bits/second rate
}

void loop() {
  Serial.println("HELLO WORLD");  // display the message "HELLO WORLD" on the serial monitor and jump to a new line
  delay(1000);                    // wait for 1000ms (1s) before repeating the loop() function
}
