// include statements //
#include <iostream>       // TODO: remove after testing
#include "SpeedTransmissionControl.hpp"
// #include "TransmittingDataControl.hpp"    // CO-6

// class //

// class for control object for UC-2
// created by the keyboard object BO-1
// constructors
SpeedTransmissionControl::SpeedTransmissionControl() {
    // Serial.Print("SpeedTransmissionControl::SpeedTransmissionControl() not implemented\n");
}

// destructor
SpeedTransmissionControl::~SpeedTransmissionControl() {
    // Serial.Print("SpeedTransmissionControl::~SpeedTransmissionControl() not implemented\n");
}

// member functions //

// user device perspective //

// UC-2.1 creates UC-3 (CO-3)
bool SpeedTransmissionControl::initiateConnection() {
    // Serial.Print("SpeedTransmissionControl::initiateConnection() not implemented\n");
    connectControl = ConnectDevicesControl();
    return false;
}

// UC-2.2 creates UC-6 (CO-6)
bool SpeedTransmissionControl::receiveData() {
    // Serial.Print("SpeedTransmissionControl::receiveData() not implemented\n");
    dataControl = TransmittingDataControl();
    return false;
}

// UC-2.3
bool SpeedTransmissionControl::displayDataSpeed() {
    // Serial.Print("SpeedTransmissionControl::displayDataSpeed() not implemented\n");
    return false;
}

// modem device perspective //

// UC-2.1 creates UC-3 (CO-3)
bool SpeedTransmissionControl::acceptConnection() {
    // Serial.Print("SpeedTransmissionControl::acceptConnection() not implemented\n");
    connectControl = ConnectDevicesControl();
    return false;
}

// UC-2.2 creates UC-6 (CO-6)
bool SpeedTransmissionControl::transmitCharacter() {
    // Serial.Print("SpeedTransmissionControl::transmitCharacter() not implemented\n");
    dataControl = TransmittingDataControl();
    return false;
}
