#include<Servo.h>
Servo Myservo;
int pos;
const int sensor_pin = A1;  //moisture sensor at analog pin A1
const int triggerPin1 = 9;
const int echoPin1 = 10;
const int triggerPin2 = 0;
const int echoPin2 = 1;
const int buzzer = A0;
#define velocity 0.034
long duration1, duration2;
float distance1, distance2;
//IR sensor output at pin 5

void setup()
{
  Myservo.attach(3);  //Servo pin 3
  pinMode(5,INPUT);   //IR sensor pin 5
  Serial.begin(9600);
  pinMode(triggerPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(triggerPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
}


void loop()
{
  if (digitalRead(5)== LOW)                                //If IR sensor detects garbage
  {
    delay(500);
    float moisture_percentage;
    int sensor_analog;
    sensor_analog = analogRead(sensor_pin);                               //measures moisture percentage
    //moisture_percentage = ( (1023 - sensor_analog)*100/1024);
    Serial.print("\nSensor_value= ");
    Serial.print(sensor_analog);
    //Serial.print(" Moisture Percentage = ");
    //Serial.print(moisture_percentage);
 
      if(sensor_analog >1015)                         //Checks for threshold
      {                                                    //for wet
       Serial.print(" Garbage is dry");
       Myservo.write(90);
        delay(2000);
       Myservo.write(180);
       delay(2000);
       Myservo.write(90);
      }
 
      else
      {
        Serial.print("Garbage is wet");
      // Myservo.write(90);
        //
        delay(2000);
       Myservo.write(0);
       delay(2000);
       Myservo.write(90);
      }      }
