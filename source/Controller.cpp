// include statements //

#include "Controller.hpp"
#include "CharacterTransmissionControl.hpp"
#include "SpeedTransmissionControl.hpp"

// class //

// constructor
Controller::Controller(): AbstractController() {
    // TODO: verify these are correct
    inCharacterTransmissionMode = true;
    inDataTransmissionMode = false;

    // TODO: remove
    Serial.println("controller created");
    delay(2000);
}

// destructor
Controller::~Controller() {
    // delete modem;
}

// main controller logic as user device
void Controller::LaunchUser() {
    while (true) {
        // error checking
        if (inCharacterTransmissionMode && inDataTransmissionMode) {
            // throw "cannot not be in both character and data transmission modes at the same time!"; // need to enable exceptions...
            Serial.print("!! cannot not be in both character and data transmission modes at the same time!");
            delay(5000);
            exit(-1);
        }

        KeyboardInput* last_keyboard_input = nullptr;
        FPGAResponse* last_FPGA_input = nullptr;

        // read FPGA for new messages
        last_FPGA_input = modem->readFPGAInput();
        last_keyboard_input = modem->readKeyboardInput();

        if (inCharacterTransmissionMode) {
            // starts UC-1
            CharacterTransmissionControl uc_1 = CharacterTransmissionControl(); // SO
            uc_1.initiateConnection();  // S1u - creates UC-3

            while (true) {
                uc_1.receiveCharacter();    // S2u - handles connection signals
                uc_1.displayCharacter();    // S3u - creates UC-5
            }

        } else if (inDataTransmissionMode) {
            // starts UC-2
            SpeedTransmissionControl uc_2 = SpeedTransmissionControl();
            uc_2.acceptConnection();  // S1u - creates UC-3
            while (true) {
                uc_2.receiveData();         // S2u - handles connection signals
                uc_2.displayDataSpeed();    // S3u - creates UC-6
            }
        }
    } // end while
}

// main controller logic as modem device
void Controller::LaunchModem(SerLCD& display, PS2Keyboard& keyboard) {

    Serial.println("launching modem?");
    delay(1000);

    modem->setupKeyboard(display, keyboard);

    Serial.println("keyboard set up");
    delay(1000);

    while (true) {
        Serial.println("while true...");
        delay(1000);
        // error checking
        if (inCharacterTransmissionMode && inDataTransmissionMode) {
            // throw "cannot not be in both character and data transmission modes at the same time!"; // need to enable exceptions...
            Serial.print("!! cannot not be in both character and data transmission modes at the same time!");
            exit(-1);
        }

        KeyboardInput* last_keyboard_input = nullptr;
        FPGAResponse* last_FPGA_input = nullptr;

        Serial.println("reading inputs?");
        delay(1000);

        // read FPGA for new messages
        last_FPGA_input = modem->readFPGAInput();
        last_keyboard_input = modem->readKeyboardInput();

        Serial.println("inputs read");
        delay(1000);

        if (inCharacterTransmissionMode) {
            Serial.println("starting character mode");
            delay(1000);
            // starts UC-1
            CharacterTransmissionControl uc_1 = CharacterTransmissionControl(); // SO
            
            Serial.println("starting UC-3");
            delay(1000);
            uc_1.acceptConnection();  // S1m - creates UC-3

            Serial.println("done starting UC-3");
            delay(1000);

            while (true) {
                Serial.println("getting uc-1 keyboard input???");
                delay(1000);
                uc_1.getKeyboardInput();    // S2m - handles connection signals
                Serial.println("going to transmit??");
                delay(1000);
                uc_1.transmitCharacter();   // S3m - creates UC-5
            }

        } else if (inDataTransmissionMode) {
            // starts UC-2
            SpeedTransmissionControl uc_2 = SpeedTransmissionControl();
            uc_2.acceptConnection();  // S1m - creates UC-3
            while (true) {
                uc_2.waitForCue();          // S2m - handles connection signals
                uc_2.transmitData();        // S3m - creates UC-6
            }
        }
    } // end while
}
