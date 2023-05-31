#ifndef SuperMotor_h
#define SuperMotor_h

#include <Arduino.h>

class SuperMotor{
   private:

   int pinFrente;
   int pinTras;
   int enablePin;

   public:

    void frente();

    void tras();

    void velocidadeFrente(int velocidade);

    void velocidadeTras(int velocidade);

    void parar();

    void enable();

    void disable();

    void setPinFrente(int value);

    void setPinTras(int value);

    int getPinFrente();

    int getPinTras();

    void setEnablePin(int value);

    int getEnablePin();

    SuperMotor(int setPinFrente, int setPinTras, int setEnablePin);
};

#endif