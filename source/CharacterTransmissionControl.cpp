// include statements //

#include "CharacterTransmissionControl.hpp"   // CO-5

// constructors
CharacterTransmissionControl::CharacterTransmissionControl(): AbstractController() {
    // Serial.print("CharacterTransmissionControl::CharacterTransmissionControl() not implemented\n");
}

// destructor
CharacterTransmissionControl::~CharacterTransmissionControl() {
    // Serial.print("CharacterTransmissionControl::~CharacterTransmissionControl() not implemented\n");
    delete connectControl;
    delete characterControl;
}

// member functions //

// user device perspective //

// UC-1.1 creates UC-3
// S1u - creates UC-3
bool CharacterTransmissionControl::initiateConnection() {
    // Serial.print("CharacterTransmissionControl::initiateConnection() not implemented\n");

    connectControl = new ConnectDevicesControl();

    connectControl->requestToConnect();
    bool response = connectControl->receiveConnectionResponse();

    return response;
}

// UC-1.2 creates UC-5
// S2u - handles connection signals
bool CharacterTransmissionControl::receiveCharacter() {
    // Serial.print("CharacterTransmissionControl::receiveCharacter() not implemented\n");

    // send heartbeat if it's been at least 30 s since last heart beat
    // TODO: heartbeat logic omitted for demo

    KeyboardInput* input = modem->readKeyboardInput();

    characterControl = new TransmittingCharacterControl();

    return false;

}

// UC-1.3
bool CharacterTransmissionControl::displayCharacter() {
    // Serial.print("CharacterTransmissionControl::displayCharacter() not implemented\n");
    return false;
}

// modem device perspective //

// UC-1.1 creates UC-3
// S1m - creates UC-3
bool CharacterTransmissionControl::acceptConnection() {
    // Serial.print("CharacterTransmissionControl::acceptConnection() not implemented\n");
    connectControl = new ConnectDevicesControl();
    return false;
}

// UC-1.2
// S2m - handles connection signals
bool CharacterTransmissionControl::getKeyboardInput() {
    // Serial.print("CharacterTransmissionControl::getKeyboardInput() not implemented\n");
    return false;
}

// UC-1.2 creates UC-5
bool CharacterTransmissionControl::transmitCharacter() {
    // Serial.print("CharacterTransmissionControl::transmitCharacter() not implemented\n");
    characterControl = new TransmittingCharacterControl();
    return false;
}
