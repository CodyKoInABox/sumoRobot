#include "SoftwareSerial.h"
#include "SuperMotor.h"

SuperMotor motorDireito(10, 9, 11);
SuperMotor motorEsquerdo(6, 5, 7);

#define TX 4// TX PORT GOES HERE
#define RX 3// RX PORT GOES HERE

SoftwareSerial bluetooth(TX, RX);

int incomingByte;


void setup(){
    Serial.begin(9600);
    bluetooth.begin(9600);

    motorDireito.enable();
    motorEsquerdo.enable();
}

void loop(){
    Serial.println(bluetooth.read());

    incomingByte = bluetooth.read();

    switch(incomingByte){
        case 'F':
        case 'W':
            motorDireito.parar();
            motorEsquerdo.parar();
            bluetooth.println("FORWARD");
            motorDireito.frente();
            motorEsquerdo.frente();
        break;

        case 'R':
        case 'D':
            motorDireito.parar();
            motorEsquerdo.parar();
            bluetooth.println("RIGHT");
            motorDireito.tras();
            motorEsquerdo.frente();
        break;

        case 'L':
        case 'A':
            motorDireito.parar();
            motorEsquerdo.parar();
            bluetooth.println("LEFT");
            motorDireito.frente();
            motorEsquerdo.tras();
        break;

        case 'B':
        case 'S':
            motorDireito.parar();
            motorEsquerdo.parar();
            bluetooth.println("BACKWARDS");
            motorDireito.tras();
            motorEsquerdo.tras();
        break;
    }

}
