#ifndef gpsdata
#define gpsdata 
#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

const int RXPin = 3; 
const int TXPin = 4;
const uint32_t GPSBaud = 9600; //Default baud of NEO-6M is 9600
void getGpsData();
void getSpeed();



#endif 