# Trabalho final IoT development

#### Tema: Sensor de temperatura para churrasco
##### Professor:  RICARDO DA SILVA OGLIARI
##### Integrantes: 
Douglas Pereira Mateus - RM 342031 <br/>
Guilherme Antonio de Souza Mauricio - RM 340879 <br/>
João Rafael Iasorli Rodrigues - RM 342038


#### Problema proposto:
Para churrasqueiros e ou cozinheiros iniciantes o grande desafio na hora de preparar algum tipo de carne, é saber qual o ponto ideal da carne.

#### Solução:
Para resolver esse problema, desenvolvemos um simples sensor de temperatura, que monitora a temperatura na carne e consegue informar qual o ponto da carne em determinada temperatura. Para cada ponto da carne, é acesso um led para ter uma resposta visual do ponto que se quer chegar. Ao chegar em 67°C, além de acender um último led, também é ativado um piezo que informa que a carne já chegou no ultimo ponto. O piezo volta ao estado inicial quando a temperatura diminui. Por fim, adicionamos uma integração com o node-red, que recebe a cada 20 segundos o valor do ponto da carne e envia ao usuário um SMS avisando-o.

### Sobre o protótipo
Utilizamos a plataforma tinkercad para realizar a montagem do circuito sem a necessidade de ter os componotentes físicos conosco, facilitando o trabalho em conjunto dos integrantes. <br />
Neste protótipo utilizamos: <br />
1x Arduino Uno
1x Protoboard
1x Sensor de temperatura TMP36
4x Led
1x Piezo
4x Resistores de 220 ohms
1x Resistor de 1k ohms

Abaixo segue a imagem do circuito montado:

![](src\imgs\tinkercad-circuit.png)

E conforme mencionamos acima, fizemos integração com o node-red, que possibilita, de maneira muito simples, a comunicação entre dispositivos. Abaixo segue o esquema utilizado

![](src\imgs\node-red-flux.png)

Para adicionar os nós do arduino, instalamos o node-red-node-arduino pallet. Para o mqtt, responsável por enviar e receber mensagens da nossa placa, utilizamos os nós já disponíveis na plataforma. Para finalizar, instalamos o nodered-contrib-sms77 para enviar o sms ao usuário.
