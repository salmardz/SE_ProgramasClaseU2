int led = 12;

void setup() {
  pinMode (led, OUTPUT);
  Serial.begin(9600);
  pinMode.setTimeout(100);

}
int valor1;
int valor2;
int valor3;

void loop() {
  valor1 = analogRead(sensor1);
  valor2 = analogRead(sensor1);
  valor3 = analogRead(sensor1);
  Serial.println ("I"+String(valor1)+"R"+String(valor2)+"R"+String(valor3)+"f"
  delay (100);
}
