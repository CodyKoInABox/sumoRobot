#include "SoftwareSerial.h"
#include "SuperMotor.h"

//TX - RX
SoftwareSerial bluetooth(4, 3);

SuperMotor motorDireito(10, 9, 11);
SuperMotor motorEsquerdo(6, 5, 7);

void setup(){
    Serial.begin(9600);
    bluetooth.begin(9600);

    motorDireito.enable();
    motorEsquerdo.enable();
}

void loop(){
    //if(bluetooth.read() != -1){
    //  Serial.println(bluetooth.read());  
    //}

    switch(bluetooth.read()){
      case 'F':
            motorDireito.frente();
            motorEsquerdo.frente();
      break;

      case 'B':
            motorDireito.tras();
            motorEsquerdo.tras();
      break;

      case 'R':
            motorDireito.tras();
            motorEsquerdo.frente();
      break;

      case 'L':
            motorDireito.frente();
            motorEsquerdo.tras();
      break;

      case '0':
             motorDireito.parar();
            motorEsquerdo.parar();
      break;
    }
    
    //Serial.println(bluetooth.available());
}
