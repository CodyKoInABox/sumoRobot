#include "Sensor.h"

    int Sensor :: leitura(){
        return analogRead(pin);
    }

    void Sensor :: setPin(int valor){
        pin = value;
    }

    int Sensor :: getPin(){
        return pin;
    }

    bool Sensor :: maiorQue(int valor){
        return leitura() > valor;
    }

    bool Sensor :: menorQue(int valor){
        return leitura() < valor;
    }

    Sensor :: Sensor(int setPin){
        pin = setPin;
    }