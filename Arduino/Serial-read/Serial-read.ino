//------------------------------------------------------
//PROGRAMA: Serial-read.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Enecender led con el serial
//Modulos usados: Plataforma Plumbot
//-------------------------------------------------------

int estado = 0;
void setup() {
 
Serial.begin(9600);
  pinMode(13, OUTPUT); // verde los dos amarillo
  pinMode(12, OUTPUT); // rojo
  pinMode(11, OUTPUT); 
}

void loop() {
 if(Serial.available())    // Si llega un dato por el puerto BT se envía al monitor serial
  {
  estado = Serial.read();
    //Robot adelante
 if (estado =='a'){
 digitalWrite(13, HIGH);
  }
  if (estado =='b'){
 digitalWrite(13, LOW);
  }
if (estado =='c'){
 digitalWrite(12, HIGH);
  }
  if (estado =='d'){
 digitalWrite(12, LOW);
  }  
if (estado =='e'){
 digitalWrite(13, HIGH);
 digitalWrite(12,HIGH);
  }
  if (estado =='f'){
 digitalWrite(13, LOW);
 digitalWrite(12, LOW);
  }
 }
}
