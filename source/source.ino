#include "Controller.hpp"

unsigned __exidx_start;
unsigned __exidx_end;
unsigned _gettimeofday;

void setupDisplay();

void setup() {
    Serial.begin(9600);
    Serial.println("running setup...");

    // set up LCD display
    setupDisplay();

    // set up modem
    Controller controller;
    controller.LaunchModem();
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
    lcd.begin(Serial2);
    lcd.setBacklight(0x005F5F5F);

    delay(500);
    lcd.clear();
    lcd.print("Fuck this       Shit");  // 16x2 display
    lcd.saveSplash();
    delay(3000);
}