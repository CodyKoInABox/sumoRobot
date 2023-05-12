#include "Sensor.h"

    int Sensor :: leitura(){
        return analogRead(pin);
    }

    void Sensor :: setPin(int value){
        pin = value;
    }

    int Sensor :: getPin(){
        return pin;
    }

    Sensor :: Sensor(int setPin){
        pin = setPin;
    }