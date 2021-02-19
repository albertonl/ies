/*
 * time_26.ino
 * A buzzer will be turned on for one second every time a push
 * switch remains unpressed for more than 10 seconds.
 * 
 * This code is distributed under the MIT License.
 * For more information, please refer to:
 * https://albertonl.github.io/ies/4ESO/TEC/Arduino
 * 
 * Modified 17 Feb 2021
 * Alberto Navalón Lillo
 * 
 * Modified 19 Feb 2021
 * Alberto Navalón Lillo (fix time reset bug)
 */

// Constant values relative to pin numbers
const int buzzer = 3;
const int pushSwitch = 8;

// Alternative to std::pair in C++
struct pair {
  unsigned long first;  // this will be starting time
  unsigned long second; // and this will be the current time
} ms;                   // we save it as a variable


/*
 * Note: millis() returns an unsigned long value. Thus, our pair
 * struct will use that data type for its members, in order to avoid
 * any logic errors.
 */

void setup () {
  // Initialization of I/O devices:
  pinMode(buzzer, OUTPUT);
  pinMode(pushSwitch, INPUT_PULLUP);

  /*
   * Note: as the push switch has been declared INPUT_PULLUP, we
   * have to remember that all logic involving it will be reversed.
   */

  // set starting time before going into the loop() function.
  ms.first = millis();
}

void loop () {
  ms.second = millis();
  int input = digitalRead(pushSwitch);

  if (input == LOW) {
    // button is pressed, reset time count
    ms.first = millis();
    ms.second = 0;
  }
  else if (ms.second - ms.first > 10000) {
    // button is not pressed, check if more than 10 seconds have passed
    // since the last time the button was pressed. (10,000ms = 10s)

    // if more than 10 seconds have passed, turn buzzer on for 1 sec
    digitalWrite(buzzer, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);

    // once the buzzer has stopped, reset time count
    ms.first = millis();
    ms.second = 0;
  }
}
