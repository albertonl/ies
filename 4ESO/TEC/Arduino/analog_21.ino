/*
 * analog_21.ino
 * The resistance of an NTC will be read and shown on the serial
 * monitor interface every 1 second.
 * 
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 * 
 * Modified 5 Feb 2021
 * Alberto Navalón Lillo
 */

// NTC connected at pin A2 (analog 2)
const int ntc = A2;

void setup () {
  Serial.begin(9600); // begin serial communication at a 9600 bits/sec rate
}

void loop () {
  int ntcState = analogRead(ntc); // store state of NTC

  Serial.println(ntcState);       // show NTC value (resistance)
  delay(1000);                    // wait 1 second
}

