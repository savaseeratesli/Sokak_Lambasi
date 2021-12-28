#include <Arduino.h>

int lambaPin=10;
int ldrPin=A3;

void setup() 
{
  pinMode(lambaPin,OUTPUT);
  
  Serial.begin(9600);//LDR değerini okumak için
}

void loop() 
{
  int isikdegeri=analogRead(ldrPin);

  Serial.println(isikdegeri);
  delay(1000);

  if(isikdegeri<20)
  {
    digitalWrite(lambaPin,HIGH);
  }
  else
  {
    digitalWrite(lambaPin,LOW);
  }
}
