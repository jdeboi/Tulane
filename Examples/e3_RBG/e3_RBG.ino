
/*
  RGB LED
  
  a sketch to control an RGB (red, green, blue) LED. 
  change the R,G,B values to mix colors!
  http://www.colorpicker.com/
*/

int rPin=3;
int gPin=5;
int bPin=6;

int rValue = 255;
int gValue = 0;
int bValue = 0;

void setup() {
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);  
}

void loop() {
  analogWrite(rPin, rValue);
  analogWrite(gPin, gValue);
  analogWrite(bPin, bValue);
}
