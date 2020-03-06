#include <SerLCD.h>
#include <PS2Keyboard.h>

#include "Controller.hpp"

unsigned __exidx_start;
unsigned __exidx_end;
unsigned _gettimeofday;

SerLCD display;
PS2Keyboard keyboard;
Controller controller = Controller(keyboard,display);

const int DataPin = 22; // keyboard data --> green
const int IRQpin =  23; // keyboard clock -> red

void setupDisplay();
void setupKeyboard();
void setupFPGA();

void setup() {

    Serial.begin(9600);
    Serial.println("running setup...");
    delay(100);

    setupDisplay();
    setupKeyboard();
    setupFPGA();
    
    Serial.println("done setup");
    delay(2000);
}

void loop() {

    controller.LaunchModem();

    Serial.println("~");
    delay(1000);
}

// set up LCD display
// pin 8 (teensy)  to  RX  (LCD)
// 3V    (teensy)  to  RAW (LCD)
// GND   (teensy)  to  -   (LCD)
void setupDisplay() {

    Serial.println("setting up display...");
    delay(100);
    
    Serial2.begin(9600);
    display.begin(Serial2);
    display.setBacklight(0x005F5F5F);

    delay(100);

    display.clear();
    display.print("Fuck this       Shit");  // 16x2 display
    display.saveSplash();
    delay(3000);
}

// pin connections for PS2 Keyboard
// pin 22 (teensy) to  DATA (green)
// pin 23 (teensy) to  IRQ  (red)
// 5V     (teensy) to  PWR  (orange)
// GND    (teensy) to  GND  (yellow)
void setupKeyboard() {

    Serial.println("setting up keyboard...");
    delay(100);

    keyboard.begin(DataPin, IRQpin);
}

// pin connections for FPGA
// pin 22 (teensy) to  DATA (green)
// pin 23 (teensy) to  IRQ  (red)
// 5V     (teensy) to  PWR  (orange)
// GND    (teensy) to  GND  (yellow)
void setupFPGA() {

    Serial.println("setting up FPGA...");
    delay(100);

    Serial3.begin(9600); // FPGA serial connection
}
