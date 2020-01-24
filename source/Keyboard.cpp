// include statements //

#include <vector>         // std::vector
#include <iostream>       // todo: remove after testing
#include "CharacterTransmissionControl.h"   // CO-1
#include "Keyboard.h"
#include "SpeedTransmissionControl.h"       // CO-2

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
KeyboardInput Keyboard::read() {
    std::cout << "Keyboard::read() not implemented\n";
}

// member functions
// UC-1.1 creates UC-3
bool Keyboard::initiateConnectionRequest() {
    std::cout << "Keyboard::initiateConnectionRequest() not implemented\n";
}
// UC-1.2 creates UC-5
bool Keyboard::initiateCharacterTransmission() {
    std::cout << "Keyboard::initiateCharacterTransmission() not implemented\n";
    characterControl = CharacterTransmissionControl();
}
// UC-2.2 creates UC-6
bool Keyboard::initiateSpeedTransmission() {
    std::cout << "Keyboard::initiateSpeedTransmission() not implemented\n";
    speedControl = SpeedTransmissionControl();
}
