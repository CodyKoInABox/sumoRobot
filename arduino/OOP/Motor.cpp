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

void Motor :: setPin(int value){
    pin = value;
}

int Motor :: getPin(){
    return pin;
}

void Motor :: setEnablePin(int value){
    enablePin = value;
}

int Motor :: getEnablePin(){
    return enablePin;
}