//------------------------------------------------------
//PROGRAMA: Test_INFRARED.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Encendido de led infrarrojo
//Modulos usados: KY-022 INFRARED
//-------------------------------------------------------       
#include <IRremote.h>

const int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
const int motor01 = 11;
const int motor02 = 10;


void setup(){
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(motor01, OUTPUT);
  pinMode(motor02, OUTPUT);
}

void loop(){
    if (irrecv.decode(&results)){

        switch(results.value){
          case 0xA05F: //Keypad button "5"
          digitalWrite(motor01, HIGH);
          digitalWrite(motor02, HIGH);
          delay(2000);
          digitalWrite(motor01, LOW);
          digitalWrite(motor02, LOW);
          }

        irrecv.resume(); 
    }
     delay (100); // small delay to prevent reading errors
}


