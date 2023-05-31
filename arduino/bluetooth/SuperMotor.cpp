#include "SuperMotor.h"

    void SuperMotor :: frente(){
        digitalWrite(pinFrente, HIGH);
    }

    void SuperMotor :: tras(){
        digitalWrite(pinTras, HIGH);
    }

    void SuperMotor :: velocidadeFrente(int velocidade){
        analogWrite(pinFrente, velocidade);
    }

    void SuperMotor :: velocidadeTras(int velocidade){
        analogWrite(pinTras, velocidade);
    }

    void SuperMotor :: enable(){
        digitalWrite(enablePin, HIGH);
    }

    void SuperMotor :: parar(){
        digitalWrite(pinFrente, LOW);
        digitalWrite(pinTras, LOW);
    }

    void SuperMotor :: disable(){
        digitalWrite(enablePin, LOW);
    }

    void SuperMotor :: setPinFrente(int value){
        pinFrente = value;
    }

    void SuperMotor :: setPinTras(int value){
        pinTras = value;
    }

    int SuperMotor :: getPinFrente(){
        return pinFrente;
    }
    
    int SuperMotor :: getPinTras(){
        return pinTras;
    }

    void SuperMotor :: setEnablePin(int value){
        enablePin = value;
    }

    int SuperMotor :: getEnablePin(){
        return enablePin;
    }

    SuperMotor :: SuperMotor(int setPinFrente, int setPinTras, int setEnablePin){
        pinFrente = setPinFrente;
        pinTras = setPinTras;
        enablePin = setEnablePin;
    }