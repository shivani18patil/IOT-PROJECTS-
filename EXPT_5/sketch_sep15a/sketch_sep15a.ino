#include <ESP32Servo.h>

static const int ServoPin = 12;
Servo Servo1;


void setup() {
 
  Serial.begin(9600);
  Servo1.attach(ServoPin);

}

void loop() {
  for(int PosDegrees=0;PosDegrees<=90;PosDegrees++){
   Servo1.write(PosDegrees);
   Serial.println(PosDegrees);
   //delay(200);
  }
   for(int PosDegrees=90;PosDegrees>=0;PosDegrees--){
   Servo1.write(PosDegrees);
   Serial.println(PosDegrees);
   //delay(200);
  }
  }
