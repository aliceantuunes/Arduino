void setup() {
  for (int pino = 2; pino <= 14; pino++) {
    pinMode(pino, OUTPUT);
  }
}

void loop() {
  for (int pino = 2; pino <= 14; pino++) {
    digitalWrite(pino, HIGH);
    delay(300);
    digitalWrite(pino, LOW);
  }
}
