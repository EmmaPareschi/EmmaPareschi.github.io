// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>

#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      1

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel emma = Adafruit_NeoPixel(1, 1, NEO_GRB + NEO_KHZ800);


void setup() {
  emma.begin(); // This initializes the NeoPixel library.
  //pixels.setBrightness(10);
  //pixels.show();
}

void loop() {

   // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
   emma.setPixelColor(0, emma.Color(255,0,0)); // Moderately bright green color.
   
   emma.show();
}
