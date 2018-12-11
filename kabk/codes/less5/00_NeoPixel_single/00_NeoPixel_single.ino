/*
 * Emma Pareschi
 * 
 * Basic commands of Library Adafruit_NeoPixel
 * Using some parts from the example "strandtest.ino"
 */

#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      12

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_RGB + NEO_KHZ800);

int delayval = 2000; // delay for half a second

void setup() {
  
  pixels.begin(); // This initializes the NeoPixel library.
  pixels.setBrightness(255);

}

void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1
  // all the way up to the count of pixels minus one.

  pixels.setPixelColor(0, 255, 255, 255);
  pixels.show();

  delay(delayval);

  pixels.setPixelColor(0, 0, 0, 0);
  pixels.show();

  delay(delayval);
  
}
