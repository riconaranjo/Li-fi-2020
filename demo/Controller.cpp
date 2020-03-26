// include statements //

#include "Arduino.h"      // String
#include "Controller.hpp"
#include "CharacterTransmissionControl.hpp"
// #include "SpeedTransmissionControl.hpp"

// class //

// constructor
Controller::Controller(PS2Keyboard& keyboard, SerLCD& display): modem(new Modem(keyboard, display)) {
    // TODO: verify these are correct
    inCharacterTransmissionMode = true;
    inDataTransmissionMode = false;

    // TODO: remove
    Serial.println("controller created");
    delay(10);
}

// destructor
Controller::~Controller() {
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

        String* last_FPGA_input = modem->readKeyboardInput();
        String* last_keyboard_input = modem->readFPGAInput();

        if (inCharacterTransmissionMode) {
            // starts UC-1
            CharacterTransmissionControl uc_1 = CharacterTransmissionControl(modem); // SO

            Serial.println("starting UC-3");
            delay(10);
            int count = 0;

            while (count < 25) {
                bool connection = uc_1.acceptConnection();  // S1u - creates UC-3
                delay(10);
                if (connection) break;
                count++;
            }

            while (true) {
                uc_1.receiveCharacter();    // S2u - handles connection signals
                // uc_1.displayCharacter();    // S3u - creates UC-5 --> implemented in uc_1.receiveCharacter()
            }

        } else if (inDataTransmissionMode) {
            // TODO: omitted for demo

            // starts UC-2
            // SpeedTransmissionControl uc_2 = SpeedTransmissionControl();
            // uc_2.acceptConnection();  // S1u - creates UC-3
            // while (true) {
            //     uc_2.receiveData();         // S2u - handles connection signals
            //     uc_2.displayDataSpeed();    // S3u - creates UC-6
            // }
        }
    } // end while
}

// main controller logic as modem device
void Controller::LaunchModem() {

    String* last_FPGA_input = modem->readKeyboardInput();
    String* last_keyboard_input = modem->readFPGAInput();

    while (true) {
        Serial.println("while true...");
        delay(1000);
        // error checking
        if (inCharacterTransmissionMode && inDataTransmissionMode) {
            // throw "cannot not be in both character and data transmission modes at the same time!"; // need to enable exceptions...
            Serial.print("!! cannot not be in both character and data transmission modes at the same time!");
            delay(1000);
            exit(-1);
        }

        // read FPGA for new messages
        last_FPGA_input = modem->readFPGAInput();
        last_keyboard_input = modem->readKeyboardInput();

        // TODO: remove after debug
        Serial.println("inputs read");
        delay(10);

        if (inCharacterTransmissionMode) {
            // TODO: remove after debug
            Serial.println("starting character mode");
            delay(10);
            // starts UC-1
            CharacterTransmissionControl uc_1 = CharacterTransmissionControl(modem); // SO
            
            // TODO: remove after debug
            Serial.println("starting UC-3");
            delay(10);
            int count = 0;
            while (count < 25) {
                bool connection = uc_1.acceptConnection();  // S1m - creates UC-3
                delay(10);
                if (connection) break;
                count++;
            }

            while (true) {
                last_keyboard_input = uc_1.getKeyboardInput();    // S2m - handles connection signals
                if(!last_keyboard_input) {
                    // TODO: remove after debug
                    Serial.println("no keyboard input...");
                    delay(10);
                    continue;
                }

                // TODO: remove after debug
                Serial.println("going to transmit??");
                delay(10);

                bool success = uc_1.transmitCharacter(last_keyboard_input);   // S3m - creates UC-5
                if(!success) {
                    // TODO: remove after debug
                    Serial.println("unable to transmit characters...");
                    delay(10);
                }
            }

        } else if (inDataTransmissionMode) {
            // TODO: omitted for demo

            // // starts UC-2
            // SpeedTransmissionControl uc_2 = SpeedTransmissionControl();
            // uc_2.acceptConnection();  // S1m - creates UC-3
            // while (true) {
            //     uc_2.waitForCue();          // S2m - handles connection signals
            //     uc_2.transmitData();        // S3m - creates UC-6
            // }
        }
    } // end while
}
