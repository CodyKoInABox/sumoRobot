int sensorEsquerda = A3;
int sensorDireita = A4;


int motorEsquerda = 7;
int motorDireita = 4;

int leituraEsquerda = 0;
int leituraDireita = 0;


void setup() {
  
Serial.begin(9600);
delay(100);
}

void loop() {
  //delay pro tinkercad nao travar tranto
  delay(20);
  
  leituraEsquerda = analogRead(sensorEsquerda);
  leituraDireita = analogRead(sensorDireita);

  Serial.print("Sensor esquerda: ");
  Serial.print(leituraEsquerda);
  Serial.print("  Sensor direita: ");
  Serial.println(leituraDireita);

   if(leituraEsquerda > 200 || leituraDireita > 200){
        analogWrite(motorEsquerda, 200);
        analogWrite(motorDireita, 200);
   }
   else{
        analogWrite(motorEsquerda, 0);
        analogWrite(motorDireita, 0);
   }
}
