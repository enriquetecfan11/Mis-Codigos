//Nombre del codigo Codigo Robot                 
//Autor Enrique Rodriguez Vela Enero 2018      
//Descripcion Movimiento Motores                             
//Version 0.1               


// Definimos los pines de los motores 
int in1 = 7; 
int in2 = 8;
int in3 = 9;
int in4 = 10;

int input;

// Declaramos los pines como salidas 
void setup (){
pinMode( in1, OUTPUT);
pinMode( in2, OUTPUT);
pinMode( in3, OUTPUT);
pinMode( in4, OUTPUT);

Serial.begin(9600);
}

void loop (){
  digitalWrite(in1, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  Serial.print("Adelante");
 
  delay(5000);
  digitalWrite(in1, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  Serial.print("STOP");
 delay(1000);
 

}
