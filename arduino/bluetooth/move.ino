#include "SoftwareSerial.h"

#define TX // TX PORT GOES HERE
#define RX // RX PORT GOES HERE

SoftwareSerial bluetooth(TX, RX);

int incomingByte;


void setup(){
    Serial.begin(9600);
    bluetooth.begin(9600);
}

void loop(){
    Serial.println(bluetooth.read());
    if(bluetooth.available() > 0){
        incomingByte = bluetooth.read();

        //MOVE FORWARD
        if (incomingByte == 70) {
      bluetooth.println("FORWARD");
    }

    }
}

// VALUES FOR THE ANDROID APP "Bluetooth RC Controller"
// FORWARD = 70
// BACKWARD = 66
// LEFT = 76
// RIGHT = 82
