/*
Emma Pareschi October 2018
simple code to demostrate the FOR statment
 */

void setup() {
  // open the serial communication with the computer
  Serial.begin(9600);  

}

void loop() {
  // incremental steps
  for (int i = 0; i<= 255; i = i + 1){
    Serial.print("index: ");
    Serial.println(i);
    delay(10); 
  }

  // decremental steps
    for (int i = 255; i>= 0; i = i - 1){
    Serial.print("index: ");
    Serial.println(i);
    delay(10); 
  }
  
}
