#include <Stepper.h>

#define inD 25 
#define inC 26
#define inB 32
#define inA 33
const int stepsPerRevolution = 2038;

Stepper myStepper = Stepper(stepsPerRevolution, inB, inD, inA, inC);


void setup() {

}

void loop() {

myStepper.setSpeed(10);
	myStepper.step(stepsPerRevolution);
	delay(1000);
	
	// Rotate CCW quickly at 10 RPM
	myStepper.setSpeed(10);
	myStepper.step(-stepsPerRevolution);
	delay(1000);
}
