//-----------------------------------------------------------------
//PROGRAMA: Robot.blue.ino (DaguBoard Mini Driver// Arduino NG/8)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción:Robot 2WD Controlado por Bluetooth
//-----------------------------------------------------------------

//(--Varibles Motores--)
int MtorDch = 9;
int MtorIzq = 10;
int D0 = 0;
int D1 = 1;
//
//(--Varibles Bluetooth--)
#include <SoftwareSerial.h>   // Incluimos la librería  SoftwareSerial  
SoftwareSerial BT(D0,D1);    // Definimos los pines RX y TX del Arduino conectados al Bluetooth
char estado=0;

void setup(){
  Serial.begin(9600);
  
  pinMode(MtorDch, OUTPUT);
  pinMode(MtorIzq, OUTPUT);
}

void loop(){
  if(BT.available())    // Si llega un dato por el puerto BT se envía al monitor serial
  {
   estado = BT.read();
    //Robot adelante
 if (estado =='a'){
 analogWrite(MtorDch, 255);
 analogWrite(MtorDch, 255);
  }
   //Robot Stop
if(estado=='r'){
 analogWrite(MtorIzq,0);
 analogWrite(MtorDch, 0);
  }
  // Robot Derecha
  if(estado=='d'){
  analogWrite(MtorDch, 255);
 analogWrite(MtorDch, 0);
  }
//Robot Izquierda 
  if(estado=='i'){
  analogWrite(MtorIzq,255);
 analogWrite(MtorDch, 0);
  }
  }

 } 
