byte bigHeart[] = {
  B01100110, 
  B11111111, 
  B11111111, 
  B11111111, 
  B01111110, 
  B00111100, 
  B00011000, 
  B00000000};

byte smallHeart[] = { 
  B00000000, 
  B00000000, 
  B00010100, 
  B00111110, 
  B00111110, 
  B00011100, 
  B00001000, 
  B00000000};

byte smile[] = { 
  B00000000, 
  B01100110, 
  B01100110, 
  B00000000, 
  B10000001, 
  B01000010, 
  B00111100, 
  B00000000};

byte notsmile[] = { 
  B00000000, 
  B01100110, 
  B01100110, 
  B00000000, 
  B00111100, 
  B01000010, 
  B10000001, 
  B00000000};

const int columnPins[] = { 10,11,12,13,14,15,16,17}; 
const int rowPins[] = { 2, 3, 4, 5, 6, 7, 8, 9};

int pixel = 0; 
int columnLevel = 0; 
int rowLevel = 0;

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(rowPins[i], OUTPUT); // make all the LED pins outputs 
    pinMode(columnPins[i], OUTPUT);
    digitalWrite(columnPins[i], HIGH); // disconnect column pins from Ground
    } 

}

void loop() {
int pulseDelay = 1000 ; // milliseconds to wait between beats

//show(smallHeart, 1000);  //show the small heart image for 100 ms
//show(bigHeart, 2000);   // followed by the big heart for 200ms
//delay(pulseDelay);    // show nothing between beats

show(smile, 1000); 
show(notsmile, 1000); 
//delay(pulseDelay);

}


// routine to show a frame of an image stored in the array pointed to by the image parameter.
// the frame is repeated for the given duration in milliseconds
void show( byte * image, unsigned long duration)
{
unsigned long start = millis(); 
while (start + duration > millis())
    {
      for(int row = 0; row < 8; row++)
        {
          digitalWrite(rowPins[row], HIGH);
          for(int column = 0; column < 8; column++)
            {
              boolean pixel = bitRead(image[row],column); 
              if(pixel == 1)
            {
              digitalWrite(columnPins[column], LOW); // connect column to Gnd
             }
            delayMicroseconds(300); 
            digitalWrite(columnPins[column], HIGH);
            }
            digitalWrite(rowPins[row], LOW);
            
} }
}


