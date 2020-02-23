#include "Controller.hpp"

unsigned __exidx_start;
unsigned __exidx_end;
unsigned _gettimeofday;

void setup() {
    Controller controller;
    controller.LaunchModem();
    Serial.print("running??\n");
}

void loop() {
    Serial.print("~\n");
}
