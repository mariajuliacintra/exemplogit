//constante para o pino da buzzer
#define pinoBuzzer 2
#define pinoLedAzul 3
#define pinoButton 4
#define pinoButton2 5
void setup() {
  Serial.begin(9600);

  //modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedAzul, OUTPUT);
  pinMode(pinoButton, INPUT);
  delay(1000);//parada estrategica
  
  

}

void loop() {
   if (digitalRead(pinoButton) == 1) {
    Serial.println("Led ligado");
    digitalWrite(pinoLedAzul, HIGH);
    tone(pinoBuzzer, 523);//nota musical dó
   } 
  else if (digitalRead(pinoButton) == 0) {
    Serial.println("Led desligado");
    digitalWrite(pinoLedAzul, LOW);
    noTone(pinoBuzzer);//DESLIGA A BUZZER

    if (digitalRead(pinoButton2) == 1) {
    Serial.println("Led ligado");
    digitalWrite(pinoLedAzul, HIGH);
    tone(pinoBuzzer, 264);//nota musical dó
   } 
  else if (digitalRead(pinoButton2) == 0) {
    Serial.println("Led desligado");
    digitalWrite(pinoLedAzul, LOW);
    noTone(pinoBuzzer);//DESLIGA A BUZZER
    }
  }
}

 
  


