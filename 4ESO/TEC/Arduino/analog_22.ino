/*
 * analog_22.ino
 * An LED will be on while an LDR detects a dark environment.
 * When the environment is sufficiently bright again, the LED will
 * be turned off.
 *
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 *
 * Modified 5 Feb 2021
 * Alberto Navalón Lillo
 */

// Constant values relative to pin numbers
const int ldr = A2; // LDR connected on pin A2
const int led = 3;  // LED connected on pin 3

void setup () {
  // Declaration of digital I/O devices
  pinMode(led, OUTPUT);
  
  Serial.begin(9600); // begin serial communication at a 9600 bits/sec rate
}

void loop () {
  int ldrState = analogRead(ldr); // store the value (resistance) of the LDR
  
  if (ldrState > 700) {      // 700 as an arbitrary value to denote "dark"
    digitalWrite(led, HIGH); // turn LED on
  } else {
    digitalWrite(led, LOW);  // it's dark, turn LED off
  }
}
