int pinoLed = 13;
char tecla; 

void setup() {
  Serial.begin(9600);
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    tecla = Serial.read();

    if (tecla == '1') {
      digitalWrite(pinoLed, HIGH); 
    } else if (tecla == 'd') {
      digitalWrite(pinoLed, LOW);  
    }
  }
}
