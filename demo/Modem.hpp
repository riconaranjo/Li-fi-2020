#ifndef MODEM_H
#define MODEM_H

// include statements //

#include "Arduino.h"      // String
#include <SerLCD.h>
#include <PS2Keyboard.h>
#include <string>         // std::string
#include <unordered_map>  // std::unordered_map
#include <vector>         // std::vector

#include "constants.cpp"
#include "Modem.hpp"
#include "Message.hpp"

// structs //

// class //

// main entity class for modem, manages all messages and connections
class Modem {
public:
    // constructors
    Modem(PS2Keyboard&, SerLCD&);

    // destructor
    ~Modem();

    // member functions
    String* readKeyboardInput();
    String* readFPGAInput();
    void print(String);
    void print(String*);

    // user member functions
    void sendUserRequestToConnect();                     // M1-1 -> omitted
    void sendUserAcceptRequestToSendDataMessage();       // M2-2
    void sendUserRejectRequestToSendDataMessage();       // M2-3 -> omitted
    void sendUserHeartBeat();                            // M3-1 -> omitted

    // modem member functions
    void sendModemAcceptRequestToConnect();              // M1-2 -> omitted
    void sendModemRejectRequestToConnect();              // M1-3 -> omitted
    void sendModemRequestToSendDataMessage();            // M2-1
    void sendModemDataMessage(String*);                  // M2-4
    void sendModemHeartBeat();                           // M3-2 -> omitted

protected:

private:
    // data members
    PS2Keyboard& keyboard;
    SerLCD& display;
};

#endif // MODEM_H
