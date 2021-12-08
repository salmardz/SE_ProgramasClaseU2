int sensor1 = A0;
int sensor2 = A1;
int sensor3 = A2;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(100);

}
int valor1;
int valor2;
int valor3;

void loop() {
  valor1 = analogRead(sensor1);
  valor2 = analogRead(sensor1);
  valor3 = analogRead(sensor1);
  Serial.println ("I"+String(valor1)+"R"+String(valor2)+"R"+String(valor3)+"f");
  delay (100);
}
