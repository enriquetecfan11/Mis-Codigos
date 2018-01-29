//------------------------------------------------------
//PROGRAMA: Robot_INFRARED.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Encendido de led infrarrojo
//Modulos usados: KY-022 INFRARED
//-------------------------------------------------------       
#include <IRremote.h>

const int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;

int in1 = 7; 
int in2 = 8;
int in3 = 9;
int in4 = 10;


void setup(){
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode( in1, OUTPUT);
  pinMode( in2, OUTPUT);
  pinMode( in3, OUTPUT);
  pinMode( in4, OUTPUT);
}

void loop(){
    if (irrecv.decode(&results)){

        switch(results.value){
          case 0x1FE10EF: //Keypad button "5"
          digitalWrite(in1, LOW);
          digitalWrite(in4, HIGH);
          digitalWrite(in2, LOW);
          digitalWrite(in3, HIGH);
          }

        switch(results.value){
          case 0x1FE08F7: //Keypad button "2"
          digitalWrite(in1, LOW);
          digitalWrite(in4, LOW);
          digitalWrite(in2, LOW);
          digitalWrite(in3, LOW);
          }
        irrecv.resume(); 
    }
     delay (100); // small delay to prevent reading errors
}


