//declaração das variáveis / Numeros reais
float nota1, nota2, nota3, peso1, peso2, peso3, media;


void setup() {
  // INICIA COMUNICAÇÃO COM O SERIAL MONITOR
  Serial.begin(9600);

  delay(1000);  //espera estratégica
}

void loop() {
  Serial.print("digite a nota 1: ");

  //while - comando de repetição "enquanto"
  while (Serial.available() == 0) {
    //Aguardando entrada de valores do usuário
  }
  nota1 = Serial.parseFloat();  //lê o valor do serial e guarda na variavel nota1
  Serial.println(nota1);

  Serial.print("digite a nota 2: ");
  while (Serial.available() == 0) {
    //aguarda a entrada da nota2
  }
  nota2 = Serial.parseFloat();
  Serial.println(nota2);

  Serial.print("digite a nota 3: ");
  while (Serial.available() == 0) {
    //aguardando a entrada da nota3
  }
  nota3 = Serial.parseFloat();
  Serial.println(nota3);

  //Atrubuição dos pesos
  Serial.print("digite o peso 1: ");
  while (Serial.available() == 0) {
    //aguarda a entrada do peso1
  }
  peso1 = Serial.parseFloat();
  Serial.println(peso1);

  Serial.print("digite o peso 2: ");
  while (Serial.available() == 0) {
    //aguarda a entrada do peso2
  }
  peso2 = Serial.parseFloat();
  Serial.println(peso2);

  Serial.print("digite o peso 3: ");
  while (Serial.available() == 0) {
    //aguarda a entrada do peso3
  }
  peso3 = Serial.parseFloat();
  Serial.println(peso3);

  //cálculo da media ponderada:
  media = (nota1*peso1+nota2*peso2+nota3*peso3) / (peso1+peso2+peso3);

  //Exibe o valor da média calculada
  Serial.print("A media ponderada: ");
  Serial.println(media,1);
}

//criando uma função chamada
float aguardaEntrada(){
  while(!Serial.available()){
    //aguardando até que um valor seja digitado 
  }
  //retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();
}
