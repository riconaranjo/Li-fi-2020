// include statements //

#include <iostream>       // TODO: remove after testing
#include <unordered_map>  // std::unordered_map
#include <vector>         // std::vector
#include "Connection.h"
#include "ControlMessage.h"
#include "DataMessage.h"
#include "Keyboard.h"
#include "Modem.h"

// class //

// constructors
Modem::Modem() {
    std::cout << "Modem::Modem() not implemented\n";
    std::unordered_map<std::string,Connection> connections = std::unordered_map<std::string,Connection>();
    std::vector<ControlMessage> controlMessages = std::vector<ControlMessage>();
    std::vector<DataMessage> dataMessages = std::vector<DataMessage>();

    Keyboard keyboard = Keyboard();
    // SevenSegmentDisplay sevenSegmentDisplay = SevenSegmentDisplay(); // TODO: abstract class??
    ExternalDisplay externalDisplay = ExternalDisplay();
}

// destructor
Modem::~Modem() {
    std::cout << "Modem::~Modem() not implemented\n";
}

// member functions //

// sends the control message to the FPGA
bool Modem::sendControlMessage(ControlMessage& message) {
    std::cout << "Modem::sendControlMessage() not implemented\n";
    return false;
}

// sends the data message to the FPGA
bool Modem::sendDataMessage(DataMessage& message) {
    std::cout << "Modem::sendDataMessage() not implemented\n";
    return false;
}

// receives the control message from the FPGA
ControlMessage& Modem::receiveControlMessage() {
    std::cout << "Modem::receiveControlMessage() not implemented\n";
    ControlMessage* message = new ControlMessage();
    return *message;
}

// receives the data message to the FPGA
DataMessage& Modem::receiveDataMessage() {
    std::cout << "Modem::receiveDataMessage() not implemented\n";
    DataMessage* message = new DataMessage();
    return *message;
}

bool Modem::addConnection(Connection& connection) {
    std::cout << "Modem::addConnection() adding...\n";
    connections.insert({connection.getConnectionID(), connection});

    return false;
}

bool Modem::endConnection(Connection& connection) {
    std::cout << "Modem::endConnection() removing...\n";
    connections.erase(connection.getConnectionID());

    return false;
}

KeyboardInput* Modem::readKeyboardInput() {
    std::cout << "Modem::readKeyboardInput() not implemented\n";

    return keyboard.read();
}

FPGAResponse Modem::readFPGAInput() {
    std::cout << "Modem::readFPGAInput() not implemented\n";
    return FPGAResponse() = {};
}

void Modem::display(KeyboardInput*) {
    std::cout << "Modem::display() not implemented\n";
}

// modem member functions

// send M1-2 as modem
void Modem::SendModemAcceptRequestToConnect() {
    std::cout << "Modem::SendModemAcceptRequestToConnect() not implemented\n";
}

// send M1-3 as modem
void Modem::SendModemRejectRequestToConnect() {
    std::cout << "Modem::SendModemRejectRequestToConnect() not implemented\n";
}

// send M2-1 as modem
void Modem::SendModemRequestToSendDataMessage() {
    std::cout << "Modem::SendModemRequestToSendDataMessage() not implemented\n";
}

// send M2-4 as modem
void Modem::SendModemDataMessage() {
    std::cout << "Modem::SendModemDataMessage() not implemented\n";
}

// send M3-2 as modem
void Modem::SendModemHeartBeat() {
    std::cout << "Modem::SendModemHeartBeat() not implemented\n";
}

// user member functions

// send M1-1 as user
void Modem::SendUserRequestToConnect() {
    std::cout << "Modem::SendUserRequestToConnect() not implemented\n";
}

// send M2-2 as user
void Modem::SendUserAcceptRequestToSendDataMessage() {
    std::cout << "Modem::SendUserAcceptRequestToSendDataMessage() not implemented\n";
}

// send M2-3 as user
void Modem::SendUserRejectRequestToSendDataMessage() {
    std::cout << "Modem::SendUserRejectRequestToSendDataMessage() not implemented\n";
}

// send M2-5 as user
void Modem::SendUserDataMessageACK() {
    std::cout << "Modem::SendUserDataMessageACK() not implemented\n";
}

// send M2-6 as user
void Modem::SendUserDataMessageNACK() {
    std::cout << "Modem::SendUserDataMessageNACK() not implemented\n";
}

// send M3-1 as user
void Modem::SendUserHeartBeat() {
    std::cout << "Modem::SendUserHeartBeat() not implemented\n";
}
