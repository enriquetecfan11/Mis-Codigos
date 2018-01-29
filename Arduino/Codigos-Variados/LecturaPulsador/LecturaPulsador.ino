//------------------------------------------------------
//PROGRAMA: LecturaPulsador.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Lectura Pulsador con serial.read
//------------------------------------------------------

// Definimos los leds
#define LED1 2
#define LED2 3
#define LED3 4

//Definimos los pulsadores
#define P1 8
#define P2 9
#define P3 10

// Definimos Valores de los pulsadores
int value1 = 0;
int value2 = 0;
int value3 = 0;
 
void setup() {
  // PinMode Botones
  pinMode(P1, INPUT);
  pinMode(P2, INPUT);
  pinMode(P3, INPUT);
  // PinMode Leds 
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
 
  Serial.begin(9600); // Iniciamos el puerto serie 

}

void loop() {
  value1 = digitalRead(P1);  //Valor digital de Pulsador 01
  value2 = digitalRead(P2);  //Valor digital de Pulsador 02
  value3 = digitalRead(P3);  //Valor digital de Pulsador 03

  ///////////////

  if(digitalRead(value1 && value2) == HIGH){ 
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    Serial.println("PULSADOR 01 && PULSADOR 02 0N");
  }
  }
