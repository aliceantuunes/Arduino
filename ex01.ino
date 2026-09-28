int pinoLed = 13;

void setup() {
  pinMode(pinoLed, OUTPUT);
  Serial.begin(9600);     
}

void loop() {
  digitalWrite(pinoLed, HIGH);   
  Serial.println("Hello World!"); 
  delay(1000);                    

  digitalWrite(pinoLed, LOW);   
  delay(1000);                 
}
