// include statements //

#include "ConnectDevicesControl.hpp"
#include <iostream> // TODO: remove after testing

// constructors
ConnectDevicesControl::ConnectDevicesControl() {
    Serial.Print("ConnectDevicesControl::ConnectDevicesControl() not implemented\n");
}

// destructor
ConnectDevicesControl::~ConnectDevicesControl() {
    Serial.Print("ConnectDevicesControl::~ConnectDevicesControl() not implemented\n");
}

// member functions //

// user device perspective //

// UC-3.3
bool ConnectDevicesControl::requestToConnect() {
    Serial.Print("ConnectDevicesControl::requestToConnect() not implemented\n");
    return false;
}

// UC-3.4
bool ConnectDevicesControl::receiveConnectionResponse() {
    Serial.Print("ConnectDevicesControl::receiveConnectionResponse() not implemented\n");
    return false;
}

// UC-3.5
bool ConnectDevicesControl::sendHeartbeat() {
    Serial.Print("ConnectDevicesControl::sendHeartbeat() not implemented\n");
    return false;
}

// UC-3.5
bool ConnectDevicesControl::receiveHeartbeatResponse() {
    Serial.Print("ConnectDevicesControl::receiveHeartbeatResponse() not implemented\n");
    return false;
}

// modem device perspective //

// UC-3.3.1
bool ConnectDevicesControl::receiveConnectionRequest() {
    Serial.Print("ConnectDevicesControl::receiveConnectionRequest() not implemented\n");
    return false;
}

// UC-3.3.2
bool ConnectDevicesControl::respondToConnectionRequest() {
    Serial.Print("ConnectDevicesControl::respondToConnectionRequest() not implemented\n");
    return false;
}

// UC-3.5.1
bool ConnectDevicesControl::receiveHeartbeat() {
    Serial.Print("ConnectDevicesControl::receiveHeartbeat() not implemented\n");
    return false;
}

// UC-3.5.2
bool ConnectDevicesControl::acknowledgeHeartbeat() {
    Serial.Print("ConnectDevicesControl::acknowledgeHeartbeat() not implemented\n");
    return false;
}


