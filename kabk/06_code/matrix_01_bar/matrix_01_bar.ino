/*
matrixMpx sketch

from Arduino cookbook, pg. 234
Sequence LEDs starting from first column and row 
until all LEDS are lit Multiplexing is used to 
control 64 LEDs with 16 pins
*/

const int columnPins[] = { 10,11,12,13,14,15,16,17}; 
const int rowPins[] = { 2, 3, 4, 5, 6, 7, 8, 9};


int pixel = 0; 
int columnLevel = 0; 
int rowLevel = 0;

int pot_pin = A4;
int pot_value = 0;

// pixel value converted into LED column 
// pixel value converted into LED row
void setup() {

  for (int i = 0; i < 8; i++) {
    pinMode(columnPins[i], OUTPUT); // make all the LED pins outputs
    pinMode(rowPins[i], OUTPUT); 
    }

   pinMode(pot_pin, INPUT);
    
}

void loop() {

  pot_value = analogRead(pot_pin);

  pot_value = map(pot_value, 0, 1023, 0, 62);
  
  pixel = pixel + 1; 
  
  if(pixel > pot_value)
  pixel = 0;
  
  columnLevel = pixel / 8;
  rowLevel = pixel % 8;
  
  for (int column = 0; column < 8; column++) {
    
    digitalWrite(columnPins[column], LOW); 
    
    for(int row = 0; row < 8; row++) {
      
      if (columnLevel > column){
      
        digitalWrite(rowPins[row], HIGH); // connect all LEDs in row to +5 volts
      
      } else if (columnLevel == column && rowLevel >= row) {
        
        digitalWrite(rowPins[row], HIGH);
      
      } else {
      
      digitalWrite(columnPins[column], LOW); // turn off all LEDs in this row
      }

// map to the number of columns // get the fractional value
// connect this column to Ground
      

    delayMicroseconds(300); // delay gives frame time of 20ms for 64 LEDs
    digitalWrite(rowPins[row], LOW);
    }// turn off LED
// disconnect this column
    digitalWrite(columnPins[column], HIGH); //from Ground
  } 
}
