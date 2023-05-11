class Motor{
    esquerdo = {
        int frente = 6;
        int tras = 5;
        int enable = 7;
    }
    direito = {
        int frente = 10;
        int tras = 9;
        int enable = 11;
    }
}

class Sensor{
    frente = {
        int leitura(){
            return analogRead(A2)
        }
    }
    esquerdo = {
        int leitura(){
            return analogRead(A0)
        }
    }
    direito = {
        int leitura(){
            return analogRead(A1)
        }
    }
}
