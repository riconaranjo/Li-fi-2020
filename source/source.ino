#include <SerLCD.h>
#include <PS2Keyboard.h>

#include "Controller.hpp"

unsigned __exidx_start;
unsigned __exidx_end;
unsigned _gettimeofday;

SerLCD display;
PS2Keyboard keyboard;
Controller controller;

const int DataPin = 22; // keyboard data --> green
const int IRQpin =  23; // keyboard clock -> red

void setupDisplay();

void setup() {
    Serial.begin(9600);
    Serial.println("running setup...");

    delay(1000);
    Serial.println("going to set up keyboard...");

    // setupDisplay();
    setupKeyboard();

    delay(1000);

    Serial.println("setting up controller?");
    delay(1000);
    // set up modem
    // controller = Controller();
    controller.LaunchModem(display, keyboard);
    
    Serial.println("done setup");
    delay(2000);
}

void loop() {
    Serial.println("~");
}

// set up LCD display
// pin 8 (teensy)  to  RX  (LCD)
// 3V    (teensy)  to  RAW (LCD)
// GND   (teensy)  to  -   (LCD)
void setupDisplay() {
    Serial.println("setup display...");
    
    Serial2.begin(9600); // Serial2 since pin 8 is TX2
    display.begin(Serial2);
    display.setBacklight(0x005F5F5F);

    delay(250);

    display.clear();
    display.print("Fuck this       Shit");  // 16x2 display
    display.saveSplash();

    delay(3000);
    Serial.println("done setup display...");
}

void setupKeyboard() {
    Serial.println("setup keyboard...");
    keyboard.begin(DataPin, IRQpin);
    Serial.println("done setting up keyboard...");
}