#ifndef CONTROLLER_H
#define CONTROLLER_H

// include statements //

#include <SerLCD.h>
#include <PS2Keyboard.h>
#include "AbstractController.hpp"

// structs //

// class //

// main entity class for modem, manages all messages and connections
class Controller: public AbstractController {
public:
    // constructors
    Controller();

    // destructor
    ~Controller();

    // general member functions
    void LaunchModem(SerLCD&, PS2Keyboard&);
    void LaunchUser();

protected:

private:
    bool inCharacterTransmissionMode;
    bool inDataTransmissionMode;
};

#endif // CONTROLLER_H
