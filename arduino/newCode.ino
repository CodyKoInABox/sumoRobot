#define MotorEsquerdoTras 5
#define MotorEsquerdoFrente 6

#define MotorDireitoFrente 10
#define MotorDireitoTras 9

#define MotorDireitoDefine 11
#define MotorEsquerdoDefine 7

#define SensorFrente A2
#define SensorDireito A1
#define SensorEsquerdo A0

// LUZ = THREASHHOLD DA LINHA BRANCA NAO SEI ESCREVER THREADSHOLD
#define LUZ 500

// DISTANCIA = THREASHHOLD DA DISTANCIA PRO SENSOR FRONTAL NAO SEI ESCREVER THREADSHOLD
#define DISTANCIA 120

void setup(){
  Serial.begin(9600);
  motorSetup(MotorDireitoDefine, MotorEsquerdoDefine);
 
}

void loop(){

Serial.println(temAlgoNaFrente(readSensor(SensorFrente), DISTANCIA));

  
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



