void setup() {
   pinMode(7, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(10, OUTPUT);

}

void loop() {

 //analogWrite(9, 64);
 //analogWrite(10,64);
 delay(1000);
 analogWrite(9, 128);
 analogWrite(10,128);
 delay(1000);
 analogWrite(9, 255);
 analogWrite(10,255);
 delay(10000);
 
}
