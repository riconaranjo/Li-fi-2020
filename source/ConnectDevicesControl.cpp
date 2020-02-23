// include statements //

#include "ConnectDevicesControl.hpp"

// constructors
ConnectDevicesControl::ConnectDevicesControl(): AbstractController() {
    // Serial.print("ConnectDevicesControl::ConnectDevicesControl() not implemented\n");
}

// destructor
ConnectDevicesControl::~ConnectDevicesControl() {
    // Serial.print("ConnectDevicesControl::~ConnectDevicesControl() not implemented\n");
}

// member functions //

// user device perspective //

// UC-3.3
bool ConnectDevicesControl::requestToConnect() {
    // Serial.print("ConnectDevicesControl::requestToConnect() not implemented\n");

    return true; // TODO: this is a workaround for demo
    
    // // S1u - send request to connect M1-1
    // modem->SendUserRequestToConnect();

    // // S2u - wait until response received M1-2 (ack) or M1-3 (nack)
    // while (true) {
    //     FPGAResponse response = modem.readFPGAInput();
    // }

    // return false;
}

// UC-3.4
bool ConnectDevicesControl::receiveConnectionResponse() {
    // Serial.print("ConnectDevicesControl::receiveConnectionResponse() not implemented\n");

    return true; // TODO: this is a workaround for demo

    // // S2u - wait until response received M1-2 (ack) or M1-3 (nack)
    // while (true) {
    //     FPGAResponse response = modem.readFPGAInput();
    // }

    return false;
}

// UC-3.5
bool ConnectDevicesControl::sendHeartbeat() {
    // Serial.print("ConnectDevicesControl::sendHeartbeat() not implemented\n");

    return true; // TODO: this is a workaround for demo

    // modem->SendUserHeartBeat();
    // return false;
}

// UC-3.5
bool ConnectDevicesControl::receiveHeartbeatResponse() {
    // Serial.print("ConnectDevicesControl::receiveHeartbeatResponse() not implemented\n");

    return true; // TODO: this is a workaround for demo

    // return false;
}

// modem device perspective //

// UC-3.3.1
bool ConnectDevicesControl::receiveConnectionRequest() {
    // Serial.print("ConnectDevicesControl::receiveConnectionRequest() not implemented\n");

    return true; // TODO: this is a workaround for demo

    // return false;
}

// UC-3.3.2
bool ConnectDevicesControl::respondToConnectionRequest() {
    // Serial.print("ConnectDevicesControl::respondToConnectionRequest() not implemented\n");

    return true; // TODO: this is a workaround for demo

    // return false;
}

// UC-3.5.1
bool ConnectDevicesControl::receiveHeartbeat() {
    // Serial.print("ConnectDevicesControl::receiveHeartbeat() not implemented\n");

    return true; // TODO: this is a workaround for demo

    // return false;
}

// UC-3.5.2
bool ConnectDevicesControl::acknowledgeHeartbeat() {
    // Serial.print("ConnectDevicesControl::acknowledgeHeartbeat() not implemented\n");

    return true; // TODO: this is a workaround for demo

    // return false;
}


