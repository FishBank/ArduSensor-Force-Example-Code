/* ArduSensor Force Read

Reads the ArduSensor Force, and prints how hard the pinch is on the Serial 
monitor

Qtechknow kits required:
  ArduSensor Force
  
made on 12 July 12
created by Quin
*/

int ArduSensorValue;   // variable to store the value of the ArduSensor Force

void setup() {
  Serial.begin(9600);  // start Serial communication at 9600 baud
}

void loop() {
  // assign the variable to the value of the ArduSensor Force
  ArduSensorValue=analogRead(0);

  int val = map(ArduSensorValue, 0, 1020, 0, 1000);  // convert the value
  // to easily readable numbers
  
  Serial.println(val);  // print the value on the Serial monitor
  delay(100);
}
