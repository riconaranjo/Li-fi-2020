// include statements //

#include "CharacterTransmissionControl.hpp"   // CO-5
#include <iostream> // TODO: remove after testing

// constructors
CharacterTransmissionControl::CharacterTransmissionControl(bool isModem): isModem(isModem) {
    // Serial.Print("CharacterTransmissionControl::CharacterTransmissionControl() not implemented\n");
}

// destructor
CharacterTransmissionControl::~CharacterTransmissionControl() {
    // Serial.Print("CharacterTransmissionControl::~CharacterTransmissionControl() not implemented\n");
    delete connectControl;
    delete characterControl;
}

// member functions //

// user device perspective //

// UC-1.1 creates UC-3
// S1u - creates UC-3
bool CharacterTransmissionControl::initiateConnection() {
    // Serial.Print("CharacterTransmissionControl::initiateConnection() not implemented\n");
    return false;
}

// UC-1.2 creates UC-5
// S2u - handles connection signals
bool CharacterTransmissionControl::receiveCharacter() {
    // Serial.Print("CharacterTransmissionControl::receiveCharacter() not implemented\n");
    return false;

}

// UC-1.3
bool CharacterTransmissionControl::displayCharacter() {
    // Serial.Print("CharacterTransmissionControl::displayCharacter() not implemented\n");
    return false;
}

// modem device perspective //

// UC-1.1 creates UC-3
// S1m - creates UC-3
bool CharacterTransmissionControl::acceptConnection() {
    // Serial.Print("CharacterTransmissionControl::acceptConnection() not implemented\n");
    connectControl = new ConnectDevicesControl();
    return false;
}

// UC-1.2
// S2m - handles connection signals
bool CharacterTransmissionControl::getKeyboardInput() {
    // Serial.Print("CharacterTransmissionControl::getKeyboardInput() not implemented\n");
    return false;
}

// UC-1.2 creates UC-5
bool CharacterTransmissionControl::transmitCharacter() {
    // Serial.Print("CharacterTransmissionControl::transmitCharacter() not implemented\n");
    characterControl = new TransmittingCharacterControl();
    return false;
}
