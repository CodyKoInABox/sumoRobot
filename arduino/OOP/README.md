# Codigo Orientado a Objetos

#### Codigo completo -> [main.ino](https://github.com/CodyKoInABox/sumoRobot/blob/main/arduino/OOP/main.ino)
<sub>codigo inteiro com todas as funcionalidades do robo: fica girando no proprio eixo ate encontrar outro robo, entao segue na direcao do adversario em velocidade maxima</sub>

## Classes:

### SuperMotor

| Metodo                           | Descricao                                                                                                 |
|----------------------------------|-----------------------------------------------------------------------------------------------------------|
| frente()                         | Faz com que o motor se mova para frente com velocidade maxima                                             |
| tras()                           | Faz com que o motor se mova para tras com velocidade maxima                                               |
| velocidadeFrente(int velocidade) | Faz com que o motor se mova para frente com uma velocidade definida pelo usuario                          |
| velocidadeTras(int velocidade)   | Faz com que o motor se mova para tras com uma velocidade definida pelo usuario                            |
| parar()                          | Faz com que o motor pare                                                                                  |
| enable()                         | Habilita o motor (deixa ele pronto para ser operado)                                                      |
| disable()                        | Desabilita o motor (deixa ele desligado, nao podendo ser operado)                                         |
| setPinFrente(int value)          | Define qual porta digital leva para a entrada do motor que controla seu movimento para frente             |
| setPinTras(int value)            | Define qual porta digital leva para a entrada do motor que controla seu movimento para tras               |
| getPinFrente()                   | Retorna o numero da porta digital que leva para a entrada do motor que controla seu movimento para frente |
| getPinTras()                     | Retorna o numero da porta digital que leva para a entrada do motor que controla sue movimento para tras   |
| setEnablePin(int value)          | Define qual porta digital leva para a entrada do motor que o habilita                                     |
| getEnablePin()                   | Retorna o numero da porta digital que leva para a entrada do motor que o habilita                         |


### Sensor

| Metodo              | Descricao                                                                                                                                          |
|---------------------|----------------------------------------------------------------------------------------------------------------------------------------------------|
| leitura()           | Retorna o valor da leitura do sensor                                                                                                               |
| setPin(int valor)   | Define a porta analogica que leva ate a saida da leitura do sensor                                                                                 |
| getPin()            | Retorna o numero da porta analogica que leva ate a saida da leitura do sensor                                                                      |
| maiorQue(int valor) | Retorna true caso a leitura() seja maior que um numero definido pelo usuario e false caso a leitura seja menor que um numero definido pelo usuario |
| menorQue(int valor) | Retorna true caso a leitura() seja menor que um numero definido pelo usuario e false caso a leitura seja maior que um numero definido pelo usuario |
