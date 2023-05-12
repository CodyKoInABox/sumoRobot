#include "Motor.h"

Motor :: Motor(int setPin, int setEnable){
    pin = setPin;
    enablePin = setEnable;
}

void Motor :: on(){
    digitalWrite(pin, HIGH);
}

void Motor :: off(){
    digitalWrite(pin, LOW);
}

void Motor :: enable(){
    digitalWrite(setEnable, HIGH);
}

void Motor :: disable(){
    digitalWrite(setEnable, LOW);
}