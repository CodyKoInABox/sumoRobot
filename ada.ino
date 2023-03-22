int sensorEsquerda = A0;
int sensorDireita = A1;


int motorEsquerda = A3;
int motorDireita = A4;

int leituraEsquerda = 0;
int leituraDireita = 0;


void setup() {
  
Serial.begin(9600);
delay(100);
}

void loop() {
  
  leituraEsquerda = analogRead(sensorEsquerda);
  leituraDireita = analogRead(sensorDireita);

  Serial.print("Sensor esquerda: ");
  Serial.print(leituraEsquerda);
  Serial.print("  Sensor direita: ");
  Serial.println(leituraDireita);

//  digitalWrite(motorEsquerda, HIGH);
//  digitalWrite(motorDireita, HIGH);

   if(leituraEsquerda > 200 || leituraDireita > 200){
      digitalWrite(motorEsquerda, HIGH);
      digitalWrite(motorDireita, HIGH);
   }
   else{
      digitalWrite(motorEsquerda, LOW);
      digitalWrite(motorDireita, LOW);
   }
}
