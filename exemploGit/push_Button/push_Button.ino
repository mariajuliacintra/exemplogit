//declaração da constante que armazena o pino do pushButton
#define pinoButton 8
#define ledvermelho 9
//Declaração da variavel de estado do butão
bool status = false;

void setup() {
  //definir a modalidade do pino
  pinMode(pinoButton, INPUT);
  pinMode(ledvermelho, OUTPUT);

  Serial.begin(1600);

  delay(100);  //parada estratégica
}

void loop() {
  //lendo o pino digital atráves da constante
  //Serial.println(digitalRead(pinoButton));

  if (digitalRead(pinoButton) == 1 && status == false) {
    Serial.println("Botão apertado on...");
    status = true;
    digitalWrite(ledvermelho, HIGH);
  } else if (digitalRead(pinoButton) == 1 && status == true) {
    Serial.println("Botão apertado OFF...");
    status = false;
    digitalWrite(ledvermelho, LOW);
  }
  delay(100);  //parada estratégica para leitura
}

