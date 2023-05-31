#include "SoftwareSerial.h"
#include "SuperMotor.h"

SuperMotor motorDireito(10, 9, 11);
SuperMotor motorEsquerdo(6, 5, 7);

#define TX // TX PORT GOES HERE
#define RX // RX PORT GOES HERE

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
    if(bluetooth.available() > 0){

        incomingByte = bluetooth.read();

        //MOVE FORWARD
        if (incomingByte == 'F') {
      bluetooth.println("FORWARD");
      motorDireito.frente();
      motorEsquerdo.frente();
    }

    }
}

// VALUES FOR THE ANDROID APP "Bluetooth RC Controller"
// FORWARD = 70
// BACKWARD = 66
// LEFT = 76
// RIGHT = 82
