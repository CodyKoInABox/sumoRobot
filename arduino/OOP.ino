class Motor{
   public:

   int pin;
   int enable;

   void on(){
    digitalWrite(this->pin, HIGH);
   }

   void off(){
    digitalWrite(this->pin, LOW);
   }

   void enable(){
    digitalWrite(this->enable, HIGH);
   }

   void disable(){
    digitalWrite(this->enable, LOW);
   }

   Motor(int setPin, int setDefine){
    pin = setPin;
    define = setDefine;
   }
}

class Sensor{
    public:

    int pin;

    int leitura(){
        return analogRead(this->pin);
    }
}