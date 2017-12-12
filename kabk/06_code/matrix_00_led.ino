/*
 * Emma Pareschi
 * Dec 2017
 * turning on a single Led f a 8x8 Led Matrix
*/

//1088BS
//const int columnPins[] = { 10,11,12,13,14,15,16,17}; 
//const int rowPins[] = { 2, 3, 4, 5, 6, 7, 8, 9};

//T1237
const int columnPins[] = { 2, 3, 4, 5, 6, 7, 8, 9};
const int rowPins[] = { 10,11,12,13,14,15,16,17}; 


int pixel = 0; 
int columnLevel = 0; 
int rowLevel = 0;

void setup() {

  for (int i = 0; i < 8; i++) {
    pinMode(columnPins[i], OUTPUT); // make all the LED pins outputs
    pinMode(rowPins[i], OUTPUT); 
    }
    
}

void loop() {

digitalWrite(columnPins[0], LOW);
digitalWrite(rowPins[0], HIGH);

delay(100);

for (int i=1; i<8; i++){
  pinMode(columnPins[i], INPUT);
}

delay(100);



  
}
