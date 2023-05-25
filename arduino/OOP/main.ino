#include "SuperMotor.h"
#include "Sensor.h"



Sensor sensorFrente(A2);
Sensor sensorDireito(A1);
Sensor sensorEsquerdo(A0);

SuperMotor motorDireito(10, 9, 11);
SuperMotor motorEsquerdo(6, 5, 7);

bool firstTime = true;

void setup(){

  Serial.begin(9600);

  motorDireito.enable();
  motorEsquerdo.enable();
  
  

}


void loop(){

    mainFunction();

}


void mainFunction(){

    if(sensorDireito.menorQue(500) || sensorEsquerdo.menorQue(500)){

      motorDireito.parar();
      motorEsquerdo.parar();

      if(sensorFrente.maiorQue(120)){
        motorDireito.parar();
        motorEsquerdo.parar();

        motorDireito.velocidadeFrente(130);
        motorEsquerdo.velocidadeTras(130);

        firstTime = true;

      }else{

        if(firstTime){

          motorDireito.parar();
          motorEsquerdo.parar();

          motorDireito.tras();
          motorEsquerdo.frente();

          delay(60);

          motorDireito.parar();
          motorEsquerdo.parar();
        }

        firstTime = false;

        motorDireito.frente();
        motorEsquerdo.frente();

      }

    }else{

      motorDireito.parar();
      motorEsquerdo.parar();

      motorDireito.tras();
      motorEsquerdo.tras();
      
      delay(420);
    }

}
