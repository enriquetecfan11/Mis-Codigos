//------------------------------------------------------
//PROGRAMA: Led-Pulsadores.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Varibles con pulsadores y led con Arduino
//Modulos usados: 6 Leds y 2 Pulsadores
//-------------------------------------------------------

#define Led01 4
#define Led02 5
#define Led03 6
#define Led04 7
#define Led05 8
#define Led06 9
#define buttonPin 2
#define buttonPin2 3


int buttonState = 0;
int buttonState1 = 0;


void setup() {
pinMode(buttonPin, INPUT);
pinMode(buttonPin2, INPUT); 


pinMode(Led01, OUTPUT);
pinMode(Led02, OUTPUT);
pinMode(Led03, OUTPUT);
pinMode(Led04, OUTPUT);
pinMode(Led05, OUTPUT);
pinMode(Led06, OUTPUT);
}

void loop() {

  buttonState = digitalRead(buttonPin);  
  buttonState1 = digitalRead(buttonPin2);
 
  if(buttonState == HIGH){
   digitalWrite(Led01, 1);
   digitalWrite(Led02, 1);
   digitalWrite(Led03, 1);
  }
  if(buttonState1 == HIGH){
   digitalWrite(Led01, 0);
   digitalWrite(Led02, 0);
   digitalWrite(Led03, 0);
  }
    
}
