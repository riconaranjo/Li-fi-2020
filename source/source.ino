
#include "Controller.hpp"

unsigned __exidx_start;
unsigned __exidx_end;
unsigned _gettimeofday;

void setup() {
  // put your setup code here, to run once:
  // Serial.print("setup\n");
  Controller controller;
  controller.LaunchModem();
  std::cout <<"running??\n";

}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.print("~");

}

//void abort(void)
//{
//  for (;;) { }
//}
