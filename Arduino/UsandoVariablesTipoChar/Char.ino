//------------------------------------------------------
//PROGRAMA: char.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Varibles Arduino
//Modulos usados: Plataforma Plumbot
//-------------------------------------------------------

#define Led01    4
#define Led02    5
#define Led03    6
#define Led04    7
#define Puslador 2

char S1 [3] { Led01, Led02, Led03};
char S2 [3] { Led02, Led02, Led04};

void setup() {
pinMode(S1, OUTPUT);
pinMode(Puslador, INPUT); 
}

void loop() {
  if(digitalRead (Puslador)){
  digitalWrite(S1, HIGH);
  }else{
  digitalWrite(S2, HIGH);
  }
} 
