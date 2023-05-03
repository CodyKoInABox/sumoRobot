#define MotorEsquerdoTras 5
#define MotorEsquerdoFrente 6

#define MotorDireitoFrente 10
#define MotorDireitoTras 9

#define MotorDireitoDefine 11
#define MotorEsquerdoDefine 7

#define SensorFrente A2
#define SensorDireito A1
#define SensorEsquerdo A0

#define LUZ 500 

void setup(){
  Serial.begin(9600);
  motorSetup(MotorDireitoDefine, MotorEsquerdoDefine);
 
}

void loop(){

Serial.print(estaNaLinhaBranca(readSensor(SensorDireito), LUZ));
Serial.print("     ");
Serial.println(estaNaLinhaBranca(readSensor(SensorEsquerdo), LUZ));

  
}

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



bool estaNaLinhaBranca(int sensor, int luz){

return sensor <= luz;
}



