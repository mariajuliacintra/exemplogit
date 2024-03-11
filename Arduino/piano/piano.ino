//definição das constantes: pinos de entrada
#define pinoBuzzer 2
//leds
#define pinoDo 3
#define pinoRe 4
#define pinoMi 5
#define pinoFa 6
#define pinoSo 7
#define pinoLa 8
#define pinoSi 9
#define pinoDo2 10

byte doh, Re, Mi, Fa, So, La, Si, Doh2 = 0;


void setup() {
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoDo, INPUT);
  pinMode(pinoRe, INPUT);
  pinMode(pinoMi, INPUT);
  pinMode(pinoFa, INPUT);
  pinMode(pinoSo, INPUT);
  pinMode(pinoLa, INPUT);
  pinMode(pinoSi, INPUT);
  pinMode(pinoDo2, INPUT);

  Serial.begin(9600);
  delay(1000);
}

void loop() {
  doh = digitalRead(pinoDo);
  Re = digitalRead(pinoRe);
  Mi = digitalRead(pinoMi);
  Fa = digitalRead(pinoFa);
  So = digitalRead(pinoSo);
  La = digitalRead(pinoLa);
  Si = digitalRead(pinoSi);
  Doh2 = digitalRead(pinoDo2);

  //verificando qual nota foi acionada
  if (doh == 1) {
    //ativa a nota dó
    tone(pinoBuzzer, 523);
  } else if (Re == 1) {
    //ativa a nota ré
    tone(pinoBuzzer, 587);
  }

  else if (Mi == 1) {
    tone(pinoBuzzer, 659);
  }

  else if (Fa == 1) {
    tone(pinoBuzzer, 698);
  }

  else if (So == 1) {
    tone(pinoBuzzer, 392);
  }

  else if (La == 1) {
    tone(pinoBuzzer, 440);
  }

  else if (Si == 1) {
    tone(pinoBuzzer, 494);
  }

  else if (Doh2 == 1) {
    tone(pinoBuzzer, 554);
  }

  else {
    //desliga a buzzer
    noTone(pinoBuzzer);
  }
  delay(100);  //tempo de execução da nota musical
}
