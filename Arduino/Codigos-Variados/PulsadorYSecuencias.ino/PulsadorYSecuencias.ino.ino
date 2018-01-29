//------------------------------------------------------
//PROGRAMA: PulsadorYSecuencias.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Pulsadores y secuencias con arduino
//Modulos usados: Plataforma Plumbot
//-------------------------------------------------------

#define PM    7
#define PM2   6
#define led   8
#define led1  9
#define led2  10
#define led3  11



void setup() {
  pinMode(PM, INPUT);
  pinMode(PM2, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(PM))
  {
   digitalWrite(led,  1); 
   digitalWrite(led3, 1);
   delay(1000);
   digitalWrite(led,  0); 
   digitalWrite(led3, 0);
  
  
  Serial.print("Pulsador 01");
  delay(1000);
  }if(digitalRead(PM2))
  {
   digitalWrite(led1, 1); 
   digitalWrite(led2, 1);
   delay(1000);
   digitalWrite(led1, 0); 
   digitalWrite(led2, 0);

  Serial.print("Pulsador 02");
  delay(1000);
  }
}
