#ifndef CONTROLLER_H
#define CONTROLLER_H

// include statements //

#include <vector>         // std::vector
#include "Modem.hpp"

// structs //

// class //

// main entity class for modem, manages all messages and connections
class Controller {
public:
    // constructors
    Controller();

    // destructor
    ~Controller();

    // general member functions
    void LaunchModem();
    void LaunchUser();
    void InitiateConnection();                           // ...
    void SendRequestToEndConnection();                   // M4-1
    void SendAcceptRequestToEndConnection();             // M4-2

    // modem member functions
    void SetCharacterTransmissionMode();
    void SetDataTransmissionMode();
    void CharacterTransmissionMode();                    // character tx logic
    void DataTransmissionMode();                         // data tx logic

protected:

private:
    // data members
    bool isModem;
    bool inCharacterTransmissionMode;
    bool inDataTransmissionMode;
    Modem modem;
};

#endif // CONTROLLER_H
