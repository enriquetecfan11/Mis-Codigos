//------------------------------------------------------
//PROGRAMA: LCD_I2C.ino (Arduino UNO rev3)
//Autor: Enrique Rodriguez Vela (enero-2018)
//Descripción: LCD I2C Arduino
//Modulos usados: Pantalla LCD
//-------------------------------------------------------

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

void setup()
{
  Serial.begin(9600);  

  lcd.begin(16,2);
}


void loop()   
{
  {
    if (Serial.available()) {
      lcd.clear();
      while (Serial.available() > 0) {
        lcd.write(Serial.read());
      }
    }
  }

}
