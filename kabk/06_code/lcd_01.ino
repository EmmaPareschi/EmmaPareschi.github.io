/*
Emma Pareschi - Dic 2018  
LiquidCrystal Library - Hello World

Based on:
 http://www.arduino.cc/en/Tutorial/LiquidCrystalHelloWorld

*/

// include the library code:
#include "LiquidCrystal.h"

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

}

void loop() {
  // set the cursor to column 0, line 0
  // (note: line 0 is the first row, since counting begins with 0):
  lcd.setCursor(0, 0);
  // Print a message to the LCD.
  lcd.print("hello, world!");  

}
