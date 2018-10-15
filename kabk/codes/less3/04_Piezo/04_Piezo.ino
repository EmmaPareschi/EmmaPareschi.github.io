/*Emma pareschi
 * October 2018
 * I generate a sound with a piezo element
 * and I apply a frequenzy of 1000Hz
 */


const int buzzer = 8; //buzzer between pin 8 and GND


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}

void loop(){
 
  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec

}
