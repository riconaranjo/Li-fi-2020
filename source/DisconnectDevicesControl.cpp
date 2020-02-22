// include statements //

#include <iostream>       // TODO: remove after testing
#include "DisconnectDevicesControl.hpp"

// class //

// constructors
DisconnectDevicesControl::DisconnectDevicesControl() {
    // Serial.Print("DisconnectDevicesControl::DisconnectDevicesControl() not implemented\n");
}

// destructor
DisconnectDevicesControl::~DisconnectDevicesControl() {
    // Serial.Print("DisconnectDevicesControl::~DisconnectDevicesControl() not implemented\n");
}

// member functions

// device A perspective
// UC-4.1
bool DisconnectDevicesControl::initiateEndConnection() {
    // Serial.Print("DisconnectDevicesControl::() not implemented\n");
    return false;
}

// UC-4.3
bool DisconnectDevicesControl::receiveEndConnectionResponse() {
    // Serial.Print("DisconnectDevicesControl::receiveEndConnectionResponse() not implemented\n");
    return false;
}

// device B perspective
// UC-4.2
bool DisconnectDevicesControl::receiveEndConnectionRequest() {
    // Serial.Print("DisconnectDevicesControl::receiveEndConnectionRequest() not implemented\n");
    return false;
}

// UC-4.2.1
bool DisconnectDevicesControl::acknowledgeEndConnection() {
    // Serial.Print("DisconnectDevicesControl::acknowledgeEndConnection() not implemented\n");
    return false;
}
