
// Setup Neopixels
#include <Adafruit_NeoPixel.h>
#define PIN 2
Adafruit_NeoPixel strip = Adafruit_NeoPixel(4, PIN, NEO_GRB + NEO_KHZ800);
 
char val; // Data received from the serial port
int neopixelNum = 2; // Set the pin to digital I/O 13

void setup() {
  pinMode(ledPin, OUTPUT); // Set pin as OUTPUT
  Serial.begin(9600); // Start serial communication at 9600 bps
  strip.begin();
  strip.show(); 
}

void loop() {
   if (Serial.available()) { 
     // If data is available to read,
     val = Serial.read(); // read it and store it in val
   }
   if (val == '1') { 
     // If 1 was received, turn on Neopixel
     strip.setPixelColor(neopixelNum, 255, 0, 0);
     strip.show();
   } 
   else {
     // turn off Neopixel
     strip.setPixelColor(neopixelNum, 0, 0, 0);
     strip.show();
   }
   delay(10); // Wait 10 milliseconds for next reading
}

