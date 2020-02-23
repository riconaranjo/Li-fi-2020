// include statements //

#include <iostream>       // TODO: remove after testing
#include "TransmittingCharacterControl.hpp"

// class //

// constructors
TransmittingCharacterControl::TransmittingCharacterControl() {
    // Serial.print("TransmittingCharacterControl::TransmittingCharacterControl() not implemented\n");
}

// destructor
TransmittingCharacterControl::~TransmittingCharacterControl() {
    // Serial.print("TransmittingCharacterControl::~TransmittingCharacterControl() not implemented\n");
}

// member functions //

// user device perspective //

// UC-5.2.2.1
bool TransmittingCharacterControl::receiveDataMessageRequest() {
    // Serial.print("TransmittingCharacterControl::receiveDataMessageRequest() not implemented\n");
    return false;
}

// UC-5.2.2.1
bool TransmittingCharacterControl::acknowledgeDataMessageRequest() {
    // Serial.print("TransmittingCharacterControl::acknowledgeDataMessageRequest() not implemented\n");
    return false;
}

// UC-5.2.3.1
bool TransmittingCharacterControl::receiveDataMessage() {
    // Serial.print("TransmittingCharacterControl::receiveDataMessage() not implemented\n");
    return false;
}

// UC-5.2.3.1
bool TransmittingCharacterControl::acknowledgeDataMessage() {
    // Serial.print("TransmittingCharacterControl::acknowledgeDataMessage() not implemented\n");
    return false;
}

// UC-5.2.4
bool TransmittingCharacterControl::displayDataMessage() {
    // Serial.print("TransmittingCharacterControl::displayDataMessage() not implemented\n");
    return false;
}

// modem device perspective //

// UC-5.2
bool TransmittingCharacterControl::readKeyboardInput() {
    // Serial.print("TransmittingCharacterControl::readKeyboardInput() not implemented\n");
    return false;
}

// UC-5.2.1
bool TransmittingCharacterControl::displayCharacter() {
    // Serial.print("TransmittingCharacterControl::displayCharacter() not implemented\n");
    return false;
}

// UC-5.2.2
bool TransmittingCharacterControl::sendDataMessageRequest() {
    // Serial.print("TransmittingCharacterControl::sendDataMessageRequest() not implemented\n");
    return false;
}

// UC-5.2.2.1
bool TransmittingCharacterControl::receiveDataMessageRequestResponse() {
    // Serial.print("TransmittingCharacterControl::receiveDataMessageRequestResponse() not implemented\n");
    return false;
}

// UC-5.2.3
bool TransmittingCharacterControl::sendDataMessage() {
    // Serial.print("TransmittingCharacterControl::sendDataMessage() not implemented\n");
    return false;
}

// UC-5.2.3.1
bool TransmittingCharacterControl::receiveDataMessageResponse() {
    // Serial.print("TransmittingCharacterControl::receiveDataMessageResponse() not implemented\n");
    return false;
}

// UC-5.2.4
bool TransmittingCharacterControl::reattemptDataMessageRequest() {
    // Serial.print("TransmittingCharacterControl::reattemptDataMessageRequest() not implemented\n");
    return false;
}

// UC-5.2.3
bool TransmittingCharacterControl::resendDataMessage() {
    // Serial.print("TransmittingCharacterControl::resendDataMessage() not implemented\n");
    return false;
}

