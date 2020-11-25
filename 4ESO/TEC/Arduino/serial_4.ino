/*
  serial_4.ino
  Shows the following message ONCE on the serial monitor:
    "My name is:
     Darth Vader.
     I'm your father."
  
  This code is distributed under the MIT License.
  For more information, please refer to:
  https://albertonl.github.io/ies/4ESO/TEC/Arduino/
  
  Modified 20 Nov 2020
  by Alberto Navalón Lillo
  
  Modified 25 Nov 2020 (add comments)
  by Alberto Navalón Lillo
*/

void setup() {
  Serial.begin(9600); // set up serial communication at a 9600 bits/sec rate

  // Show message in three different lines
  Serial.println("My name is:");
  Serial.println("Darth Vader.");
  Serial.println("I'm your father.");
}

void loop() {
  /*
    As we only needed to display the message once,
    the code for that purpose remains in the setup()
    function, and we leave loop() empty.
  */
}
