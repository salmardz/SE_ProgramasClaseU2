int led[4]= {10,11,12,13};
int led_prender;

void setup() {//configuracion
//ENTRADA INPUT
// SALIDA OUTPUT
for(int i = 0; i< 5; i++) {
  pinMode(led[i], OUTPUT);
  
}

//randomSeed(); // semilla de aleatorios
randomSeed(analogRead(A0)); // 0 y 1023
}
void loop() {
  // valor = prendido 1 HIGH , apagado 0 0 LOW
  for(int i = 0; i< 4; i++) {
 digitalWrite (led[i], 0);
  
}
  led_prender = random(4);//[0 - (n-1)]
   digitalWrite (led[led_prender],1);



  
delay(2000);
}
