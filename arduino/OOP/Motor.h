#ifndef Motor_h
#define Motor_h

#include <Arduino.h>

class Motor{
   private:

   int pin;
   int enablePin;

   public:

   void on();

   void off();

   void enable();

   void disable();

   void setPin(int value);

   int getPin();

   void setEnablePin(int value);

   int getEnablePin();

   Motor(int setPin, int setDefine);
}

#endif