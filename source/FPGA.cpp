// include statements //

#include <string>         // std::string
#include <iostream>       // TODO: remove after testing
#include "ConnectDevicesControl.hpp"      // CO-3
#include "ControlMessage.hpp"
#include "DataMessage.hpp"
#include "DisconnectDevicesControl.hpp"   // CO-4
#include "FPGA.hpp"
#include "Message.hpp"

// class //

// constructors
FPGA::FPGA() {
    Serial.Print("FPGA::FPGA() not implemented\n");
}

// destructor
FPGA::~FPGA() {
    Serial.Print("FPGA::~FPGA() not implemented\n");
}

// member functions //

bool FPGA::write(Message& message) {
    Serial.Print("FPGA::FPGA() not implemented\n");
    return false;
}

Message& FPGA::read() {
    Serial.Print("FPGA::FPGA() not implemented\n");
    ControlMessage* m = new ControlMessage(SourceID(), DestinationID());
    return *m;
}
