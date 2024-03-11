float sal, perc, aumento, novosal;

void setup() {
Serial.begin(9600);
delay(1000);
}

void loop() {
  Serial.print("Digite o seu salario atual: ");
  while(Serial.available() == 0);
  sal = Serial.parseFloat();
  Serial.println(sal);
  Serial.print("Digite o percentual de aumento sem o sinal da porcentagem: ");
  while(Serial.available() == 0);
  perc = Serial.parseFloat();
  Serial.println(perc);
  aumento = sal*perc/100;
  Serial.print("total do aumento= ");
  Serial.println(aumento);
  novosal = (sal + aumento);
  Serial.print("novo salario= ");
  Serial.println(novosal);
}

  


  
  
  