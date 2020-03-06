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

    bool response = modem->receiveControlMessage();

    while (!response) {
        delay(100);
        response = modem->receiveControlMessage();
    }
    return true;
}

// UC-5.2.2.1
void TransmittingCharacterControl::acknowledgeDataMessageRequest() {
    modem->sendUserAcceptRequestToSendDataMessage();
}

// UC-5.2.3.1
bool TransmittingCharacterControl::receiveDataMessage() {
    bool response = modem->receiveDataMessage();
    return response;
}

// UC-5.2.3.1
void TransmittingCharacterControl::acknowledgeDataMessage() {
    modem->sendUserDataMessageACK();
}

// UC-5.2.4
void TransmittingCharacterControl::displayDataMessage() {
    modem->displayDataMessage();
}

// modem device perspective //

// // UC-5.2
// bool TransmittingCharacterControl::readKeyboardInput() {
//     // Serial.print("TransmittingCharacterControl::readKeyboardInput() not implemented\n");
//     return false;
// }

// // UC-5.2.1
// bool TransmittingCharacterControl::displayCharacter() {
//     // Serial.print("TransmittingCharacterControl::displayCharacter() not implemented\n");
//     return false;
// }

// UC-5.2.2
void TransmittingCharacterControl::sendDataMessageRequest() {
    DataMessage* message = new DataMessage();
    modem->sendDataMessage(*message);
}

// UC-5.2.2.1
bool TransmittingCharacterControl::receiveDataMessageRequestResponse() {
    bool response = modem->receiveControlMessage();
    return response;
}

// UC-5.2.3
void TransmittingCharacterControl::sendDataMessage() {
    modem->sendModemDataMessage();
}

// UC-5.2.3.1
bool TransmittingCharacterControl::receiveDataMessageResponse() {
    bool response = modem->receiveControlMessage();
    return response;
}

// UC-5.2.4
void TransmittingCharacterControl::resendDataMessageRequest() {
    this->sendDataMessageRequest();
}

// UC-5.2.3
void TransmittingCharacterControl::resendDataMessage() {
    this->sendDataMessage();
}

