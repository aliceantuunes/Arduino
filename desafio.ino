int rele1 = 7;     
int rele2 = 8;     
int botao1 = 2;    
int botao2 = 3;     
int estadorele1 = 1;  
int estadorele2 = 1;
int estadobotao1 = 0;
int estadobotao2 = 0; 

void setup() {
  pinMode(rele1, OUTPUT);
  pinMode(rele2, OUTPUT); 
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT); 

  digitalWrite(rele1, HIGH);
  digitalWrite(rele2, HIGH);
}

void loop() {
  estadobotao1 = digitalRead(botao1);
  if (estadobotao1 != 0) {
    while (digitalRead(botao1) != 0) {
      delay(100);
    }
    estadorele1 = !estadorele1;       
    digitalWrite(rele1, estadorele1); 
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
