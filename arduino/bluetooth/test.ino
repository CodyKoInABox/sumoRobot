#include <Dabble.h>

void setup(){
    Serial.begin(9600);
    Dabble.begin(9600);
}

void loop(){
    Dabble.processInput();
}
