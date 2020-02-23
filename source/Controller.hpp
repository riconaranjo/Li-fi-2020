#ifndef CONTROLLER_H
#define CONTROLLER_H

// include statements //

#include "AbstractController.hpp"
// #include "Modem.hpp" // TODO: remove

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
    void LaunchModem();
    void LaunchUser();

protected:

private:
    // data members
    // bool isModem;
    bool inCharacterTransmissionMode;
    bool inDataTransmissionMode;
    // Modem* modem;
};

#endif // CONTROLLER_H
