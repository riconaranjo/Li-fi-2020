// include statements //

#include "FPGA.hpp"

// class //

// constructors
FPGA::FPGA() { }

// destructor
FPGA::~FPGA() { }

// member functions //

bool FPGA::write(Message* message) {
    Serial.print("FPGA::write() not implemented\n");
    delay(100);
    // TODO: figure out how to actually write data to FPGA
    return false;
}

FPGAResponse* FPGA::read() {
    Serial.print("FPGA::read() not implemented\n");
    delay(100);
    return nullptr;
    // TODO: figure out how to actually read data from FPGA
}
