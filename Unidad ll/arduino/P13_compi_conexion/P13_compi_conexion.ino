int led = 12;

void setup() {
  pinMode (led, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  digitalWrite (led,1);
  Serial.println("led prendido");
  delay (500);
  
  digitalWrite (led,0);
  Serial.println("led apagado");
  delay(500);


}
