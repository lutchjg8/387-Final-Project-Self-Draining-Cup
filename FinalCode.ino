/* 
 * Jakob Lutch Final Project
 * ECE 387
 * Prof. Jamieson
 * Self Draining Reservoir
 * Final Code
*/

#include <Servo.h>
#define waterLevel A0
Servo myservo;
int position1 = 30;
int position2 = 17;
int val = 0;
int upperLevel = 525;
int lowerLevel = 350;

void setup() {
  myservo.attach(9);
  myservo.write(17);
  Serial.begin(9600);
}

void loop() {
  
  int level = readSensor();
  Serial.print("Water level: ");
  Serial.println(level);
  delay(1000);
  
  if(level>upperLevel){
    myservo.write(position2);
    delay(15);
  }
  if(level<lowerLevel){
    myservo.write(position1);
    delay(15);
  }
}

int readSensor(){
  delay(15);
  val = analogRead(waterLevel);
  return val;
}
