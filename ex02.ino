int pinoLed = 12;

void setup() {
  pinMode(pinoLed, OUTPUT); 
}

void loop() {
  digitalWrite(pinoLed, HIGH); 
  delay(1000);             
  digitalWrite(pinoLed, LOW);
  delay(1000);                
}
