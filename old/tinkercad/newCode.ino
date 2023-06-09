const int sensorEsquerda = A3;
const int sensorDireita = A4;
const int sensorFrente = 7;


const int motorEsquerda = 4;
const int motorDireita = 2;

int leituraEsquerda = 0;
int leituraDireita = 0;
int leituraFrente = 0;


void setup() {
  
Serial.begin(9600);
delay(100);
}

void loop() {
  
  //sensor frontal
  
  long duration, cm;


  pinMode(sensorFrente, OUTPUT);
  digitalWrite(sensorFrente, LOW);
  delayMicroseconds(2);
  digitalWrite(sensorFrente, HIGH);
  delayMicroseconds(5);
  digitalWrite(sensorFrente, LOW);

  pinMode(sensorFrente, INPUT);
  duration = pulseIn(sensorFrente, HIGH);

  cm = microsecondsToCentimeters(duration);
  
  
  
  //sensores laterais
  
  leituraEsquerda = analogRead(sensorEsquerda);
  leituraDireita = analogRead(sensorDireita);
  leituraFrente = cm;

  Serial.print("Sensor esquerda: ");
  Serial.print(leituraEsquerda);
  Serial.print("  Sensor direita: ");
  Serial.print(leituraDireita);
  Serial.print(" Sensor Frente: ");
  Serial.print(leituraFrente);
  Serial.println("cm.");

   if(leituraEsquerda > 200 || leituraDireita > 200){
        analogWrite(motorEsquerda, 200);
        analogWrite(motorDireita, 200);
   }
   else{
        analogWrite(motorEsquerda, 0);
        analogWrite(motorDireita, 0);
   }
  
  //delay pro tinkercad nao travar tranto
  delay(100);
}


long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
