#define MotorEsquerdoIN1 5
#define MotorEsquerdoIN2 6

#define MotorDireitoIN3 10
#define MotorDireitoIN4 9

#define SensorFrente A2
#define SensorDireito A1
#define SensorEsquerdo A0

void setup(){
  Serial.begin(9600);
  pinMode(MotorEsquerdoIN1, OUTPUT);
  pinMode(MotorEsquerdoIN2, OUTPUT);

  pinMode(MotorDireitoIN3, OUTPUT);
  pinMode(MotorDireitoIN4, OUTPUT);

}

void loop(){

Serial.print(readSensor(SensorDireito));
Serial.print("     ");
Serial.println(readSensor(SensorEsquerdo));
  
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
