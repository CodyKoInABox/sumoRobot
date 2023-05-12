# Codigo Orientado a Objetos

#### Codigo completo -> [main.ino](https://github.com/CodyKoInABox/sumoRobot/blob/main/arduino/OOP/main.ino)
<sub>codigo inteiro com todas as funcionalidades do robo: fica girando no proprio eixo ate encontrar outro robo, entao segue na direcao do adversario em velocidade maxima</sub>

## Classes e seus metodos:

### SuperMotor

| Metodo                           | Descricao                                                                                                 |Tipo| Acesso |
|----------------------------------|-----------------------------------------------------------------------------------------------------------|------|------|
| frente()                         | Faz com que o motor se mova para frente com velocidade maxima                                             |void|Publico|
| tras()                           | Faz com que o motor se mova para tras com velocidade maxima                                               |void|Publico|
| velocidadeFrente(int)            | Faz com que o motor se mova para frente com uma velocidade definida pelo usuario                          |void|Publico|
| velocidadeTras(int)              | Faz com que o motor se mova para tras com uma velocidade definida pelo usuario                            |void|Publico|
| parar()                          | Faz com que o motor pare                                                                                  |void|Publico|
| enable()                         | Habilita o motor (deixa ele pronto para ser operado)                                                      |void|Publico|
| disable()                        | Desabilita o motor (deixa ele desligado, nao podendo ser operado)                                         |void|Publico|
| setPinFrente(int)                | Define qual porta digital leva para a entrada do motor que controla seu movimento para frente             |void|Publico|
| setPinTras(int)                  | Define qual porta digital leva para a entrada do motor que controla seu movimento para tras               |void|Publico|
| getPinFrente()                   | Retorna o numero da porta digital que leva para a entrada do motor que controla seu movimento para frente |int|Publico|
| getPinTras()                     | Retorna o numero da porta digital que leva para a entrada do motor que controla seu movimento para tras   |int|Publico|
| setEnablePin(int)                | Define qual porta digital leva para a entrada do motor que o habilita                                     |void|Publico|
| getEnablePin()                   | Retorna o numero da porta digital que leva para a entrada do motor que o habilita                         |int|Publico|
| constructor(int, int, int)            | Construtor da classe, aceita como parametros os valores do setPinFrente(int), setPinTras(int) e setEnablePin(int)  |SuperMotor|Publico|


### Sensor

| Metodo                           | Descricao                                                                                                 |Tipo| Acesso |
|----------------------------------|-----------------------------------------------------------------------------------------------------------|------|------|
| leitura()                        | Retorna o valor da leitura do sensor                                                                      |void|Publico|
| setPin(int)                      | Define a porta analogica que leva ate a saida da leitura do sensor                                        |void|Publico|
| getPin()                         | Retorna o numero da porta analogica que leva ate a saida da leitura do sensor                             |int|Publico|
| maiorQue(int)                    | Retorna true caso a leitura() seja maior que um numero definido pelo usuario e false caso seja menor      |bool|Publico|
| menorQue(int)                    | Retorna true caso a leitura() seja menor que um numero definido pelo usuario e false caso seja maior      |bool|Publico|
| constructor(int)                 | Construtor da classe, aceita como parametros o valor do setPin(int)                                       |Sensor|Publico|

## Classes e seus atributos:

### SuperMotor

| Atributo                           | Descricao                                                                                               |Tipo| Acesso |
|----------------------------------|-----------------------------------------------------------------------------------------------------------|------|------|
| pinFrente                         | Porta digital PWM que conecta a entrada do motor que faz com que ele va para frente                      |int|Privado|
| pinTras                           | Porta digital PWM que conecta a entrada do motor que faz com que ele va para tras                        |int|Privado|
| enablePin                         | Porta digital que conecta com a entrada do motor que habilita ele                                        |int|Privado|

### Sensor

| Atributo                           | Descricao                                                                                               |Tipo| Acesso |
|----------------------------------|-----------------------------------------------------------------------------------------------------------|------|------|
| pin                              | Porta analogica que conecta na saida de informacao do sensor                                              |int|Privado|
