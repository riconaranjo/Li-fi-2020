// include statements //

#include <iostream>       // TODO: remove after testing
#include "TransmittingCharacterControl.h"

// class //

// constructors
TransmittingCharacterControl::TransmittingCharacterControl() {
    std::cout << "TransmittingCharacterControl::TransmittingCharacterControl() not implemented\n";
}

// destructor
~TransmittingCharacterControl::~TransmittingCharacterControl() {
    std::cout << "TransmittingCharacterControl::~TransmittingCharacterControl() not implemented\n";
}

// member functions //

// user device perspective //

// UC-5.2.2.1
bool TransmittingCharacterControl::receiveDataMessageRequest() {
    std::cout << "TransmittingCharacterControl::receiveDataMessageRequest() not implemented\n";
    return false;
}

// UC-5.2.2.1
bool TransmittingCharacterControl::acknowledgeDataMessageRequest() {
    std::cout << "TransmittingCharacterControl::acknowledgeDataMessageRequest() not implemented\n";
    return false;
}

// UC-5.2.3.1
bool TransmittingCharacterControl::receiveDataMessage() {
    std::cout << "TransmittingCharacterControl::receiveDataMessage() not implemented\n";
    return false;
}

// UC-5.2.3.1
bool TransmittingCharacterControl::acknowledgeDataMessage() {
    std::cout << "TransmittingCharacterControl::acknowledgeDataMessage() not implemented\n";
    return false;
}

// UC-5.2.4
bool TransmittingCharacterControl::displayDataMessage() {
    std::cout << "TransmittingCharacterControl::displayDataMessage() not implemented\n";
    return false;
}

// modem device perspective //

// UC-5.2
bool TransmittingCharacterControl::readKeyboardInput() {
    std::cout << "TransmittingCharacterControl::readKeyboardInput() not implemented\n";
    return false;
}

// UC-5.2.1
bool TransmittingCharacterControl::displayCharacter() {
    std::cout << "TransmittingCharacterControl::displayCharacter() not implemented\n";
    return false;
}

// UC-5.2.2
bool TransmittingCharacterControl::sendDataMessageRequest() {
    std::cout << "TransmittingCharacterControl::sendDataMessageRequest() not implemented\n";
    return false;
}

// UC-5.2.2.1
bool TransmittingCharacterControl::receiveDataMessageRequestResponse() {
    std::cout << "TransmittingCharacterControl::receiveDataMessageRequestResponse() not implemented\n";
    return false;
}

// UC-5.2.3
bool TransmittingCharacterControl::sendDataMessage() {
    std::cout << "TransmittingCharacterControl::sendDataMessage() not implemented\n";
    return false;
}

// UC-5.2.3.1
bool TransmittingCharacterControl::receiveDataMessageResponse() {
    std::cout << "TransmittingCharacterControl::receiveDataMessageResponse() not implemented\n";
    return false;
}

// UC-5.2.4
bool TransmittingCharacterControl::reattemptDataMessageRequest() {
    std::cout << "TransmittingCharacterControl::reattemptDataMessageRequest() not implemented\n";
    return false;
}

// UC-5.2.3
bool TransmittingCharacterControl::resendDataMessage() {
    std::cout << "TransmittingCharacterControl::resendDataMessage() not implemented\n";
    return false;
}

