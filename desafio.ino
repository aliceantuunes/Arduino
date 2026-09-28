int rele1 = 7;     
int rele2 = 8;      
int botao1 = 2;     
int botao2 = 3; 
int estadorele1 = 0;  
int estadorele2 = 0;

void setup() {
  pinMode(rele1, OUTPUT);
  pinMode(rele2, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
}

void loop() {
  if (digitalRead(botao1) == HIGH) {
    while (digitalRead(botao1) == HIGH) { delay(100); } 
    estadorele1 = !estadorele1;                         
    digitalWrite(rele1, estadorele1);
  }

  if (digitalRead(botao2) == HIGH) {
    while (digitalRead(botao2) == HIGH) { delay(100); } 
    estadorele2 = !estadorele2;                        
    digitalWrite(rele2, estadorele2);
  }
}
