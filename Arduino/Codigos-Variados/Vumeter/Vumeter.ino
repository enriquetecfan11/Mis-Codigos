//------------------------------------------------------
//PROGRAMA: Vumeter.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (Febrero-2018)
//Descripción:
//Modulos usados: Plataforma Plumbot
//-------------------------------------------------------
  int analogPin = A0;
  word valorSound = 0;


void setup() {
 Serial.begin(9600); 

}

void loop() {
  valorSound = analogRead(analogPin);

  Serial.print("Valor Sonido: ");
  Serial.println(valorSound);
  Serial.println("-----------");
  delay(1000);

}
