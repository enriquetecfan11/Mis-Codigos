void setup() {
   pinMode(7, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(5, INPUT);

Serial.begin(9600);
}

void loop() {
int valor1 = analogRead(5);
delay(100);
Serial.println(valor1);

 
}
