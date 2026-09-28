int primeiroPino = 2;
int ultimoPino = 14;

void setup() {
  for (int pino = primeiroPino; pino <= ultimoPino; pino++) {
    pinMode(pino, OUTPUT);
  }
}

void loop() {
  for (int pino = primeiroPino; pino <= ultimoPino; pino++) {
    digitalWrite(pino, HIGH);
    delay(300);
    digitalWrite(pino, LOW);
  }
}
