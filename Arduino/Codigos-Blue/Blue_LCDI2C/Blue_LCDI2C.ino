//------------------------------------------------------
//PROGRAMA: Blue_LCDI2C.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Escribir datos en pantalla i2c 
//            a traves del modulo bluetooth
//Modulos: Bluetooth (HC-05) y LCD I2C
//-------------------------------------------------------
// Necesitamos la libreria de Wire.h y la de LiquidCrystal_I2C.h
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

// Variables del Bluetooth
int estado=0;

void setup(){
  Serial.begin(9600); // Inciamos el serial
   lcd.begin(15,2);     // LCD On y las lineas que tiene la LCD la que uso 
                       // es de 16x2 
}

void loop(){
 {
    if (Serial.available()) { // Si el serial esta encendido
      estado = Serial.read();
      delay(100);
      lcd.clear();            // Esperamos 100 segundos y borramos la pantalla
      while (Serial.available() > 0) { // Cuando este el serial OK
        lcd.write(Serial.read());   // La pantalla escribe lo que nosotros
                                    // hemos puesto en el serial
      }
    }
  }
} 
