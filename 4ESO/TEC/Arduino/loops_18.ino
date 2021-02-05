/*
 * loops_18.ino
 * An LED and a buzzer will be turned on and off alternatively (every 300ms),
 * as long as both push switches are pressed at the same time.
 * 
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 * 
 * Modified 3 Feb 2021
 * Alberto Navalón Lillo
 */

// INPUT PINS
const int pushSwitch1 = 8;
const int pushSwitch2 = 9;

// OUTPUT PINS
 const int led = 3;
 const int buzzer = 4;

 void setup () {
  // Declaration of I/O devices
  pinMode(pushSwitch1, INPUT_PULLUP);
  pinMode(pushSwitch2, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  /*
   * Both push switches are declared as INPUT_PULLUP. Thus, the
   * logic involving them will be reversed.
   */
 }


void loop () {
  // Read and store state of both push switches
  int input1 = digitalRead(pushSwitch1);
  int input2 = digitalRead(pushSwitch2);
  
  while (input1 == LOW && input2 == LOW) {
    // Both switches are pressed (reversed logic)

    digitalWrite(led, HIGH);      // turn LED on
    delay(300);                   // wait 300ms
    digitalWrite(led, LOW);       // turn LED off
    digitalWrite(buzzer, HIGH);   // and buzzer on
    delay(300);                   // wait 300ms
    digitalWrite(buzzer, LOW);    // turn buzzer off

    // Read again the state of both push switches in order for
    // it to be re-evaluated.
    input1 = digitalRead(pushSwitch1);
    input2 = digitalRead(pushSwitch2);
  }
}
