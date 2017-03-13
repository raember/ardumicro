#include <Keyboard.h>

int run;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  run = 1;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (run == 1) {
    Keyboard.begin();
    Keyboard.println("Test");
    Keyboard.end();
    run = 0;
  }
}
