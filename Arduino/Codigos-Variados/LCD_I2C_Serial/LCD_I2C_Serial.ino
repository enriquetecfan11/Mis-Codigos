//------------------------------------------------------
//PROGRAMA: LCD I2C Serial (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: Mandar datos desde el puerto serie a una pantalla I2C
//-------------------------------------------------------

// Necesitamos la libreria de Wire.h y la de LiquidCrystal_I2C.h
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup()
{
  Serial.begin(9600);  // Iniciamos el Serial
  lcd.begin(15,2);     // LCD On y las lineas que tiene la LCD la que uso 
                       // es de 16x2 
}


void loop()   
{
  {
    if (Serial.available()) { // Si el serial esta encendido
      delay(100);
      lcd.clear();            // Esperamos 100 segundos y borramos la pantalla
      while (Serial.available() > 0) { // Cuando este el serial OK
        lcd.write(Serial.read());   // La pantalla escribe lo que nosotros
                                    // hemos puesto en el serial
      }
      lcd.clear();
    }
  }
}
