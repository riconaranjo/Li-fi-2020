// include statements //

#include "Controller.hpp"
#include "CharacterTransmissionControl.hpp"
#include "SpeedTransmissionControl.hpp"

// class //

// constructor
Controller::Controller(): AbstractController() {
// Controller::Controller(): AbstractController() {
    inCharacterTransmissionMode = false;
    inDataTransmissionMode = false;
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
void Controller::LaunchModem(SerLCD& display) {
    modem->setupKeyboard(display);

    while (true) {
        // error checking
        if (inCharacterTransmissionMode && inDataTransmissionMode) {
            // throw "cannot not be in both character and data transmission modes at the same time!"; // need to enable exceptions...
            Serial.print("!! cannot not be in both character and data transmission modes at the same time!");
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
            uc_1.acceptConnection();  // S1m - creates UC-3

            while (true) {
                uc_1.getKeyboardInput();    // S2m - handles connection signals
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
