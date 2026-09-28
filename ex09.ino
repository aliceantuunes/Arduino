int pinoLed = 13;
int pinoBotao = 7;
int estadoBotao;
int estadoAnterior = 0;
int estadoLed = 0;

void setup() {
  pinMode(pinoLed, OUTPUT);
  pinMode(pinoBotao, INPUT);
}

void loop() {
  estadoBotao = digitalRead(pinoBotao);

  if (estadoBotao == HIGH && estadoAnterior == LOW) {
    estadoLed = !estadoLed;
  }

  digitalWrite(pinoLed, estadoLed);
  estadoAnterior = estadoBotao;
  delay(50); 
}
