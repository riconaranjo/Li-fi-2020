#ifndef CHARACTERTRANSMISSIONCONTROL_H
#define CHARACTERTRANSMISSIONCONTROL_H

// include statements //

#include "TransmittingCharacterControl.hpp"   // CO-5

// structs //

// class //

// class for control object CO-1 for UC-1
// created by Controller object
class CharacterTransmissionControl {
public:
    // constructors
    CharacterTransmissionControl(bool);

    // destructor
    ~CharacterTransmissionControl();

    // member functions
    
    // user device perspective
    bool initiateConnection();  // UC-1.1 creates UC-3
    bool receiveCharacter();    // UC-1.2 creates UC-5
    bool displayCharacter();    // UC-1.3

    // modem device perspective
    bool acceptConnection();    // UC-1.1 creates UC-3
    bool getKeyboardInput();    // UC-1.2
    bool transmitCharacter();   // UC-1.2 creates UC-5

protected:

private:
    // data members
    bool isModem;
    ConnectDevicesControl* connectControl;
    TransmittingCharacterControl* characterControl;

};

#endif // CHARACTERTRANSMISSIONCONTROL_H
