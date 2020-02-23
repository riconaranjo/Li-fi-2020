// include statements //

#include "SpeedTransmissionControl.hpp"

// class //

// constructors
SpeedTransmissionControl::SpeedTransmissionControl() {
    // Serial.print("SpeedTransmissionControl::SpeedTransmissionControl() not implemented\n");
}

// destructor
SpeedTransmissionControl::~SpeedTransmissionControl() {
    // Serial.print("SpeedTransmissionControl::~SpeedTransmissionControl() not implemented\n");
    
    if (connectControl) delete connectControl;
    if (dataControl) delete dataControl;
}

// member functions //

// user device perspective //

// UC-2.1 creates UC-3
bool SpeedTransmissionControl::initiateConnection() {
    // Serial.print("SpeedTransmissionControl::initiateConnection() not implemented\n");
    connectControl = new ConnectDevicesControl();

    connectControl->requestToConnect();
    bool response = connectControl->receiveConnectionResponse();

    return response;
}

// UC-2.2 creates UC-6
// S2u - handles connection signals - creates UC-6
bool SpeedTransmissionControl::receiveData() {
    // Serial.print("SpeedTransmissionControl::receiveData() not implemented\n");
    dataControl = new TransmittingDataControl();
    return false;
}

// UC-2.3
// S3u
bool SpeedTransmissionControl::displayDataSpeed() {
    // Serial.print("SpeedTransmissionControl::displayDataSpeed() not implemented\n");
    return false;
}

// modem device perspective //

// UC-2.1 creates UC-3
bool SpeedTransmissionControl::acceptConnection() {
    // Serial.print("SpeedTransmissionControl::acceptConnection() not implemented\n");
    connectControl = new ConnectDevicesControl();
    return false;
}

// UC-2.2
// S2m - handles connection signals
bool SpeedTransmissionControl::waitForCue() {
    // Serial.print("SpeedTransmissionControl::waitForCue() not implemented\n");
    return false;
}

// UC-2.2 creates UC-6
// S3m - creates UC-6
bool SpeedTransmissionControl::transmitData() {
    // Serial.print("SpeedTransmissionControl::transmitData() not implemented\n");
    dataControl = new TransmittingDataControl();
    return false;
}
