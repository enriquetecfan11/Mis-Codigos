//------------------------------------------------------
//PROGRAMA: Serial_INFRARED.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Lecutura Infrarrojo
//Modulos usados: KY-022 INFRARED
//-------------------------------------------------------       
#include <IRremote.h>

int RECV_PIN = 11; // define input pin on Arduino 
IRrecv irrecv(RECV_PIN); 
decode_results results; // decode_results class is defined in IRremote.h


void setup() { 
Serial.begin(9600); //inicializamos el puerto serial a 9600 
irrecv.enableIRIn(); // Comienza a recibir los datos 
} 

void loop() { 
if (irrecv.decode(&results)) { 
Serial.println(results.value, HEX); // imprime el valor en codigo hexadecimal 
irrecv.resume(); // Se preparar para recibir el siguiente valor 
delay(10); 
} 
}
