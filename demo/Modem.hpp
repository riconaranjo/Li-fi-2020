#ifndef MODEM_H
#define MODEM_H

// include statements //

#include "Arduino.h"      // String
#include <SerLCD.h>
#include <PS2Keyboard.h>
#include <string>         // std::string
#include <unordered_map>  // std::unordered_map
#include <vector>         // std::vector

#include "FPGA.hpp"
// #include "Keyboard.hpp"
#include "Modem.hpp"

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
    void setupFPGA();
    void setupKeyboard(PS2Keyboard&);

    String* readKeyboardInput();
    String* readFPGAInput();

    void print(String);

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
    FPGA* fpga;
    // Keyboard* keyboard;
    PS2Keyboard& keyboard;
    SerLCD& display;
};

#endif // MODEM_H
