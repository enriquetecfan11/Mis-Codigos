//------------------------------------------------------
//PROGRAMA: Buzzer.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (Febrero-2018)
//Descripción:
//Modulos usados: Plataforma Plumbot
//-------------------------------------------------------
int speaker = 9;
int analogPin = A0;
int valorADC = 0;
float voltios = 0;
  
int numTones = 10;
int tones[ ] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440,466, 494};
                     // mid C C# D D# E F F# G G# A
void setup(){ 
          
          }
void loop(){
 valorADC = analogRead(analogPin);
voltios = (valorADC/1024.0)*5.0;
if(valorADC <= 200){
    tone(speaker, 277);
  }
  if(valorADC <= 400){
    tone(speaker, 300);
  }
  if(valorADC <= 600){
    tone(speaker, 392);
  }
  if(valorADC <= 800){
    tone(speaker, 440);
  }
  if(valorADC < 1000){
    tone(speaker, 494);
  }

}
