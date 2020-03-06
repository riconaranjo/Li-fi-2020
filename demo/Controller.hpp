#ifndef CONTROLLER_H
#define CONTROLLER_H

// include statements //

#include <SerLCD.h>
#include <PS2Keyboard.h>

#include "Modem.hpp"

// structs //

// class //

// main entity class for modem, manages all messages and connections
class Controller {
public:
    // constructors
    Controller(PS2Keyboard&, SerLCD&);

    // destructor
    ~Controller();

    // general member functions
    void LaunchModem();
    void LaunchUser();

protected:

private:
    bool inCharacterTransmissionMode;
    bool inDataTransmissionMode;

    Modem* modem;
};

#endif // CONTROLLER_H
