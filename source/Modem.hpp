#ifndef MODEM_H
#define MODEM_H

// include statements //

#include <vector>         // std::vector
#include <SerLCD.h>
#include <string>         // std::string
#include <unordered_map>  // std::unordered_map
#include "Arduino.h"
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
    void setupKeyboard(SerLCD&, PS2Keyboard&);
    bool sendControlMessage(ControlMessage&);
    bool sendDataMessage(DataMessage&);
    bool receiveControlMessage();
    bool receiveDataMessage();
    bool addConnection(Connection&);
    bool endConnection(Connection&);
    KeyboardInput* readKeyboardInput();
    FPGAResponse* readFPGAInput();

    void display(KeyboardInput*);
    void display(String);
    void displayDataMessage();

    // user member functions
    void sendUserRequestToConnect();                     // M1-1
    void sendUserAcceptRequestToSendDataMessage();       // M2-2
    void sendUserRejectRequestToSendDataMessage();       // M2-3
    void sendUserDataMessageACK();                       // M2-5
    void sendUserDataMessageNACK();                      // M2-6
    void sendUserHeartBeat();                            // M3-1

    // modem member functions
    void sendModemAcceptRequestToConnect();              // M1-2
    void sendModemRejectRequestToConnect();              // M1-3
    void sendModemRequestToSendDataMessage();            // M2-1
    void sendModemDataMessage();                         // M2-4
    void sendModemHeartBeat();                           // M3-2

protected:

private:
    // data members
    std::unordered_map<std::string,Connection> connections; // key is Connection::connectionID
    std::vector<ControlMessage*> controlMessages;
    std::vector<DataMessage*> dataMessages;

    FPGA* fpga;
    Keyboard* keyboard;
    FPGAResponse* fpgaResponse;
    KeyboardInput* keyboardInput;
    // SevenSegmentDisplay sevenSegmentDisplay; // TODO: is an abstract class?
    ExternalDisplay externalDisplay;
};

#endif // MODEM_H
