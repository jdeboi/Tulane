/* 
 Basic Neopixel Sketch
 Make sure to install the Adafruit Neopixel Library
*/

#include <Adafruit_NeoPixel.h>
#define PIN 2
Adafruit_NeoPixel strip = Adafruit_NeoPixel(5, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); 
}

void loop() {
   //functions go here
   strip.setPixelColor(0, 255, 0, 0);
   strip.show();
}
