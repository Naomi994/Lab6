#include <stdio.h>

int ledNum = 13;
int setTime = 1000; 
void setup(){
  pinMode(ledNum,OUTPUT); // outputs voltage
}

void loop(){
  digitalWrite(ledNum, HIGH);
  delay(setTime);
  digitalWrite(ledNum,LOW);
  delay(setTime); 
} 
