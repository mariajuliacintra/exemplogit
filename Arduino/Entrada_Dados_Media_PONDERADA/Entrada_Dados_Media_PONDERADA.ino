//declaração das variáveis / Numeros reais
float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  // INICIA COMUNICAÇÃO COM O SERIAL MONITOR
  Serial.begin(9600);

  delay(1000);  //espera estratégica
}

void loop() {
  Serial.print("digite a nota 1: ");
  nota1 = aguardaEntrada();
  Serial.println(nota1);

  Serial.print("digite a nota 2: ");
  nota2 = aguardaEntrada();
  Serial.println(nota2);

  Serial.print("digite a nota 3: ");
  nota3 = aguardaEntrada();
  Serial.println(nota3);

  //Atrubuição dos pesos
  Serial.print("digite o peso 1: ");
  peso1 = aguardaEntrada();
  Serial.println(peso1);

  Serial.print("digite o peso 2: ");
  peso2 = aguardaEntrada();
  Serial.println(peso2);

  Serial.print("digite o peso 3: ");
  peso3 = aguardaEntrada();
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
