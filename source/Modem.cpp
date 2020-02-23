// include statements //

// #include <iostream>       // TODO: remove after testing
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
    // Serial.print("Modem::Modem() not implemented\n");
    std::unordered_map<String,Connection> connections = std::unordered_map<String,Connection>();
    std::vector<ControlMessage> controlMessages = std::vector<ControlMessage>();
    std::vector<DataMessage> dataMessages = std::vector<DataMessage>();

    Keyboard keyboard = Keyboard();
    // SevenSegmentDisplay sevenSegmentDisplay = SevenSegmentDisplay(); // TODO: abstract class??
    ExternalDisplay externalDisplay = ExternalDisplay();
}

// destructor
Modem::~Modem() {
    // Serial.print("Modem::~Modem() not implemented\n");
}

// member functions //

// sends the control message to the FPGA
bool Modem::sendControlMessage(ControlMessage& message) {
    // Serial.print("Modem::sendControlMessage() not implemented\n");
    return false;
}

// sends the data message to the FPGA
bool Modem::sendDataMessage(DataMessage& message) {
    // Serial.print("Modem::sendDataMessage() not implemented\n");
    return false;
}

// receives the control message from the FPGA
ControlMessage& Modem::receiveControlMessage() {
    // Serial.print("Modem::receiveControlMessage() not implemented\n");
    ControlMessage* message = new ControlMessage();
    return *message;
}

// receives the data message to the FPGA
DataMessage& Modem::receiveDataMessage() {
    // Serial.print("Modem::receiveDataMessage() not implemented\n");
    DataMessage* message = new DataMessage();
    return *message;
}

bool Modem::addConnection(Connection& connection) {
    // Serial.print("Modem::addConnection() adding...\n");
    connections.[connection.getConnectionId] = connection;

    return false;
}

bool Modem::endConnection(Connection& connection) {
    // Serial.print("Modem::endConnection() removing...\n");
    connections.erase(connection.getConnectionID());

    return false;
}

KeyboardInput* Modem::readKeyboardInput() {
    // Serial.print("Modem::readKeyboardInput() not implemented\n");

    return keyboard.read();
}

FPGAResponse* Modem::readFPGAInput() {
    // Serial.print("Modem::readFPGAInput() not implemented\n");

    return fpga.read();;
}

void Modem::display(KeyboardInput*) {
    // Serial.print("Modem::display() not implemented\n");
}

// modem member functions

// send M1-2 as modem
void Modem::SendModemAcceptRequestToConnect() {
    // Serial.print("Modem::SendModemAcceptRequestToConnect() not implemented\n");
}

// send M1-3 as modem
void Modem::SendModemRejectRequestToConnect() {
    // Serial.print("Modem::SendModemRejectRequestToConnect() not implemented\n");
}

// send M2-1 as modem
void Modem::SendModemRequestToSendDataMessage() {
    // Serial.print("Modem::SendModemRequestToSendDataMessage() not implemented\n");
}

// send M2-4 as modem
void Modem::SendModemDataMessage() {
    // Serial.print("Modem::SendModemDataMessage() not implemented\n");
}

// send M3-2 as modem
void Modem::SendModemHeartBeat() {
    // Serial.print("Modem::SendModemHeartBeat() not implemented\n");
}

// user member functions

// send M1-1 as user
void Modem::SendUserRequestToConnect() {
    // Serial.print("Modem::SendUserRequestToConnect() not implemented\n");
}

// send M2-2 as user
void Modem::SendUserAcceptRequestToSendDataMessage() {
    // Serial.print("Modem::SendUserAcceptRequestToSendDataMessage() not implemented\n");
}

// send M2-3 as user
void Modem::SendUserRejectRequestToSendDataMessage() {
    // Serial.print("Modem::SendUserRejectRequestToSendDataMessage() not implemented\n");
}

// send M2-5 as user
void Modem::SendUserDataMessageACK() {
    // Serial.print("Modem::SendUserDataMessageACK() not implemented\n");
}

// send M2-6 as user
void Modem::SendUserDataMessageNACK() {
    // Serial.print("Modem::SendUserDataMessageNACK() not implemented\n");
}

// send M3-1 as user
void Modem::SendUserHeartBeat() {
    // Serial.print("Modem::SendUserHeartBeat() not implemented\n");
}
