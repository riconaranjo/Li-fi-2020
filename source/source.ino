#include "Controller.hpp"

unsigned __exidx_start;
unsigned __exidx_end;
unsigned _gettimeofday;

SerLCD display;

void setupDisplay();

void setup() {
    Serial.begin(9600);
    Serial.println("running setup...");

    // set up LCD display
    setupDisplay();

    // set up modem
    Controller controller;
    controller.LaunchModem(display);
}

void loop() {
    Serial.println("~");
}

// set up LCD display
// pin 8 (teensy)  to  RX  (LCD)
// 3V    (teensy)  to  RAW (LCD)
// GND   (teensy)  to  -   (LCD)
void setupDisplay() {
    Serial2.begin(9600); // Serial2 since pin 8 is TX2
    display.begin(Serial2);
    display.setBacklight(0x005F5F5F);

    delay(500);
    display.clear();
    display.print("Fuck this       Shit");  // 16x2 display
    display.saveSplash();
    delay(3000);
}