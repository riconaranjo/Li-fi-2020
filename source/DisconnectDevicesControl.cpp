// include statements //
#include <iostream>       // TODO: remove after testing
#include "DisconnectDevicesControl.h"

// class //

// constructors
DisconnectDevicesControl::DisconnectDevicesControl() {
    std::cout << "DisconnectDevicesControl::DisconnectDevicesControl() not implemented\n";
}

// destructor
DisconnectDevicesControl::~DisconnectDevicesControl() {
    std::cout << "DisconnectDevicesControl::~DisconnectDevicesControl() not implemented\n";
}

// member functions

// device A perspective
// UC-4.1
bool DisconnectDevicesControl::initiateEndConnection() {
    std::cout << "DisconnectDevicesControl::() not implemented\n";
    return false;
}

// UC-4.3
bool DisconnectDevicesControl::receiveEndConnectionResponse() {
    std::cout << "DisconnectDevicesControl::receiveEndConnectionResponse() not implemented\n";
    return false;
}

// device B perspective
// UC-4.2
bool DisconnectDevicesControl::receiveEndConnectionRequest() {
    std::cout << "DisconnectDevicesControl::receiveEndConnectionRequest() not implemented\n";
    return false;
}

// UC-4.2.1
bool DisconnectDevicesControl::acknowledgeEndConnection() {
    std::cout << "DisconnectDevicesControl::acknowledgeEndConnection() not implemented\n";
    return false;
}
