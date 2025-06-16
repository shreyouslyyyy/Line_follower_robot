#include <Motor_Shield.h>

// Motor setup (M1 = Left, M2 = Right)
DCMotor motorLeft(1);  
DCMotor motorRight(2); 

// IR sensor pins
const int irLeft = 2;
const int irRight = 5;

void setup() {
  pinMode(irLeft, INPUT);
  pinMode(irRight, INPUT);

  motorLeft.setSpeed(85);   // Adjust as needed
  motorRight.setSpeed(85);  // Adjust as needed
}

void loop() {
  int leftSensor = !digitalRead(irLeft);
int rightSensor = !digitalRead(irRight);

if (leftSensor == 1 && rightSensor == 1) {
  // Both see white: move forward
  motorLeft.setSpeed(85);  
  motorRight.setSpeed(85);
  motorLeft.run(FORWARD);
  motorRight.run(FORWARD);
} 
else if (leftSensor == 0 && rightSensor == 1) {
  // Left sees black: turn left
  motorLeft.setSpeed(80);
  motorRight.setSpeed(140);
  motorLeft.run(BACKWARD);
  motorRight.run(FORWARD);
} 
else if (leftSensor == 1 && rightSensor == 0) {
  // Right sees black: turn right
  motorLeft.setSpeed(140);
  motorRight.setSpeed(80);
  motorLeft.run(FORWARD);
  motorRight.run(BACKWARD);
} 
else {
  // Both see black: stop
  motorLeft.run(RELEASE);
  motorRight.run(RELEASE);
}


  delay(50); // small delay for stability
}
