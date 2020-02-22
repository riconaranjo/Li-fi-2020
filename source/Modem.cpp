// include statements //

#include <iostream>       // TODO: remove after testing
#include <unordered_map>  // std::unordered_map
#include <vector>         // std::vector
#include "Connection.hpp"
#include "ControlMessage.hpp"
#include "DataMessage.hpp"
#include "Keyboard.hpp"
#include "Modem.hpp"

// class //

// constructors
Modem::Modem() {
    // Serial.Print("Modem::Modem() not implemented\n");
    std::unordered_map<std::string,Connection> connections = std::unordered_map<std::string,Connection>();
    std::vector<ControlMessage> controlMessages = std::vector<ControlMessage>();
    std::vector<DataMessage> dataMessages = std::vector<DataMessage>();

    Keyboard keyboard = Keyboard();
    // SevenSegmentDisplay sevenSegmentDisplay = SevenSegmentDisplay(); // TODO: abstract class??
    ExternalDisplay externalDisplay = ExternalDisplay();
}

// destructor
Modem::~Modem() {
    // Serial.Print("Modem::~Modem() not implemented\n");
}

// member functions //

// sends the control message to the FPGA
bool Modem::sendControlMessage(ControlMessage& message) {
    // Serial.Print("Modem::sendControlMessage() not implemented\n");
    return false;
}

// sends the data message to the FPGA
bool Modem::sendDataMessage(DataMessage& message) {
    // Serial.Print("Modem::sendDataMessage() not implemented\n");
    return false;
}

// receives the control message from the FPGA
ControlMessage& Modem::receiveControlMessage() {
    // Serial.Print("Modem::receiveControlMessage() not implemented\n");
    ControlMessage* message = new ControlMessage();
    return *message;
}

// receives the data message to the FPGA
DataMessage& Modem::receiveDataMessage() {
    // Serial.Print("Modem::receiveDataMessage() not implemented\n");
    DataMessage* message = new DataMessage();
    return *message;
}

bool Modem::addConnection(Connection& connection) {
    // Serial.Print("Modem::addConnection() adding...\n");
    connections.insert({connection.getConnectionID(), connection});

    return false;
}

bool Modem::endConnection(Connection& connection) {
    // Serial.Print("Modem::endConnection() removing...\n");
    connections.erase(connection.getConnectionID());

    return false;
}

KeyboardInput* Modem::readKeyboardInput() {
    // Serial.Print("Modem::readKeyboardInput() not implemented\n");

    return keyboard.read();
}

FPGAResponse Modem::readFPGAInput() {
    // Serial.Print("Modem::readFPGAInput() not implemented\n");
    return FPGAResponse() = {};
}

void Modem::display(KeyboardInput*) {
    // Serial.Print("Modem::display() not implemented\n");
}

// modem member functions

// send M1-2 as modem
void Modem::SendModemAcceptRequestToConnect() {
    // Serial.Print("Modem::SendModemAcceptRequestToConnect() not implemented\n");
}

// send M1-3 as modem
void Modem::SendModemRejectRequestToConnect() {
    // Serial.Print("Modem::SendModemRejectRequestToConnect() not implemented\n");
}

// send M2-1 as modem
void Modem::SendModemRequestToSendDataMessage() {
    // Serial.Print("Modem::SendModemRequestToSendDataMessage() not implemented\n");
}

// send M2-4 as modem
void Modem::SendModemDataMessage() {
    // Serial.Print("Modem::SendModemDataMessage() not implemented\n");
}

// send M3-2 as modem
void Modem::SendModemHeartBeat() {
    // Serial.Print("Modem::SendModemHeartBeat() not implemented\n");
}

// user member functions

// send M1-1 as user
void Modem::SendUserRequestToConnect() {
    // Serial.Print("Modem::SendUserRequestToConnect() not implemented\n");
}

// send M2-2 as user
void Modem::SendUserAcceptRequestToSendDataMessage() {
    // Serial.Print("Modem::SendUserAcceptRequestToSendDataMessage() not implemented\n");
}

// send M2-3 as user
void Modem::SendUserRejectRequestToSendDataMessage() {
    // Serial.Print("Modem::SendUserRejectRequestToSendDataMessage() not implemented\n");
}

// send M2-5 as user
void Modem::SendUserDataMessageACK() {
    // Serial.Print("Modem::SendUserDataMessageACK() not implemented\n");
}

// send M2-6 as user
void Modem::SendUserDataMessageNACK() {
    // Serial.Print("Modem::SendUserDataMessageNACK() not implemented\n");
}

// send M3-1 as user
void Modem::SendUserHeartBeat() {
    // Serial.Print("Modem::SendUserHeartBeat() not implemented\n");
}
