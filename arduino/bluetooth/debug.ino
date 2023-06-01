#include "SoftwareSerial.h"

#define TX 4// HC-05 BLUETOOTH MODULE'S TX PORT GOES HERE
#define RX 3// HC-05 BLUETOOTH MODULE'S RX PORT GOES HERE

SoftwareSerial bluetooth(TX, RX);

void setup(){
    Serial.begin(9600);
    bluetooth.begin(9600);
}

void loop(){
    //if(bluetooth.read() != -1){
    //  Serial.println(bluetooth.read());  
    //}

    if(bluetooth.available > 0){
        Serial.println(bluetooth.read())
    }
    //Serial.println(bluetooth.available());
}
