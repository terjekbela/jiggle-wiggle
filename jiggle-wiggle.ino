#include <Mouse.h>

void setup() {
  Mouse.begin();
}

void loop() {
  delay(5000);
  while(true) { 
    Mouse.move(2,0,0);
    delay(100);
    Mouse.move(-4,0,0);
    delay(100);
    Mouse.move(2,0,0);
    delay(15000);
  }
}
