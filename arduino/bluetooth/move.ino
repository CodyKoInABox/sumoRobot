#include "SoftwareSerial.h"
#include "SuperMotor.h"

//THE SuperMotor DOCUMENTATION CAN BE FOUND HERE: https://github.com/CodyKoInABox/sumoRobot/tree/main/arduino/OOP
SuperMotor motorDireito(10, 9, 11);
SuperMotor motorEsquerdo(5, 6, 7);

#define TX 4// HC-05 BLUETOOTH MODULE'S TX PORT GOES HERE
#define RX 3// HC-05 BLUETOOTH MODULE'S RX PORT GOES HERE

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
