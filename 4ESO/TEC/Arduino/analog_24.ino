/*
 * analog_24.ino
 * This program controls the light intensity of an LED by means of a
 * potentiometer. The higher the resistance, the brighter the light
 * will become, and vice versa.
 *
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 *
 * Modified 5 Feb 2021
 * Alberto Navalón Lillo
 */

// Constant values relative to pin numbers
const int pot = A2; // potentiometer → pin A2
const int led = A3; // LED           → pin A3

void setup () {
  // Both devices are analog, so we don't
  // need to declare anything here.
}

void loop () {
  // Store value (resistance) of potentiometer
  int val = analogRead(pot); 
  
  // Map the state of the potentiometer to a usable value
  // for analogWrite().
  /*
    ARGUMENTS:
      val  → value to be mapped
      0    → minimum possible value of val
      1023 → maximum possible value of val
      0    → minimum possible value after conversion
      255  → maximum possible value after conversion
  */
  val = map(val, 0, 1023, 0, 255);
  
  // Write the converted value to the LED (light intensity)
  analogWrite(led, val);
}
