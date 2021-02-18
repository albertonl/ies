// Constant values relative to pin numbers
const int buzzer = 3;
const int pushSwitch = 8;

// Alternative to std::pair in C++
unsigned long first;  // this will be the starting time
unsigned long second; // and this will be the current time

/*
struct pair {
  unsigned long first;  // this will be starting time
  unsigned long second; // and this will be the current time
} ms;         // we save it as a variable
*/

/*
 * Note: millis() returns an unsigned long value. Thus, our pair
 * struct will use that data type for its members, in order to avoid
 * any logic errors.
 */

void setup () {
  // Initialization of I/O devices:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pushSwitch, INPUT_PULLUP);

  /*
   * Note: as the push switch has been declared INPUT_PULLUP, we
   * have to remember that all logic involving it will be reversed.
   */

  // set starting time before going into the loop() function.
  first = millis();
}

void loop () {
  second = millis();
  int input = digitalRead(pushSwitch);

  if (input == LOW) {
    // button is pressed, reset time count
    first = millis();
    second = 0;
  }
  else if (second - first > 10000) {
    // button is not pressed, check if more than 10 seconds have passed
    // since the last time the button was pressed. (10,000ms = 10s)

    // if more than 10 seconds have passed, turn buzzer on for 1 sec
    digitalWrite(buzzer, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);
  }
}

