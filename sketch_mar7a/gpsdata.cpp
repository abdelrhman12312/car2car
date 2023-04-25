#include"gpsdata.h"
#include <TinyGPS++.h>
#include <SoftwareSerial.h>

TinyGPSPlus gps; // the TinyGPS++ object
SoftwareSerial gpsSerial(RXPin, TXPin); // the serial interface to the GPS device

void getGpsData() {

       Serial.print(F("- latitude: "));
        Serial.println(gps.location.lat());

        Serial.print(F("- longitude: "));
        Serial.println(gps.location.lng());


} 

void getSpeed() {

        Serial.print(gps.speed.kmph());
        Serial.println(F(" km/h"));  
}