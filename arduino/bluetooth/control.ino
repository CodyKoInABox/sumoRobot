#include "SoftwareSerial.h"
#include "SuperMotor.h"

byte velocidade = 255;

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
            motorDireito.velocidadeFrente(velocidade);
            motorEsquerdo.velocidadeFrente(velocidade);
      break;

      case 'B':
            motorDireito.velocidadeTras(velocidade);
            motorEsquerdo.velocidadeTras(velocidade);
      break;

      case 'R':
            motorDireito.velocidadeTras(velocidade);
            motorEsquerdo.velocidadeFrente(velocidade);
      break;

      case 'L':
            motorDireito.velocidadeFrente(velocidade);
            motorEsquerdo.velocidadeTras(velocidade);
      break;

      case 'W':
            motorDireito.velocidadeFrente(255);
            motorEsquerdo.velocidadeFrente(255);
      break;

      case 'S':
            motorDireito.velocidadeTras(255);
            motorEsquerdo.velocidadeTras(255);
      break;

      case 'D':
            motorDireito.velocidadeTras(255);
            motorEsquerdo.velocidadeFrente(255);
      break;

      case 'A':
            motorDireito.velocidadeFrente(255);
            motorEsquerdo.velocidadeTras(255);
      break;
      
      case '0':
      case 'o':
             motorDireito.parar();
             motorEsquerdo.parar();
      break;

      case 'T':
                if(velocidade <= 245){
                velocidade += 10;
                }
      break;

      case 'Y':
                if(velocidade >= 90){
                velocidade -= 10;
                }
      break;
    }
    
    //Serial.println(bluetooth.available());
}
