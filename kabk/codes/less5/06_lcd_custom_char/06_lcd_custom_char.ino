/*
 * 
 * Emma Pareschi, Nov 2018
 *  
 * custom_char sketch
 * creates an animated face using custom characters
*/

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

uint8_t happy[8] = {
B00000, 
B01010, 
B00000, 
B00000, 
B00000, 
B10001, 
B01110, 
B00000
};

uint8_t saddy[8] = {
B00000, 
B01010, 
B00000, 
B00000, 
B01110, 
B10001, 
B00000, 
B00000
};

void setup() { 
  lcd.begin(16, 2);
  lcd.createChar(1, happy); 
  lcd.createChar(2, saddy);
}

void loop() {
  
  for (int i=1; i<3; i++){
    lcd.setCursor(0,0); 
    lcd.write(i); 
    delay(500);
  } 
  
}
