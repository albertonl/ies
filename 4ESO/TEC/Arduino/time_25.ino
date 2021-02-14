/*
 * time_25.ino
 * This program will show the number of milliseconds since the
 * beginning of the execution of the program on the serial monitor
 * within 1-second intervals.
 *
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 *
 * Modified 14 Feb 2021
 * Alberto Navalón Lillo (add comments)
 */

// This variable will store the number of milliseconds since
// the program started running:
unsigned long time_ms;

void setup () {
  Serial.begin(9600); // begin serial communication at a 9600 bits/sec rate
}

void loop () {
  Serial.print("Time (ms): ");
  time_ms = millis();      // Save the number of milliseconds since
                           // the beginning of the program.
  Serial.println(time_ms); // Show the previously stored value on screen
  delay(1000);             // Wait for one second.
}

