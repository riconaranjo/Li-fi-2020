// include statements //

#include <iostream>       // TODO: remove after testing
#include <vector>         // std::vector
#include <ctime>          // std::time
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::milliseconds
#include "Controller.hpp"
#include "FPGA.hpp"
#include "Keyboard.hpp"

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

    // error checking
    if (inCharacterTransmissionMode && inDataTransmissionMode) {
        // throw "cannot not be in both character and data transmission modes at the same time!"; // need to enable exceptions...
        Serial.Print("!! cannot not be in both character and data transmission modes at the same time!");
        exit(-1);
    }

    KeyboardInput* last_keyboard_input = nullptr;
    FPGAResponse* last_FPGA_input = nullptr;

    while (true) {
        // read FPGA for new messages
        last_FPGA_input = modem.readFPGAInput();
        last_keyboard_input = modem.readKeyboardInput();

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
