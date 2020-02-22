// include statements //

#include <iostream>       // TODO: remove after testing
#include <vector>         // std::vector
#include <ctime>          // std::time
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::milliseconds
#include "Controller.hpp"
#include "Keyboard.hpp"
#include "FPGA.hpp"

// class //

// constructor
Controller::Controller(): modem(Modem()) {
    isModem = false;
    inCharacterTransmissionMode = false;
    inDataTransmissionMode = false;
}

// destructor
Controller::~Controller() {
}

void Controller::LaunchModem() {
    KeyboardInput* last_input = nullptr; // keyboard input used to 
    while (true) {
        // check for fpga input for general messages
        modem.readFPGAInput(); // TODO: do something with this

        // error checking
        if (inCharacterTransmissionMode && inDataTransmissionMode) {
            // throw "cannot not be in both character and data transmission modes at the same time!";
            Serial.Print("!! cannot not be in both character and data transmission modes at the same time!");
        }

        if (inCharacterTransmissionMode) {
            CharacterTransmissionMode();
        } else if (inDataTransmissionMode) {
            DataTransmissionMode();
        }
    } // end while
}


// UC-5: character transmission mode logic
void Controller::CharacterTransmissionMode() {
}

// UC-6: data transmission mode logic
void Controller::DataTransmissionMode() {
}
