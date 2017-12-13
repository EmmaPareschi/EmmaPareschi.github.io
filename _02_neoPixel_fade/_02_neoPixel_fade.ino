#include <Adafruit_NeoPixel.h>

#define PIN 1
#define NUMPIXELS      2
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);



int delayval = 10; // delay for half a second

// Change These Variables
int maxBrightness = 100;
int minBrightness = 0;
int fadeSpeed = 20;
int fade_loops = 2;


 void setup()
 {
    //strip led
    strip.begin();
    strip.show(); // Initialize all pixels to 'off'  
   
 }
 void loop() {  
    pulseColor(strip.Color(255, 0, 0), fadeSpeed);
 }



void pulseColor(uint32_t c, uint8_t wait) {
  //Increase Brightness / Fade In
  for(int i=minBrightness; i<maxBrightness; i++) {
      strip.setBrightness(i);
      for(int x=0; x<strip.numPixels(); x++){
        strip.setPixelColor(x,c);
      }
      strip.show();
      delay(wait);
  }
  //Lower Brightness / Fade Out
  for(int i=maxBrightness; i>minBrightness; i--) {
       strip.setBrightness(i);
      for(int x=0; x<strip.numPixels(); x++){
        strip.setPixelColor(x,c);
      }
      strip.show();
      delay(wait);
  }
}
 
