//constante para o pino da buzzer
#define pinoBuzzer 2
#define pinoLedAzul 3

void setup() {
  Serial.begin(9600);

  //modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedAzul, OUTPUT);
  delay(1000);//parada estrategica
  
  

}

void loop() {
  tone(pinoBuzzer, 523);//nota musical dó
  digitalWrite(pinoLedAzul, HIGH);
  delay(1000);
  noTone(pinoBuzzer);//DESLIGA A BUZZER
  digitalWrite(pinoLedAzul, LOW);//APAGA O LED
  delay(1000);

}
