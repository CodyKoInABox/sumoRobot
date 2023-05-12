#ifndef Sensor_h
#define Sensor_h

#include <Arduino.h>

class Sensor{
    private:

    int pin;

    public:

    int leitura();

    void setPin(int value);

    int getPin();

    Sensor(int setPin);

}

#endif