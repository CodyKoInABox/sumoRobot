#ifndef Sensor_h
#define Sensor_h

#include <Arduino.h>

class Sensor{
    private:

    int pin;

    public:

    int leitura();

    void setPin(int valor);

    int getPin();

    bool maiorQue(int valor);

    bool menorQue(int valor);

    Sensor(int setPin);

}

#endif