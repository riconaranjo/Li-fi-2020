// include statements //

#include <vector>         // std::vector
#include <iostream>       // TODO: remove after testing
#include <string>         // std::string
#include "CharacterTransmissionControl.hpp"   // CO-1
#include "Keyboard.hpp"
#include "SpeedTransmissionControl.hpp"       // CO-2

// class //

// constructors
Keyboard::Keyboard() {
    std::cout << "Keyboard::Keyboard() not implemented\n";
}

// destructor
Keyboard::~Keyboard() {
    std::cout << "Keyboard::~Keyboard() not implemented\n";
}

// member functions
KeyboardInput* Keyboard::read() {
    std::cout << "Keyboard::read() not implemented\n";

    // add timestamp to each keypress
    std::time_t current_time = std::time(nullptr);

    KeyboardInput* keyboard = new KeyboardInput();
    keyboard->text = ""; // TODO: fix this
    keyboard->time = current_time;

    // TODO: actually read from keyboard here
    // update keyboard struct

    return keyboard;
}

// member functions
// UC-1.1 creates UC-3
bool Keyboard::initiateConnectionRequest() {
    std::cout << "Keyboard::initiateConnectionRequest() not implemented\n";

    return false;
}

// UC-1.2 creates UC-5
bool Keyboard::initiateCharacterTransmission() {
    std::cout << "Keyboard::initiateCharacterTransmission() not implemented\n";
    characterControl = CharacterTransmissionControl();

    return false;
}

// UC-2.2 creates UC-6
bool Keyboard::initiateSpeedTransmission() {
    std::cout << "Keyboard::initiateSpeedTransmission() not implemented\n";
    speedControl = SpeedTransmissionControl();

    return false;
}
