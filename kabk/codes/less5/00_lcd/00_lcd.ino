/*
 * Emma Pareschi, Nov 2018
 * 
 * hello world sketch for LCD
 */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x3F for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

void setup()
{
  // initialize the LCD
  lcd.begin(16,2);
  
  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello World!");
}

void loop()
{
  // Do nothing here...
}






