#ifndef CHARACTERTRANSMISSIONCONTROL_H
#define CHARACTERTRANSMISSIONCONTROL_H

// include statements //

#include "Modem.hpp"
// #include "ConnectDevicesControl.hpp"          // CO-3
#include "TransmittingCharacterControl.hpp"   // CO-5

// structs //

// class //

// class for control object CO-1 for UC-1
// created by Controller object
class CharacterTransmissionControl {
public:
    // constructors
    CharacterTransmissionControl(Modem*);

    // destructor
    ~CharacterTransmissionControl();

    // member functions
    
    // user device perspective
    bool initiateConnection();  // UC-1.1 creates UC-3
    bool receiveCharacter();    // UC-1.2 creates UC-5
    bool displayCharacter();    // UC-1.3

    // modem device perspective
    bool acceptConnection();    // UC-1.1 creates UC-3
    String* getKeyboardInput();    // UC-1.2
    bool transmitCharacter(String*);   // UC-1.2 creates UC-5

protected:

private:
    // data members
    Modem* modem;
    // ConnectDevicesControl* connectControl;
    // TransmittingCharacterControl* characterControl;
};

#endif // CHARACTERTRANSMISSIONCONTROL_H
