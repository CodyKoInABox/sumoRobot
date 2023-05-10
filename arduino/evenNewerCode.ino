#define MotorEsquerdoTras 5
#define MotorEsquerdoFrente 6

#define MotorDireitoFrente 10
#define MotorDireitoTras 9

#define MotorDireitoDefine 11
#define MotorEsquerdoDefine 7

#define SensorFrente A2
#define SensorDireito A1
#define SensorEsquerdo A0

// LUZ = THRESHOLD DA LINHA BRANCA (menor que isso = esta na branca)
#define LUZ 500

// DISTANCIA = THRESHOLD DA DISTANCIA PRO SENSOR FRONTAL
#define DISTANCIA 120

void setup(){
  Serial.begin(9600);
  motorSetup(MotorDireitoDefine, MotorEsquerdoDefine);
 
}

void loop(){

  Serial.println(readSensor(SensorFrente));

  mainFunction();
  
}

// inicio das funcoes basicas !!NAO MEXER!!

int readSensor(int sensorPIN){
  return analogRead(sensorPIN);
}

void motorSetup(int motorENA, int motorENB){
   digitalWrite(motorENA, HIGH);
   digitalWrite(motorENB, HIGH);
  }

void motorOn(int motorPIN){
   digitalWrite(motorPIN, HIGH);
}

void motorOff(int motorPIN){
   digitalWrite(motorPIN, LOW);
}

bool estaNaLinhaBranca(int leituraSensor, int luz){
  return leituraSensor <= luz;
}

bool temAlgoNaFrente(int leituraSensor, int distancia){
  return leituraSensor >= distancia;
}


// fim das funcoes basicas !!NAO MEXER!!


void girarOn(int motorFrente, int motorTras){
  motorOn(motorFrente);
  motorOn(motorTras);
}

void girarOff(int motorFrente, int motorTras){
  motorOff(motorFrente);
  motorOff(motorTras);
}

void girarEnquantoNaoTemNadaNaFrente(bool temAlgoNaFrente, int motorFrente, int motorTras){
  if(temAlgoNaFrente == 1){
    girarOff(motorFrente, motorTras);
    motorOn(MotorDireitoFrente);
    motorOn(MotorEsquerdoFrente);
  }
  else{
    motorOff(MotorDireitoFrente);
    motorOff(MotorEsquerdoFrente);
    girarOn(motorFrente, motorTras);
  }
}

// girar ate encontrar outro robo e entao ir reto
// caso encontre linha branca, dar a re e voltar a girar

bool firstTime = true;

void mainFunction(){

    if(!estaNaLinhaBranca(readSensor(SensorEsquerdo), LUZ) || !estaNaLinhaBranca(readSensor(SensorDireito), LUZ)){
        motorOff(MotorDireitoTras);
        motorOff(MotorEsquerdoTras);
      

          if(!temAlgoNaFrente( readSensor(SensorFrente), DISTANCIA  )){
        motorOff(MotorDireitoFrente);
        motorOff(MotorEsquerdoFrente);
        
        //girarOn(MotorDireitoFrente, MotorEsquerdoTras);
         analogWrite(MotorDireitoFrente, 130);
         analogWrite(MotorEsquerdoTras, 130);

         firstTime = true;
        
      }
    else{


        if(firstTime){
          girarOff(MotorDireitoFrente, MotorEsquerdoTras);

          girarOn(MotorDireitoTras, MotorEsquerdoFrente);
          delay(60);
          girarOff(MotorDireitoTras, MotorEsquerdoFrente);
        }
       
        firstTime = false;
      
              motorOn(MotorDireitoFrente);
              motorOn(MotorEsquerdoFrente);
              
         

      }

     
    }else{
      //ELSE = ESTA NA LINHA BRANCA

      
        motorOff(MotorDireitoFrente);
        motorOff(MotorEsquerdoFrente);
        girarOff(MotorDireitoFrente, MotorEsquerdoTras);

        motorOn(MotorDireitoTras);
        motorOn(MotorEsquerdoTras);
        delay(420);
    
    }
  
  }
