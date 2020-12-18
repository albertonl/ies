/*
 * diginput_8.ino
 * Every 1000ms, the state of the push switch on pin 8 is read and then the
 * opposite state is shown on screen in an integer format.
 * 
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/4ESO/TEC/Arduino
 * 
 * Modified 18 Dec 2020
 * Alberto Navalón Lillo (add comments)
 */

const int pushSwitch = 8; // pin number for the push switch

void setup() {
  Serial.begin(9600); // begin serial communication at a 9600 bits/sec rate
  pinMode(8, INPUT);  // we define the push switch (pin number passed from
                      //variable) as a digital input
}

void loop() {
  int input = digitalRead(pushSwitch); // we store the state of the push switch
                                       // in an integer variable
  Serial.println(input);               // and then we display it on the serial
                                       // monitor.
  delay(1000);                         // wait for 1000ms (1s)
}

