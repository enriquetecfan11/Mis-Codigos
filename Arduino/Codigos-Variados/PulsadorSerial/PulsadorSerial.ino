const int buttonPin = 10;
const int buttonPin2 = 3;
const int ledPin = 13;
const int ledPin2 = 12;
// declaracion de variables
int buttonState = 0;
int buttonState1 = 0;

void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(buttonPin, INPUT);    

  pinMode(ledPin2, OUTPUT);      
  pinMode(buttonPin2, INPUT);

   Serial.begin(9600);
  
}

void loop(){
  buttonState = digitalRead(buttonPin);  
  buttonState1 = digitalRead(buttonPin2);
  

  if (buttonState == HIGH) {        
    digitalWrite(ledPin, HIGH);  
    Serial.println("Pulsador Activado 1");
  }
  else {
    digitalWrite(ledPin, LOW);
  }

  if (buttonState1 == HIGH) {        
    digitalWrite(ledPin2, HIGH);  
    Serial.println("Pulsador Activado 2");
  }
  else {
    digitalWrite(ledPin2, LOW);
  }
}
