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

        if (incomingByte == 'H') {
      bluetooth.println("LED: ON");
    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == 'L' || incomingByte == 76) {
      bluetooth.println("LED: OFF");
    }

    }
}
