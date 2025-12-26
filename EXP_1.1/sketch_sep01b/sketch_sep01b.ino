#define ADC_Ref 3300 //mV
#define ADC_Reso 4096 //12bitADC
#define Pot 36 // Analog input  --intsed of pot we can use sensor


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
 int  ADC = analogRead(Pot);
 float mV = ADC*ADC_Ref/ADC_Reso;
 Serial.print(mV);
 Serial.print("mV");
 delay(250);
}
