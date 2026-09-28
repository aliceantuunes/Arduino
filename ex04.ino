int pinoInicial = 2;
int pinoFinal = 7;

void setup() {
  for (int pino = pinoInicial; pino <= pinoFinal; pino++) {
    pinMode(pino, OUTPUT);
  }
}

void loop() {
  for (int pino = pinoInicial; pino <= pinoFinal; pino++) {
    digitalWrite(pino, HIGH); 
    delay(200);              
    digitalWrite(pino, LOW); 
  }
}
