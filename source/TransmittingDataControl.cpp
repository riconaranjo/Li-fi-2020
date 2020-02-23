// include statements //

#include <iostream>       // TODO: remove after testing
#include "TransmittingDataControl.hpp"

// class //

// constructors
TransmittingDataControl::TransmittingDataControl() {
    // Serial.print("TransmittingDataControl::TransmittingDataControl() not implemented\n");
}

// destructor
TransmittingDataControl::~TransmittingDataControl() {
    // Serial.print("TransmittingDataControl::~TransmittingDataControl() not implemented\n");
}

// member functions //

// user device perspective //

// UC-6.2.1
bool TransmittingDataControl::receiveDataMessageRequest() {
    // Serial.print("TransmittingDataControl::receiveDataMessageRequest() not implemented\n");
    return false;
}

// UC-6.2.1
bool TransmittingDataControl::acknowledgeDataMessageRequest() {
    // Serial.print("TransmittingDataControl::acknowledgeDataMessageRequest() not implemented\n");
    return false;
}

// UC-6.3.1
bool TransmittingDataControl::receiveDataMessage() {
    // Serial.print("TransmittingDataControl::receiveDataMessage() not implemented\n");
    return false;
}

// UC-6.3.1
bool TransmittingDataControl::acknowledgeDataMessage() {
    // Serial.print("TransmittingDataControl::acknowledgeDataMessage() not implemented\n");
    return false;
}

// UC-6.6
bool TransmittingDataControl::reconstructDataMessage() {
    // Serial.print("TransmittingDataControl::reconstructDataMessage() not implemented\n");
    return false;
}

// UC-6.7
bool TransmittingDataControl::displayTransmissionSpeed() {
    // Serial.print("TransmittingDataControl::displayTransmissionSpeed() not implemented\n");
    return false;
}

// modem device perspective //

// UC-6.2
bool TransmittingDataControl::sendDataMessageRequest() {
    // Serial.print("TransmittingDataControl::sendDataMessageRequest() not implemented\n");
    return false;
}

// UC-6.3
bool TransmittingDataControl::sendDataMessage() {
    // Serial.print("TransmittingDataControl::sendDataMessage() not implemented\n");
    return false;
}

// UC-6.3.2
bool TransmittingDataControl::receiveDataMessageResponse() {
    // Serial.print("TransmittingDataControl::receiveDataMessageResponse() not implemented\n");
    return false;
}

// UC-6.3.2
bool TransmittingDataControl::resendDataMessage() {
    // Serial.print("TransmittingDataControl::resendDataMessage() not implemented\n");
    return false;
}

// UC-6.4
bool TransmittingDataControl::reattemptDataMessageRequest() {
    // Serial.print("TransmittingDataControl::reattemptDataMessageRequest() not implemented\n");
    return false;
}


