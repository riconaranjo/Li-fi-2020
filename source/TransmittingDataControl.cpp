// include statements //
#include <iostream>       // TODO: remove after testing
#include "TransmittingDataControl.h"

// class //

// constructors
TransmittingDataControl::TransmittingDataControl() {
    std::cout << "TransmittingDataControl::TransmittingDataControl() not implemented\n";
}

// destructor
~TransmittingDataControl::TransmittingDataControl() {
    std::cout << "TransmittingDataControl::~TransmittingDataControl() not implemented\n";
}

// member functions //

// user device perspective //

// UC-6.2.1
bool TransmittingDataControl::receiveDataMessageRequest() {
    std::cout << "TransmittingDataControl::receiveDataMessageRequest() not implemented\n";
    return false;
}

// UC-6.2.1
bool TransmittingDataControl::acknowledgeDataMessageRequest() {
    std::cout << "TransmittingDataControl::acknowledgeDataMessageRequest() not implemented\n";
    return false;
}

// UC-6.3.1
bool TransmittingDataControl::receiveDataMessage() {
    std::cout << "TransmittingDataControl::receiveDataMessage() not implemented\n";
    return false;
}

// UC-6.3.1
bool TransmittingDataControl::acknowledgeDataMessage() {
    std::cout << "TransmittingDataControl::acknowledgeDataMessage() not implemented\n";
    return false;
}

// UC-6.6
bool TransmittingDataControl::reconstructDataMessage() {
    std::cout << "TransmittingDataControl::reconstructDataMessage() not implemented\n";
    return false;
}

// UC-6.7
bool TransmittingDataControl::displayTransmissionSpeed() {
    std::cout << "TransmittingDataControl::displayTransmissionSpeed() not implemented\n";
    return false;
}

// modem device perspective //

// UC-6.2
bool TransmittingDataControl::sendDataMessageRequest() {
    std::cout << "TransmittingDataControl::sendDataMessageRequest() not implemented\n";
    return false;
}

// UC-6.3
bool TransmittingDataControl::sendDataMessage() {
    std::cout << "TransmittingDataControl::sendDataMessage() not implemented\n";
    return false;
}

// UC-6.3.2
bool TransmittingDataControl::receiveDataMessageResponse() {
    std::cout << "TransmittingDataControl::receiveDataMessageResponse() not implemented\n";
    return false;
}

// UC-6.3.2
bool TransmittingDataControl::resendDataMessage() {
    std::cout << "TransmittingDataControl::resendDataMessage() not implemented\n";
    return false;
}

// UC-6.4
bool TransmittingDataControl::reattemptDataMessageRequest() {
    std::cout << "TransmittingDataControl::reattemptDataMessageRequest() not implemented\n";
    return false;
}


