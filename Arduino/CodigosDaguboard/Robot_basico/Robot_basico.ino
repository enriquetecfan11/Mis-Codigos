//-----------------------------------------------------------------
//PROGRAMA: Robot.basico.ino (DaguBoard Mini Driver// Arduino NG/8)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción:Robot 2WD funciomiento motores
//-----------------------------------------------------------------

//(--Varibles Motores--)
int MtorDch = 9;
int MtorIzq = 10;


void setup() {
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
   
   pinMode(MtorDch, OUTPUT);
   pinMode(MtorIzq, OUTPUT);

}

void loop() {

 analogWrite(MtorDch, 255);
 delay(10000);
 analogWrite(MtorIzq,255);
 delay(10000);
 
}
