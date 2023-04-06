// Portas driver motor
#define PININ1 3
#define PININ2 2
#define PININ3 7
#define PININ4 5
#define PINENA 4
#define PINENB 6

 

 

// Portas sensor QTR
#define Sd A0
#define Se A1
#define Sf A2

 

 

// Valores de ajustes para o seguidor de linha MIF
#define TRESHOLD 400                      // Valor de referencia para cor da linha branca
#define SPEED0 255                          // Valor de 0 a 255 para velocidade com a seguinte leitura do sensor (0 0 1 1 0 0) 
#define SPEED1 0                         // Valor de 0 a 255 para velocidade com a seguinte leitura do sensor (0 0 1 1 1 0)


 

void setup() {
  Serial.begin(9600);
}

 

 

void loop() {
  // TESTE 1°: leituta sensor
int s[2];
readSensors(true, s);
followLineMEF();

 

 

}

 

 

void motorControl(int speedLeft, int speedRight) {
  // Função para controle do driver de motor

 

 

  // Definições das portas digitais
  pinMode(PININ1, OUTPUT);
  pinMode(PININ2, OUTPUT);
  pinMode(PININ3, OUTPUT);
  pinMode(PININ4, OUTPUT);
  pinMode(PINENA, OUTPUT);
  pinMode(PINENB, OUTPUT);

 

 

  // Ajustes motor da esquerda
  if (speedLeft <= 0) {
    speedLeft = -speedLeft;
    digitalWrite (PININ3, HIGH);
    digitalWrite (PININ4, LOW);
  } else {
    digitalWrite (PININ3, LOW);
    digitalWrite (PININ4, HIGH);
  }

 

 

  // Ajustes motor da direita
  if (speedRight < 0) {
    speedRight = -speedRight;
    digitalWrite (PININ1, HIGH);
    digitalWrite (PININ2, LOW);
  } else {
    digitalWrite (PININ1, LOW);
    digitalWrite (PININ2, HIGH);
  }
  analogWrite (PINENA, speedLeft);
  analogWrite (PINENB, speedRight);
}

 

 

void motorOption(char option, int speedLeft, int speedRight) {
  // Função para controle de motor com pre definições
  switch (option) {
    case '8': // Frente
      motorControl(speedLeft, speedRight);
      break;
    case '2': // Tras
      motorControl(-speedLeft, -speedRight);
      break;
    case '4': // Esqueda
      motorControl(-speedLeft, speedRight);
      break;
    case '6': // Direita
      motorControl(speedLeft, -speedRight);
      break;
    case '0': // Parar
      motorControl(0, 0);
      break;
  }
}

 

 

void readSensors(bool readSerial, int *sensors) {
  // Função para leitura dos sensores
  sensors[0] = analogRead(Sd);
  sensors[1] = analogRead(Se);
  sensors[2] = analogRead(Sf);

 

 

  //if (readSerial) {
    Serial.print(sensors[0]);
    Serial.print(' ');
    Serial.print(sensors[1]);
    Serial.print(' ');
    Serial.print(sensors[2]);
    Serial.println(' ');
  //}
}

 

 

void followLineMEF(void) {
  // Função para controle do seguidor de linha em modo de maquina de estado finita
  bool flag = true;

 

 

  while (flag) {

 

 

    // Leitura sensores
    int s[3];
    readSensors(false, s);

 

 

//    int v1,v2,v3;
//
//    if (s[0] >= TRESHOLD){
//        v1 = 1;
//        }
//        else{
//          v1 = 0;
//         }
//    if (s[1] >= TRESHOLD){
//        v2 = 1;
//        }
//        else{
//          v2 = 0;
//         }
//
// 
//
//    if (v1==1 && v2==1) {
//      motorOption('8', SPEED0, SPEED0);
//
// 
//
//    } else if (v1==0 && v2==1) {
//      motorOption('8', SPEED1, SPEED1);
//
// 
//
//    } else if (v1==1 && v2==0) {
//      motorOption('8', SPEED1, SPEED1);
//    }

 

 

    if(s[0] >= 400 && s[1] >= 400){
       if(s[2] >= 100){
      motorOption('8', SPEED0, SPEED0);
    }
    else{
      motorOption('8', SPEED0, SPEED1);
    }
    }
    else{
      motorOption('8', SPEED1, SPEED1);
    }

 

  

 

    
  }
}