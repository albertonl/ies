/*
 * analog_20.ino
 * The resistance of an LDR will be read and shown on the serial
 * monitor every 1 second.
 * 
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 * 
 * Modified 5 Feb 2021
 * Alberto Navalón Lillo
 */

// LDR connected at pin A2 (analog 2)
const int ldr = A2;

void setup () {
  Serial.begin(9600); // begin serial communication at a 9600 bits/sec rate
}

void loop () {
  int ldrState = analogRead(ldr); // store state of LDR

  Serial.println(ldrState);       // show LDR value (resistance)
  delay(1000);                    // wait 1 second
}

