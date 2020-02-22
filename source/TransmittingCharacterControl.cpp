// include statements //

#include <iostream>       // TODO: remove after testing
#include "TransmittingCharacterControl.hpp"

// class //

// constructors
TransmittingCharacterControl::TransmittingCharacterControl() {
    Serial.Print("TransmittingCharacterControl::TransmittingCharacterControl() not implemented\n");
}

// destructor
TransmittingCharacterControl::~TransmittingCharacterControl() {
    Serial.Print("TransmittingCharacterControl::~TransmittingCharacterControl() not implemented\n");
}

// member functions //

// user device perspective //

// UC-5.2.2.1
bool TransmittingCharacterControl::receiveDataMessageRequest() {
    Serial.Print("TransmittingCharacterControl::receiveDataMessageRequest() not implemented\n");
    return false;
}

// UC-5.2.2.1
bool TransmittingCharacterControl::acknowledgeDataMessageRequest() {
    Serial.Print("TransmittingCharacterControl::acknowledgeDataMessageRequest() not implemented\n");
    return false;
}

// UC-5.2.3.1
bool TransmittingCharacterControl::receiveDataMessage() {
    Serial.Print("TransmittingCharacterControl::receiveDataMessage() not implemented\n");
    return false;
}

// UC-5.2.3.1
bool TransmittingCharacterControl::acknowledgeDataMessage() {
    Serial.Print("TransmittingCharacterControl::acknowledgeDataMessage() not implemented\n");
    return false;
}

// UC-5.2.4
bool TransmittingCharacterControl::displayDataMessage() {
    Serial.Print("TransmittingCharacterControl::displayDataMessage() not implemented\n");
    return false;
}

// modem device perspective //

// UC-5.2
bool TransmittingCharacterControl::readKeyboardInput() {
    Serial.Print("TransmittingCharacterControl::readKeyboardInput() not implemented\n");
    return false;
}

// UC-5.2.1
bool TransmittingCharacterControl::displayCharacter() {
    Serial.Print("TransmittingCharacterControl::displayCharacter() not implemented\n");
    return false;
}

// UC-5.2.2
bool TransmittingCharacterControl::sendDataMessageRequest() {
    Serial.Print("TransmittingCharacterControl::sendDataMessageRequest() not implemented\n");
    return false;
}

// UC-5.2.2.1
bool TransmittingCharacterControl::receiveDataMessageRequestResponse() {
    Serial.Print("TransmittingCharacterControl::receiveDataMessageRequestResponse() not implemented\n");
    return false;
}

// UC-5.2.3
bool TransmittingCharacterControl::sendDataMessage() {
    Serial.Print("TransmittingCharacterControl::sendDataMessage() not implemented\n");
    return false;
}

// UC-5.2.3.1
bool TransmittingCharacterControl::receiveDataMessageResponse() {
    Serial.Print("TransmittingCharacterControl::receiveDataMessageResponse() not implemented\n");
    return false;
}

// UC-5.2.4
bool TransmittingCharacterControl::reattemptDataMessageRequest() {
    Serial.Print("TransmittingCharacterControl::reattemptDataMessageRequest() not implemented\n");
    return false;
}

// UC-5.2.3
bool TransmittingCharacterControl::resendDataMessage() {
    Serial.Print("TransmittingCharacterControl::resendDataMessage() not implemented\n");
    return false;
}

