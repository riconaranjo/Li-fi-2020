// include statements //

// #include <string>         // std::string TODO: replaced with arduino String
// #include <iostream>       // TODO: remove after testing
#include "ConnectDevicesControl.hpp"      // CO-3
#include "ControlMessage.hpp"
#include "DataMessage.hpp"
#include "DisconnectDevicesControl.hpp"   // CO-4
#include "FPGA.hpp"
#include "Message.hpp"

// class //

// constructors
FPGA::FPGA() {
    // Serial.Print("FPGA::FPGA() not implemented\n");
}

// destructor
FPGA::~FPGA() {
    // Serial.Print("FPGA::~FPGA() not implemented\n");
}

// member functions //

bool FPGA::write(Message& message) {
    // Serial.Print("FPGA::FPGA() not implemented\n");

    // TODO: figure out how to actually write data to FPGA

    return false;
}

FPGAResponse* FPGA::read() {
    // Serial.Print("FPGA::FPGA() not implemented\n");
    
    // TODO: figure out how to actually read data from FPGA
    Message* message = new ControlMessage(SourceID(), DestinationID());

    MessageType type = getMessageType(message);

    FPGAResponse* response = FPGAResponse();
    response->message = message;
    response->type = type;

    return response;
}

MessageType FPGA::getMessageType(Message* message) {
    // Serial.Print("FPGA::getMessageType() not implemented\n");
    // TODO: figure out how to parse out message type

    return MessageType::NONE;
}