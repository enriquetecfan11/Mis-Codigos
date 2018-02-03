//--------------------------------------------//
//Programa: Ardu-Processing.ino
//Autor: Enrique Rodriugez Vela (Enero 2018)
//--------------------------------------------//
 char val; // Data received from the serial port
 char val1; // Data received from the serial port
 char val2; // Data received from the serial port
 int ledPin = 13; // Set the pin to digital I/O 13
 int ledPin1 = 3;

 void setup() {
   pinMode(ledPin, OUTPUT);  // Set pin as OUTPUT
   pinMode(ledPin1, OUTPUT);  // Set pin as OUTPUT
   Serial.begin(9600); // Start serial communication at 9600 bps
 }
 void loop() {
   if (Serial.available()) 
   { // If data is available to read,
     val = Serial.read();// read it and store it in val
     val1 = Serial.read(); 
     val2 = Serial.read(); 
   }
   if (val == '1') 
   { // If 1 was received
     digitalWrite(ledPin, HIGH); // turn the LED on
   } else {
     digitalWrite(ledPin, LOW); // otherwise turn it off
   }
   delay(10); // Wait 10 milliseconds for next reading

   if (val1 == '3') 
   { // If 1 was received
     digitalWrite(ledPin1, HIGH); // turn the LED on
   }
   if (val2 == '4') 
   { // If 1 was received
     digitalWrite(ledPin1, LOW); // turn the LED on
   }
  
}

