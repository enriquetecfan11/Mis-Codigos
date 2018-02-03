//------------------------------------------------------
//PROGRAMA: CuentaAlarmas.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Cuenta Alarmas
// El led 1 se activa cuando se activa Una alarma
// El led 2 se activa cuando se activa Dos alarmas
// El led 3 se activa cuando se activa Tres alarmas
//
//A B C L1  L2  L3
//0 0 0  1  1  1
//0 0 1  0  1  1
//0 1 0  0  1  1
//0 1 1  0  0  1
//1 0 0  0  1  1
//1 0 1  0  0  1
//1 1 0  0  0  1
//1 1 1  1  1  1

//-------------------------------------------------------

#define led1  2
#define led2  3
#define led3  4

#define P1  8
#define P2  9
#define P3  10

bool estado01 = 0;
bool estado02 = 0;
bool estado03 = 0;


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
  pinMode(P1, INPUT);
  pinMode(P2, INPUT);
  pinMode(P3, INPUT);

  Serial.begin(9600);
}

void loop() {
  estado01 = digitalRead(P1);
  estado02 = digitalRead(P2);
  estado03 = digitalRead(P3);

if(estado01 == 0 && estado02 == 0 && estado03 == 0){ // Solo dos puladores (1 y 2)
    Serial.println("Alarma TOTAL");
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  } 
 
 
if(estado01 == 0 && estado02 == 0 &! estado03 == 0){ // Solo dos puladores (1 y 2)
    Serial.println("Alarma 01");
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  }else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
 
  if(estado01 == 0 && estado03 == 0 &! estado02 == 0){  // Solo dos puladores (1 y 3)
    Serial.println("Alarma 02");
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  }else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }

  if(estado02 == 0 && estado03 == 0 &! estado01 == 0){  // Solo dos puladores (2 y 3)
    Serial.println("Alarma 03");
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  }else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  
  if(estado01 == 0 || estado02 == 0 || estado03 == 0){  // Solo dos puladores (2 y 3)
    Serial.println("Alarma UNO");
    digitalWrite(led1, HIGH);
  }else{
    digitalWrite(led1, LOW);
  }

}
