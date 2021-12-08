int sensor1=A0;
int sensor2=A1;
int sensor3=A2;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(100);
}

int valor1;
int valor2;
int valor3;
void loop() {
  valor1 = analogRead(sensor1);
  valor2 = analogRead(sensor2);
  valor3 = analogRead(sensor3);

/*
  0 - 9  = digito
  10 - 99 = 2 digitos
  100 - 999 = 3 digitos
  1000 - 1023 = 4 digitos
  */

  valor1 = map(valor1, 0, 1023, 0, 100);
  valor2 = map(valor2, 0, 1023, 0, 100);
  valor3 = map(valor3, 0, 1023, 0, 100);

  Serial.println("I" +String(valor1) +"R"+ String(valor2) +"R"+ String(valor3) + "F");
  
  delay(100);
}
