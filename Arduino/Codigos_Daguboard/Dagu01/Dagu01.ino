void setup() {
   pinMode(7, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(10, OUTPUT);

}

void loop() {
 digitalWrite(7, LOW);
 digitalWrite(9, HIGH);
 digitalWrite(8, LOW);
 digitalWrite(10, HIGH);
}
