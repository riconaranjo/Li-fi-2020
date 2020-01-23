#ifndef MODEM_H
#define MODEM_H

// include statements //

#include <vector>         // std::vector
#include "Connection.h"
#include "ControlMessage.h"
#include "DataMessage.h"
#include "keyboard.h"

// structs //

// class //

// main entity class for modem, manages all messages and connections
class Modem {
public:
    // constructors
    Modem();

    // destructor
    ~Modem();

    // member functions
    bool sendControlMessage(ControlMessage& message);
    bool receiveControlMessage(ControlMessage& message);
    bool sendDataMessage(DataMessage& message);
    bool receiveDataMessage(DataMessage& message);
    bool addConnection(Connection& connection);
    bool endConnection(Connection& connection);
    KeyboardInput readKeyboardInput();

protected:

private:
    // data members
    std::vector<Connection> connections;
    std::vector<ControlMessage> controlMessages;
    std::vector<DataMessage> dataMessages;

    KeyboardInput keyboardInput;
    Keyboard keyboard;
};

#endif // MODEM_H
