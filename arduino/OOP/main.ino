#include "Motor.h"
#include "Sensor.h"



void setup(){
  Serial.begin(9600);
  
}

void loop(){

  Serial.println(readSensor(SensorFrente));

  mainFunction();
  
}