#define SECRET_1 130
#define SECRET_2 60
#define SECRET_3 420
#define SECRET_4 120
#define SECRET_5 500

bool firstTime = true;

void setup(){
   Serial.begin(9600);
   digitalWrite(11, HIGH);
   digitalWrite(7, HIGH);
}

void loop(){
    if(analogRead(A0) > SECRET_5 || analogRead(A1) > SECRET_5){
        digitalWrite(5, LOW);
        digitalWrite(9, LOW);
        if(analogRead(A2) < SECRET_4){
            digitalWrite(6, LOW);
            digitalWrite(10, LOW);
            analogWrite(10, SECRET_1);
            analogWrite(5, SECRET_1);
            firstTime = true;
        }else{
            if(firstTime){
                digitalWrite(10, LOW);
                digitalWrite(5, LOW);
                digitalWrite(9, HIGH);
                digitalWrite(10, HIGH);
                delay(SECRET_2);
                digitalWrite(9, LOW);
                digitalWrite(10, LOW);
                digitalWrite(6, LOW);
            }
            firstTime = false;
            digitalWrite(10, HIGH);
            digitalWrite(9, HIGH);
        }
    }else{
        digitalWrite(10, LOW);
        digitalWrite(9, HIGH);
        digitalWrite(5, HIGH);
        delay(SECRET_3);
    }
}
