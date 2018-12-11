/*
 * Emma Pareschi
 * 
 * from example: simple (Neopixel library)
 */

#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      12

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_RGB + NEO_KHZ800);

int delayval = 50; // delay of the cycle

uint32_t aqua = pixels.Color(0, 255, 255);  //define the color aqua
uint32_t off = pixels.Color(0, 0, 0);       // set to off when the LEDs are off

void setup() {
  
  pixels.begin(); // This initializes the NeoPixel library.

}

void loop() {

  //turn on cw, one after one, the ring.
  for(int i=0;i<NUMPIXELS;i++){

    pixels.setPixelColor(i, aqua); // aqua colour.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).

  }

  delay(50);

  //turn off ccw, one after one, the ring.
  for(int i = NUMPIXELS; i>=0; i--){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, off); // turn off the ring

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).

  }

    delay(50);
}
