// Sensor pins
#define sensorPin A0

// Value for storing water level
int val = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  //get the reading from the function below and print it
  int level = readSensor();
  
  Serial.print("Water level: ");
  Serial.println(level);
  
  delay(1000);
}

//This is a function used to get the reading
int readSensor() {  
  delay(10);              // wait 10 milliseconds
  val = analogRead(sensorPin);    // Read the analog value form sensor
  return val;             // send current reading
}
