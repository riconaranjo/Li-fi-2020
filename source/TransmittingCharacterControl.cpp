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
    modem->SendUserDataMessageACK();
}

// UC-5.2.3.1
bool TransmittingCharacterControl::receiveDataMessage() {
    Serial.print("TransmittingCharacterControl::receiveDataMessage() not implemented\n");
    return false;
}

// UC-5.2.3.1
void TransmittingCharacterControl::acknowledgeDataMessage() {
    Serial.print("TransmittingCharacterControl::acknowledgeDataMessage() not implemented\n");
}

// UC-5.2.4
void TransmittingCharacterControl::displayDataMessage() {
    Serial.print("TransmittingCharacterControl::displayDataMessage() not implemented\n");
    modem->displayLastDataMessage();
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
    Serial.print("TransmittingCharacterControl::sendDataMessageRequest() not implemented\n");
    // TODO: send data message to fpga
    // set up DataMessage
    // send data message to FPGA
    DataMessage* message = new DataMessage();
    modem->sendDataMessage(*message);
}

// UC-5.2.2.1
bool TransmittingCharacterControl::receiveDataMessageRequestResponse() {
    Serial.print("TransmittingCharacterControl::receiveDataMessageRequestResponse() not implemented\n");
    // TODO: read fpga input for response for data message request
    return false;
}

// UC-5.2.3
void TransmittingCharacterControl::sendDataMessage() {
    Serial.print("TransmittingCharacterControl::sendDataMessage() not implemented\n");
}

// UC-5.2.3.1
bool TransmittingCharacterControl::receiveDataMessageResponse() {
    Serial.print("TransmittingCharacterControl::receiveDataMessageResponse() not implemented\n");
    return false;
}

// UC-5.2.4
void TransmittingCharacterControl::resendDataMessageRequest() {
    this->sendDataMessageRequest();
}

// UC-5.2.3
void TransmittingCharacterControl::resendDataMessage() {
    this->sendDataMessage();
}

