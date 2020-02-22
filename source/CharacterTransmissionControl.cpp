// include statements //

#include "CharacterTransmissionControl.hpp"   // CO-5
#include <iostream> // TODO: remove after testing

// constructors
CharacterTransmissionControl::CharacterTransmissionControl() {
    Serial.Print("CharacterTransmissionControl::CharacterTransmissionControl() not implemented\n");
}

// destructor
CharacterTransmissionControl::~CharacterTransmissionControl() {
    Serial.Print("CharacterTransmissionControl::~CharacterTransmissionControl() not implemented\n");
}

// member functions //

// user device perspective //

// UC-1.1 creates UC-3
bool CharacterTransmissionControl::initiateConnection() {
    Serial.Print("CharacterTransmissionControl::initiateConnection() not implemented\n");
    return false;
}
// UC-1.2 creates UC-5
bool CharacterTransmissionControl::receiveCharacter() {
    Serial.Print("CharacterTransmissionControl::receiveCharacter() not implemented\n");
    return false;

}
// UC-1.3
bool CharacterTransmissionControl::displayCharacter() {
    Serial.Print("CharacterTransmissionControl::displayCharacter() not implemented\n");
    return false;
}

// modem device perspective //

// UC-1.1 creates UC-3
bool CharacterTransmissionControl::acceptConnection() {
    Serial.Print("CharacterTransmissionControl::acceptConnection() not implemented\n");
    return false;
}
// UC-1.2 creates UC-5
bool CharacterTransmissionControl::transmitCharacter() {
    Serial.Print("CharacterTransmissionControl::transmitCharacter() not implemented\n");
    return false;
}
