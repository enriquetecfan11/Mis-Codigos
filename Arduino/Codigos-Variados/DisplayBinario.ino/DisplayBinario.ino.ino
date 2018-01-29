//------------------------------------------------------
//PROGRAMA:DisplayBinario.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Contador Arduino usando variables
//Modulos usados: 7 Segmentos Display
//-------------------------------------------------------
byte tabla[16]={0x7E,0x0C,0xB6,0x9E,0xCC,0xDA,0xFA,0x0E,0xFE,0xCE,0xEE,0xF8,0x72,0xBC,0xF2,0xE2};
int pausa = 500;
byte conta=0;

void setup() {
  DDRD=B1111111;
}

void loop() {
  PORTD=tabla[conta];  //Conta es un puntero que recorre el array "tabla"
  conta++;             //Se suma uno a "conta"
  delay(1000);

}
