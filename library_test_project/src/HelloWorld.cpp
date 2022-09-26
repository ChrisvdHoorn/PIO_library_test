#include "HelloWorld.h"

void HelloWorld::Statement(int times){
    for(int i = 0; i<times; i++){
        Serial.println("Hello World!");
    }
}