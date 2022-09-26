#include <Arduino.h>
#include "HelloWorld.h"

void setup() {
  Serial.begin(9600);
  HelloWorld helloworld;
  
  helloworld.Statement(5);
}

void loop() {

}