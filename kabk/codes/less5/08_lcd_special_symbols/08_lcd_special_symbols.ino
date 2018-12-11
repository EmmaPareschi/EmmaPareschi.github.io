/*
 * Emma Pareschi Nov 2018
 * 
 * skecth to show special symbol
*/


#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

void setup() { 
  lcd.begin(16, 2);
}

void loop() {
    lcd.setCursor(5,0); 
    lcd.write(B11100000);
    delay(500);
}
