// include statements //
#include "SpeedTransmissionControl.h"
// #include "TransmittingDataControl.h"    // CO-6

// class //

// class for control object for UC-2
// created by the keyboard object BO-1
// constructors
void SpeedTransmissionControl::SpeedTransmissionControl() {
    std::cout << "SpeedTransmissionControl::SpeedTransmissionControl() not implemented\n";
}

// destructor
void SpeedTransmissionControl::~SpeedTransmissionControl() {
    std::cout << "SpeedTransmissionControl::~SpeedTransmissionControl() not implemented\n";
}

// member functions //

// user device perspective //

// UC-2.1 creates UC-3 (CO-3)
bool SpeedTransmissionControl::initiateConnection() {
    std::cout << "SpeedTransmissionControl::initiateConnection() not implemented\n";
    connectControl = ConnectDevicesControl();
    return false;
}

// UC-2.2 creates UC-6 (CO-6)
bool SpeedTransmissionControl::receiveData() {
    std::cout << "SpeedTransmissionControl::receiveData() not implemented\n";
    dataControl = TransmittingDataControl();
    return false;
}

// UC-2.3
bool SpeedTransmissionControl::displayDataSpeed() {
    std::cout << "SpeedTransmissionControl::displayDataSpeed() not implemented\n";
    return false;
}

// modem device perspective //

// UC-2.1 creates UC-3 (CO-3)
bool SpeedTransmissionControl::acceptConnection() {
    std::cout << "SpeedTransmissionControl::acceptConnection() not implemented\n";
    connectControl = ConnectDevicesControl();
    return false;
}

// UC-2.2 creates UC-6 (CO-6)
bool SpeedTransmissionControl::transmitCharacter() {
    std::cout << "SpeedTransmissionControl::transmitCharacter() not implemented\n";
    dataControl = TransmittingDataControl();
    return false;
}
