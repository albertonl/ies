/*
 * analog_19.ino
 * The state of a variable resistor will be read and shown on the serial
 * monitor every 1 second.
 * 
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 * 
 * Modified 3 Feb 2021
 * Alberto Navalón Lillo
 */

// potentiometer connected at pin A2 (analog 2)
const int pinPotentiometer = A2;

void setup () {
  Serial.begin(9600); // begin serial communication at a 9600 bits/sec rate
}

void loop () {
  int potentiometer = analogRead(pinPotentiometer); // store state of potentiometer
  Serial.println(potentiometer);                    // show potentiometer value on screen
  delay(1000);                                      // wait for one second
}

