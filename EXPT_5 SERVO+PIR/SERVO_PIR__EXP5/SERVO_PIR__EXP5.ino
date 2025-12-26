#include <ESP32Servo.h>

static const int ServoPin = 13;
Servo Servo1;
int Inputpin=14;
int pirstate=LOW;
int value=0;



void setup() {
 
  Serial.begin(9600);
  Servo1.attach(ServoPin);
   pinMode(Inputpin,INPUT);
  

}

void loop() {
  
  value=digitalRead(Inputpin);
  Serial.println(value);
  if(value==HIGH){
    Serial.println(" motion detected");
    for(int PosDegrees=0;PosDegrees<=90;PosDegrees++){
       Servo1.write(PosDegrees);
       Serial.println("Object detected door openeing");
       //delay(500);
      }
        for(int PosDegrees=90;PosDegrees>=0;PosDegrees--){
        Servo1.write(PosDegrees);
       Serial.println("Object not Detected");
       //delay(500);
     
        }

     }
  
  
  else
  Serial.println(" NO Motion detected");
  
  delay(200);

  }
