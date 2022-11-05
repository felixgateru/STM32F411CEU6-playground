#include <Arduino.h>

#define DELAY 100

void setup() {
  // put your setup code here, to run once:
  pinMode(PC13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PC13,HIGH);
  delay(DELAY);
  digitalWrite(PC13,LOW);
  delay(DELAY);
}