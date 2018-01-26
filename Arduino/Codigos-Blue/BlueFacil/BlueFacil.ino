int led=2;
int estado=0;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop(){
 if(Serial.available()>0){
 estado = Serial.read();
 
 }
 if (estado =='0'){
   digitalWrite(led,HIGH);
   Serial.println("Encendido");
  }
if(estado=='1'){
   digitalWrite(led,LOW);
   Serial.println("Apagado");
  }
} 
