#ifndef Motor_h
#define Motor_h

#include <Arduino.h>

class Motor{
   private:

   int pinFrente;
   int pinTras;
   int enablePin;

   public:

    void frente();

    void tras();

    void parar();

    void enable();

    void disable();

    void setPinFrente(int value);

    void setPinTras(int value);

    int getPinFrente();

    int getPinTras();

    void setEnablePin(int value);

    int getEnablePin();

    Motor(int setPinFrente, int setPinTras, int setEnablePin);
}

#endif