/*
 * Lcd hello world!
 */

#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12;
const int en = 11;
const int d4 = 5;
const int d5 = 4; 
const int d6 = 3; 
const int d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16,2);    // set up the LCD's number of columns and rows:
  lcd.print("hello, world!");  // Print a message to the LCD.
}

void loop() {
  }
