//declaração de variaveis
float sal, novosal;

void setup() {
  Serial.begin(9600);
  delay(1000);

}

void loop() {
  Serial.print("Digite seu salario: ");
  while (!Serial.available()){
  }
  sal = Serial.parseFloat();
  Serial.println(sal);
  novosal = sal+sal*25/100;
  Serial.print("novo salario =" );
  Serial.println(novosal);

}


