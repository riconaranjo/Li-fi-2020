// include statements //

#include "CharacterTransmissionControl.h"   // CO-5
#include <iostream> // todo: remove after testing

// constructors
CharacterTransmissionControl::CharacterTransmissionControl() {
    std::cout << "CharacterTransmissionControl::CharacterTransmissionControl() not implemented\n";
}

// destructor
CharacterTransmissionControl::~CharacterTransmissionControl() {
    std::cout << "CharacterTransmissionControl::~CharacterTransmissionControl() not implemented\n";
}

// member functions //

// user device perspective //

// UC-1.1 creates UC-3
bool CharacterTransmissionControl::initiateConnection() {
    std::cout << "CharacterTransmissionControl::initiateConnection() not implemented\n";
}
// UC-1.2 creates UC-5
bool CharacterTransmissionControl::receiveCharacter() {
    std::cout << "CharacterTransmissionControl::receiveCharacter() not implemented\n";

}
// UC-1.3
bool CharacterTransmissionControl::displayCharacter() {
    std::cout << "CharacterTransmissionControl::displayCharacter() not implemented\n";
}

// modem device perspective //

// UC-1.1 creates UC-3
bool CharacterTransmissionControl::acceptConnection() {
    std::cout << "CharacterTransmissionControl::acceptConnection() not implemented\n";
}
// UC-1.2 creates UC-5
bool CharacterTransmissionControl::transmitCharacter() {
    std::cout << "CharacterTransmissionControl::transmitCharacter() not implemented\n";
}
