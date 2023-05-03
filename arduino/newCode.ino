#define MotorEsquerdoIN1 5
#define MotorEsquerdoIN2 6

#define MotorDireitoIN3 10
#define MotorDireitoIN4 9



void setup(){
  Serial.begin(9600);
  pinMode(MotorEsquerdoIN1, OUTPUT);
  pinMode(MotorEsquerdoIN2, OUTPUT);

  pinMode(MotorDireitoIN3, OUTPUT);
  pinMode(MotorDireitoIN4, OUTPUT);

}

void loop(){
  motorSetup(7, 11);
  
  motorOn(MotorEsquerdoIN1);
  delay(2000);
  motorOff(MotorEsquerdoIN1);

  motorOn(MotorEsquerdoIN2);
  delay(2000);
  motorOff(MotorEsquerdoIN2);

  motorOn(MotorDireitoIN3);
  delay(2000);
  motorOff(MotorDireitoIN3);

  motorOn(MotorDireitoIN4);
  delay(2000);
  motorOff(MotorDireitoIN4);
  
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
