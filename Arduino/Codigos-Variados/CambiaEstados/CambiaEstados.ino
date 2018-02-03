//-------------------------------------------------------------//
//PROGRAMA: CambiaEstados.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Cambiar estados Arduino
//-------------------------------------------------------------//

#define P1 2
#define L1 3

bool estado = 0;

void setup() {
  pinMode(P1,  INPUT);
  pinMode(L1, OUTPUT);

}

void loop() {
   
 estado = digitalRead(P1);
 if(P1 == HIGH){
  Serial.println("ON");
  digitalWrite(L1, HIGH);
 }
 if(P1 == LOW){
  Serial.println("OFF");
  digitalWrite(L1, LOW);
 }

}
