int pinoBotaoLigar = 2;
int pinoBotaoDesligar = 3;
int pinoLed = 4;

void setup() {
  pinMode(pinoBotaoLigar, INPUT);
  pinMode(pinoBotaoDesligar, INPUT);
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  if (digitalRead(pinoBotaoLigar) == HIGH) {
    digitalWrite(pinoLed, HIGH);
  }

  if (digitalRead(pinoBotaoDesligar) == HIGH) {
    digitalWrite(pinoLed, LOW);
  }
}
