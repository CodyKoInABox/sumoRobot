# Codigo Orientado a Objetos

#### Codigo completo -> [main.ino](https://github.com/CodyKoInABox/sumoRobot/blob/main/arduino/OOP/main.ino)
<sub>codigo inteiro com todas as funcionalidades do robo: fica girando no proprio eixo ate encontrar outro robo, entao segue na direcao do adversario em velocidade maxima</sub>

## Classes e seus metodos:

### SuperMotor

| Metodo                           | Descricao                                                                                                 | Tipo |
|----------------------------------|-----------------------------------------------------------------------------------------------------------|------|
| frente()                         | Faz com que o motor se mova para frente com velocidade maxima                                             |Publico|
| tras()                           | Faz com que o motor se mova para tras com velocidade maxima                                               |Publico|
| velocidadeFrente(int)            | Faz com que o motor se mova para frente com uma velocidade definida pelo usuario                          |Publico|
| velocidadeTras(int)              | Faz com que o motor se mova para tras com uma velocidade definida pelo usuario                            |Publico|
| parar()                          | Faz com que o motor pare                                                                                  |Publico|
| enable()                         | Habilita o motor (deixa ele pronto para ser operado)                                                      |Publico|
| disable()                        | Desabilita o motor (deixa ele desligado, nao podendo ser operado)                                         |Publico|
| setPinFrente(int)                | Define qual porta digital leva para a entrada do motor que controla seu movimento para frente             |Publico|
| setPinTras(int)                  | Define qual porta digital leva para a entrada do motor que controla seu movimento para tras               |Publico|
| getPinFrente()                   | Retorna o numero da porta digital que leva para a entrada do motor que controla seu movimento para frente |Publico|
| getPinTras()                     | Retorna o numero da porta digital que leva para a entrada do motor que controla sue movimento para tras   |Publico|
| setEnablePin(int)                | Define qual porta digital leva para a entrada do motor que o habilita                                     |Publico|
| getEnablePin()                   | Retorna o numero da porta digital que leva para a entrada do motor que o habilita                         |Publico|
| constructor(int, int, int)            | Construtor da classe, aceita como parametros os valores do setPinFrente(int), setPinTras(int) e setEnablePin(int)  |Publico|


### Sensor

| Metodo                           | Descricao                                                                                                 | Tipo |
|----------------------------------|-----------------------------------------------------------------------------------------------------------|------|
| leitura()                        | Retorna o valor da leitura do sensor                                                                      |Publico|
| setPin(int)                      | Define a porta analogica que leva ate a saida da leitura do sensor                                        |Publico|
| getPin()                         | Retorna o numero da porta analogica que leva ate a saida da leitura do sensor                             |Publico|
| maiorQue(int)                    | Retorna true caso a leitura() seja maior que um numero definido pelo usuario e false caso seja menor      |Publico|
| menorQue(int)                    | Retorna true caso a leitura() seja menor que um numero definido pelo usuario e false caso seja maior      |Publico|
| constructor(int)                 | Construtor da classe, aceita como parametros o valor do setPin(int)                                          |Publico|

## Classes e seus atributos:

### SuperMotor

| Atributo                           | Descricao                                                                                               | Tipo |
|----------------------------------|-----------------------------------------------------------------------------------------------------------|------|
| pinFrente                         | Porta digital PWM que conecta a entrada do motor que faz com que ele va para frente                      |Privado|
| pinTras                           | Porta digital PWM que conecta a entrada do motor que faz com que ele va para tras                        |Privado|
| enablePin                         | Porta digital que conecta com a entrada do motor que habilita ele                                        |Privado|

### Sensor

| Atributo                           | Descricao                                                                                               | Tipo |
|----------------------------------|-----------------------------------------------------------------------------------------------------------|------|
| pin                              | Porta analogica que conecta na saida de informacao do sensor                      |Privado|
