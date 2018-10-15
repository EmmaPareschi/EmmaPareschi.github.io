
/*
 * Emma Pareschi - October 2018
 * simple code to demostrate the use of array to control an Array of 6 LEDs
 */
int ledPins[] = { 2, 3, 4, 5, 6, 7 };       // an array of pin numbers to which LEDs are attached
int pinCount = 6;           // the number of pins (i.e. the length of the array)

int wait = 1000; 

void setup() {
   
  // the array elements are numbered from 0 to (pinCount - 1).
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }
}

void loop() {
  
  // loop from the lowest pin to the LOWest:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    // turn the pin on:
    digitalWrite(ledPins[thisPin], HIGH);
  }

delay(wait);

    //turn off all the LEDs
    for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], LOW);
  }
  delay(wait);

}
