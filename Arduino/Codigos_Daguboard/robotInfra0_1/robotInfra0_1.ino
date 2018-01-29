//              Codigo Robot                 //
//           Enrique Rodriguez Vela         //
//               Version 0.1               //

// Definimos los pines de los motores 
int in1 = 7; 
int in2 = 8;
int in3 = 9;
int in4 = 10;

int IR = 2;

int input;

// Declaramos los pines como salidas 
void setup (){
pinMode( in1, OUTPUT);
pinMode( in2, OUTPUT);
pinMode( in3, OUTPUT);
pinMode( in4, OUTPUT);

pinMode(IR, INPUT);

Serial.begin(9600);
}

void loop (){
  int valor1 = digitalRead(IR) ;
  delay(50);
 if (valor1 == 0)
   Serial.println(valor1);
  digitalWrite(in1, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  
   
 
 
 if (valor1)
 Serial.println(valor1);
 digitalWrite(in1, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
 delay(1000);
 

}
