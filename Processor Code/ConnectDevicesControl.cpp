// include statements //

#include "ConnectDevicesControl.h"
#include <iostream> // todo: remove after testing

// constructors
ConnectDevicesControl::ConnectDevicesControl() {
    std::cout << "ConnectDevicesControl::ConnectDevicesControl() not implemented\n";
}

// destructor
ConnectDevicesControl::~ConnectDevicesControl() {
    std::cout << "ConnectDevicesControl::ConnectDevicesControl() not implemented\n";
}

// member functions //

// user device perspective //

// UC-3.3
bool ConnectDevicesControl::requestToConnect() {
    std::cout << "ConnectDevicesControl::requestToConnect() not implemented\n";
}

// UC-3.4
bool ConnectDevicesControl::receiveConnectionResponse() {
    std::cout << "ConnectDevicesControl::receiveConnectionResponse() not implemented\n";
}

// UC-3.5
bool ConnectDevicesControl::sendHeartbeat() {
    std::cout << "ConnectDevicesControl::sendHeartbeat() not implemented\n";
}

// UC-3.5
bool ConnectDevicesControl::receiveHeartbeatResponse() {
    std::cout << "ConnectDevicesControl::receiveHeartbeatResponse() not implemented\n";
}

// modem device perspective //

// UC-3.3.1
bool ConnectDevicesControl::receiveConnectionRequest() {
    std::cout << "ConnectDevicesControl::receiveConnectionRequest() not implemented\n";
}

// UC-3.3.2
bool ConnectDevicesControl::respondToConnectionRequest() {
    std::cout << "ConnectDevicesControl::respondToConnectionRequest() not implemented\n";
}

// UC-3.5.1
bool ConnectDevicesControl::receiveHeartbeat() {
    std::cout << "ConnectDevicesControl::receiveHeartbeat() not implemented\n";
}

// UC-3.5.2
bool ConnectDevicesControl::acknowledgeHeartbeat() {
    std::cout << "ConnectDevicesControl::acknowledgeHeartbeat() not implemented\n";
}


