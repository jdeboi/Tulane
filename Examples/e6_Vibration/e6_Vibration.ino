/*
  Vibration Sensor
*/

int GroundPin= 0;
int sensePin= 1;

void setup() {
   Serial.begin(9600);
   pinMode(GroundPin, OUTPUT);
   digitalWrite(GroundPin, LOW);
}

void loop() {
   int reading = analogRead(sensePin);
   Serial.println(reading);
}
