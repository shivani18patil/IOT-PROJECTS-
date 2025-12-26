//rollno-3246
//Expno 3
#define Sound_velocity 0.034
const int trigger_Pin=5;
const int echo_Pin = 18;
long  duration;
float Distance_Cm;
  

void setup() {
  // put your setup code here, to run once:
  pinMode(trigger_Pin,OUTPUT);
  pinMode(echo_Pin,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigger_Pin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger_Pin,HIGH);
  delayMicroseconds(10);
  duration= pulseIn(echo_Pin,HIGH);
  Distance_Cm = (duration*Sound_velocity)/2;
  Serial.print("distance measured in cm is" );
  
  Serial.println(Distance_Cm);
  delay(200);
}
