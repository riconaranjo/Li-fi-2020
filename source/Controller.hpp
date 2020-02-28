#ifndef CONTROLLER_H
#define CONTROLLER_H

// include statements //

#include <SerLCD.h>
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
    void LaunchModem(SerLCD&);
    void LaunchUser();

protected:

private:
    bool inCharacterTransmissionMode;
    bool inDataTransmissionMode;
};

#endif // CONTROLLER_H
