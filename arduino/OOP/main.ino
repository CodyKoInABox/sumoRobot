#include "SuperMotor.h"
#include "Sensor.h"
#include "memory.h"


#define SECRET_1 212
#define SECRET_2 500
#define SECRET_3 2500
#define SECRET_4 40
#define SECRET_5 980


#define LUZ SECRET_5
#define DISTANCIA SECRET_4


Sensor sensorFrente(A2);
Sensor sensorDireito(A1);
Sensor sensorEsquerdo(A0);

SuperMotor motorDireito(10, 9, 11);
SuperMotor motorEsquerdo(6, 5, 7);


void setup(){

  Serial.begin(9600);

  motorDireito.enable();
  motorEsquerdo.enable();
  
  bool firstTime = true;

}


void loop(){

    mainFunction();

}


void mainFunction(){

    if(sensorDireito.menorQue(LUZ) || sensorEsquerdo.menorQue(LUZ)){

      motorDireito.parar();
      motorEsquerdo.parar();

      if(sensorFrente.maiorQue(DISTANCIA)){
        motorDireito.parar();
        motorEsquerdo.parar();

        motorDireito.velocidadeFrente(SECRET_1);
        motorEsquerdo.velocidadeTras(SECRET_1);

        firstTime = true;

      }else{

        if(firstTime){

          motorDireito.parar();
          motorEsquerdo.parar();

          motorDireito.tras();
          motorEsquerdo.frente();

          delay(SECRET_2);

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
      
      delay(SECRET_3);
    }

}