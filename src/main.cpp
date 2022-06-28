#include <Arduino.h>

unsigned long duration1;
unsigned long duration2;


void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  Serial.begin(57600);

}

void loop() {
  // put your main code here, to run repeatedly:
  duration1 = pulseIn(7, HIGH);
  duration2 = pulseIn(7, LOW);

  double duration3 = (duration1 + duration2);
  double Frequencia = (1/duration3)* 1000000.0;
  Serial.print(Frequencia);
   
}