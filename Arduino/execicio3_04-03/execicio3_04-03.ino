float sal, salreceber, grat, imp;

void setup(){
Serial.begin(9600);
delay(1000);
}

void loop(){
Serial.print("Digite o seu salario base: ");
  while(Serial.available() == 0);
  sal = Serial.parseFloat();
  Serial.println(sal);
  grat = sal * 5/100;
  imp = sal * 7/100;
  salreceber = (sal+grat-imp);
  Serial.print("seu salario e: ");
  Serial.println(salreceber);
}