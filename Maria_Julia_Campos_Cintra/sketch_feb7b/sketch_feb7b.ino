//declaração das variaveis que representam is pinos dos leds
  int ledVermelho = 8;
  int ledAmarelo = 9;
  int ledVerde = 10;

void setup() {
  
  //definindo os tipos de pinos
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  delay(1000);
}

void loop() {
  digitalWrite(ledAmarelo, HIGH);
  delay(1000);
  digitalWrite(ledAmarelo, LOW);
  delay(1000);

  digitalWrite(ledVermelho, HIGH);
  delay(1000);
  digitalWrite(ledVermelho, LOW);
  delay(1000);

  digitalWrite(ledVerde, HIGH);
  delay(1000);
  digitalWrite(ledVerde, LOW);
  delay(1000);
}
