#ifndef car
#define car 
#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif
//pin definetion
#define UP_RIGHT_WHEEL 12
#define DOWN_RIGHT_WHEEL 13
#define  UP_LEFT_WHEEL 12
#define DOWN_LEFT_WHEEL 13
#define PWM_RIGHT 
#define PWM_LEFT 11
//end pin definetion 

//function def 
void goForward();
void goBackward();
void stop();
void restCarAction();
void pinsSetup();
// will connect the EN pin of the motor driver to a 5v full speed 

//end function def 

#endif 