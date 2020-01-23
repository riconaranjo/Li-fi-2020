// include statements //

#include <iostream>       // todo: remove after testing
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
    std::vector<Connection> connections = std::vector<Connection>();
    std::vector<ControlMessage> controlMessages = std::vector<ControlMessage>();
    std::vector<DataMessage> dataMessages = std::vector<DataMessage>();

    Keyboard keyboard = Keyboard();
}

// destructor
Modem::~Modem() {
    std::cout << "Modem::~Modem() not implemented\n";
}

// member functions
bool Modem::sendControlMessage(ControlMessage& message) {
    std::cout << "Modem::sendControlMessage() not implemented\n";
}

bool Modem::receiveControlMessage(ControlMessage& message) {
    std::cout << "Modem::receiveControlMessage() not implemented\n";

}
bool Modem::sendDataMessage(DataMessage& message) {
    std::cout << "Modem::sendDataMessage() not implemented\n";
}

bool Modem::receiveDataMessage(DataMessage& message) {
    std::cout << "Modem::receiveDataMessage() not implemented\n";
}

bool Modem::addConnection(Connection& connection) {
    std::cout << "Modem::addConnection() not implemented\n";
}

bool Modem::endConnection(Connection& connection) {
    std::cout << "Modem::endConnection() not implemented\n";
}

KeyboardInput Modem::readKeyboardInput() {
    std::cout << "Modem::readKeyboardInput() not implemented\n";
}
