#ifndef MODEM_H
#define MODEM_H

// include statements //

#include <vector>         // std::vector
#include <string>         // std::string
#include <unordered_map>  // std::unordered_map
#include "Connection.hpp"
#include "ControlMessage.hpp"
#include "DataMessage.hpp"
#include "ExternalDisplay.hpp"
#include "FPGA.hpp"
#include "Keyboard.hpp"
#include "SevenSegmentDisplay.hpp"

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
    bool sendDataMessage(DataMessage& message);
    bool receiveControlMessage();
    bool receiveDataMessage();
    void displayDataMessage();
    bool addConnection(Connection& connection);
    bool endConnection(Connection& connection);
    KeyboardInput* readKeyboardInput();
    FPGAResponse* readFPGAInput();

    void display(KeyboardInput*);

    // user member functions
    void SendUserRequestToConnect();                     // M1-1
    void SendUserAcceptRequestToSendDataMessage();       // M2-2
    void SendUserRejectRequestToSendDataMessage();       // M2-3
    void SendUserDataMessageACK();                       // M2-5
    void SendUserDataMessageNACK();                      // M2-6
    void SendUserHeartBeat();                            // M3-1

    // modem member functions
    void SendModemAcceptRequestToConnect();              // M1-2
    void SendModemRejectRequestToConnect();              // M1-3
    void SendModemRequestToSendDataMessage();            // M2-1
    void SendModemDataMessage();                         // M2-4
    void SendModemHeartBeat();                           // M3-2

protected:

private:
    // data members
    std::unordered_map<std::string,Connection> connections; // key is Connection::connectionID
    std::vector<ControlMessage> controlMessages;
    std::vector<DataMessage> dataMessages;

    FPGA fpga;
    Keyboard keyboard;
    FPGAResponse* fpgaResponse;
    KeyboardInput* keyboardInput;
    // SevenSegmentDisplay sevenSegmentDisplay; // TODO: is an abstract class?
    ExternalDisplay externalDisplay;
};

#endif // MODEM_H
