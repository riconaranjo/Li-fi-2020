// include statements //
#include <iostream>       // TODO: remove after testing
#include "SpeedTransmissionControl.hpp"
// #include "TransmittingDataControl.hpp"    // CO-6

// class //

// class for control object for UC-2
// created by the keyboard object BO-1
// constructors
SpeedTransmissionControl::SpeedTransmissionControl(bool isModem): isModem(isModem) {
    // Serial.Print("SpeedTransmissionControl::SpeedTransmissionControl() not implemented\n");
}

// destructor
SpeedTransmissionControl::~SpeedTransmissionControl() {
    // Serial.Print("SpeedTransmissionControl::~SpeedTransmissionControl() not implemented\n");
    delete connectControl;
    delete dataControl;
}

// member functions //

// user device perspective //

// UC-2.1 creates UC-3
bool SpeedTransmissionControl::initiateConnection() {
    // Serial.Print("SpeedTransmissionControl::initiateConnection() not implemented\n");
    connectControl = ConnectDevicesControl();
    return false;
}

// UC-2.2 creates UC-6
// S2u - handles connection signals - creates UC-6
bool SpeedTransmissionControl::receiveData() {
    // Serial.Print("SpeedTransmissionControl::receiveData() not implemented\n");
    dataControl = TransmittingDataControl();
    return false;
}

// UC-2.3
// S3u
bool SpeedTransmissionControl::displayDataSpeed() {
    // Serial.Print("SpeedTransmissionControl::displayDataSpeed() not implemented\n");
    return false;
}

// modem device perspective //

// UC-2.1 creates UC-3
bool SpeedTransmissionControl::acceptConnection() {
    // Serial.Print("SpeedTransmissionControl::acceptConnection() not implemented\n");
    connectControl = new ConnectDevicesControl();
    return false;
}

// UC-2.2
// S2m - handles connection signals
bool SpeedTransmissionControl::waitForCue() {
    // Serial.Print("SpeedTransmissionControl::waitForCue() not implemented\n");
    return false;
}

// UC-2.2 creates UC-6
// S3m - creates UC-6
bool SpeedTransmissionControl::transmitData() {
    // Serial.Print("SpeedTransmissionControl::transmitData() not implemented\n");
    dataControl = new TransmittingDataControl();
    return false;
}
