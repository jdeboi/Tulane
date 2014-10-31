/*
  Photoresistor Code
*/

// define a pin for Photoresistor
int lightPin = 0; 

void setup() {
     // Begin serial communication
    Serial.begin(9600); 
}
void loop() {
    // Write the value of the photoresistor to the serial monitor.
    int reading = analogRead(lightPin);
    Serial.println(reading);
}
