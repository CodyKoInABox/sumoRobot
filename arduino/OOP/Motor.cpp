#include "Motor.h"

    void Motor :: frente(){
        digitalWrite(pinFrente, HIGH);
    }

    void Motor :: tras(){
        digitalWrite(pinTras, HIGH);
    }

    void Motor :: enable(){
        digitalWrite(enablePin, HIGH);
    }

    void Motor :: parar(){
        digitalWrite(pinFrente, LOW);
        digitalWrite(pinTras, LOW);
    }

    void Motor :: disable(){
        digitalWrite(enablePin, LOW);
    }

    void Motor :: setPinFrente(int value){
        pinFrente = value;
    }

    void Motor :: setPinTras(int value){
        pinTras = value;
    }

    int Motor :: getPinFrente(){
        return pinFrente;
    }
    
    int Motor :: getPinTras(){
        return pinTras;
    }

    void Motor :: setEnablePin(int value){
        enablePin = value;
    }

    int Motor :: getEnablePin(){
        return enablePin;
    }

    Motor :: Motor(int setPinFrente, int setPinTras, int setEnablePin){
        pinFrente = setPinFrente;
        pinTras = setPinTras;
        enablePin = setEnablePin;
    }