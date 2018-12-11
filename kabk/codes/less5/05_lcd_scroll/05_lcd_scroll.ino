 /*
 * Emma Pareschi, Nov 2018
 * 
 * sketch to demostrate the function scrollDisplay for LCD
 */


// include the library code:
#include <LiquidCrystal_I2C.h>
#include <Wire.h> 

// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address


void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("welcome to");
  lcd.setCursor(2,1);
  lcd.print("KABK");
  delay(1000);
}

void loop() {

    for (int positionCounter = 0; positionCounter < 6; positionCounter++) { 
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(700);
  }

    for (int positionCounter = 0; positionCounter < 6; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(700);
  }

  // delay at the end of the full loop:
  delay(1000);

}
