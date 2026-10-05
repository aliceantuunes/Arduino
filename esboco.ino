int rele1 = 7; // Rele 1 ligado ao pino 7
int rele2 = 8; // Rele 2 ligado ao pino 8

int botao1 = 2; // Botao 1 ligado ao pino 2
int botao2 = 3; // Botao 2 ligado ao pino 3

int estadorele1 = 1; // Armazena o estado do rele: 0 (LOW) ou 1 (HIGH)
int estadorele2 = 1;

int estadobotao1 = 0; // Armazena o valor lido dos botoes
int estadobotao2 = 0;

void setup() {
  pinMode(rele1, OUTPUT); // Define pinos para o rele como saida
  pinMode(rele2, OUTPUT);

  pinMode(botao1, INPUT); // Define pinos dos botoes como entrada
  pinMode(botao2, INPUT);

  digitalWrite(rele1, HIGH); // Estado inicial dos reles - desligados
  digitalWrite(rele2, HIGH);
}

void loop() {
  estadobotao1 = digitalRead(botao1); // Verifica o acionamento do botao 1
  if (estadobotao1 != 0) {
    while (digitalRead(botao1) != 0) {
      delay(100);
    }
    estadorele1 = !estadorele1; // Inverte o estado da porta
    digitalWrite(rele1, estadorele1); // Comandos para o rele 1
  }

  estadobotao2 = digitalRead(botao2);
  if (estadobotao2 != 0) {
    while (digitalRead(botao2) != 0) {
      delay(100);
    }
    estadorele2 = !estadorele2;
    digitalWrite(rele2, estadorele2);
  }
}
