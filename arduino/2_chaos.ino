//

#include "Keyboard.h"

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Keyboard.print("Chaos!");
  delay(10);
}
