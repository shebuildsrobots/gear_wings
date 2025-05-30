#include <Stepper.h>

int stepsPerRevolution = 2048;

// initialize for Trinket 5V pins
// pin order IN1, IN3, IN2, IN4
Stepper myStepper (stepsPerRevolution, 0, 3, 1, 4 );

void setup() {
  // Rotate counter-clockwise at 15 rpm
  myStepper.setSpeed(15);
}

void loop() {
  myStepper.step(-stepsPerRevolution);
}
