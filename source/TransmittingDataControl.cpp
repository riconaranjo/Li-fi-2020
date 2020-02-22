// include statements //

#include <iostream>       // TODO: remove after testing
#include "TransmittingDataControl.hpp"

// class //

// constructors
TransmittingDataControl::TransmittingDataControl() {
    // Serial.Print("TransmittingDataControl::TransmittingDataControl() not implemented\n");
}

// destructor
TransmittingDataControl::~TransmittingDataControl() {
    // Serial.Print("TransmittingDataControl::~TransmittingDataControl() not implemented\n");
}

// member functions //

// user device perspective //

// UC-6.2.1
bool TransmittingDataControl::receiveDataMessageRequest() {
    // Serial.Print("TransmittingDataControl::receiveDataMessageRequest() not implemented\n");
    return false;
}

// UC-6.2.1
bool TransmittingDataControl::acknowledgeDataMessageRequest() {
    // Serial.Print("TransmittingDataControl::acknowledgeDataMessageRequest() not implemented\n");
    return false;
}

// UC-6.3.1
bool TransmittingDataControl::receiveDataMessage() {
    // Serial.Print("TransmittingDataControl::receiveDataMessage() not implemented\n");
    return false;
}

// UC-6.3.1
bool TransmittingDataControl::acknowledgeDataMessage() {
    // Serial.Print("TransmittingDataControl::acknowledgeDataMessage() not implemented\n");
    return false;
}

// UC-6.6
bool TransmittingDataControl::reconstructDataMessage() {
    // Serial.Print("TransmittingDataControl::reconstructDataMessage() not implemented\n");
    return false;
}

// UC-6.7
bool TransmittingDataControl::displayTransmissionSpeed() {
    // Serial.Print("TransmittingDataControl::displayTransmissionSpeed() not implemented\n");
    return false;
}

// modem device perspective //

// UC-6.2
bool TransmittingDataControl::sendDataMessageRequest() {
    // Serial.Print("TransmittingDataControl::sendDataMessageRequest() not implemented\n");
    return false;
}

// UC-6.3
bool TransmittingDataControl::sendDataMessage() {
    // Serial.Print("TransmittingDataControl::sendDataMessage() not implemented\n");
    return false;
}

// UC-6.3.2
bool TransmittingDataControl::receiveDataMessageResponse() {
    // Serial.Print("TransmittingDataControl::receiveDataMessageResponse() not implemented\n");
    return false;
}

// UC-6.3.2
bool TransmittingDataControl::resendDataMessage() {
    // Serial.Print("TransmittingDataControl::resendDataMessage() not implemented\n");
    return false;
}

// UC-6.4
bool TransmittingDataControl::reattemptDataMessageRequest() {
    // Serial.Print("TransmittingDataControl::reattemptDataMessageRequest() not implemented\n");
    return false;
}


