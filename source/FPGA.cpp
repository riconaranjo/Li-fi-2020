// include statements //

#include <string>         // std::string
#include <iostream>       // todo: remove after testing
#include "ConnectDevicesControl.h"      // CO-3
#include "ControlMessage.h"
#include "DataMessage.h"
#include "DisconnectDevicesControl.h"   // CO-4
#include "FPGA.h"
#include "Message.h"

// class //

// constructors
FPGA::FPGA() {
    std::cout << "FPGA::FPGA() not implemented\n";
}

// destructor
FPGA::~FPGA() {
    std::cout << "FPGA::~FPGA() not implemented\n";
}

// member functions //

bool FPGA::write(Message& message) {
    std::cout << "FPGA::FPGA() not implemented\n";
    return false;
}

Message& FPGA::read() {
    std::cout << "FPGA::FPGA() not implemented\n";
    ControlMessage* m = new ControlMessage(SourceID(), DestinationID());
    return *m;
}
