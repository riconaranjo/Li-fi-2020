#ifndef CHARACTERTRANSMISSIONCONTROL_H
#define CHARACTERTRANSMISSIONCONTROL_H

// include statements //

// structs //

// class //

// class for control object for UC-1
// created by the keyboard object BO-1
class CharacterTransmissionControl {
public:
    // constructors
    CharacterTransmissionControl();

    // destructor
    virtual ~CharacterTransmissionControl();

    // member functions
    
    // user device perspective
    bool initiateConnection();  // UC-1.1 creates UC-3
    bool receiveCharacter();    // UC-1.2 creates UC-5
    bool displayCharacter();    // UC-1.3

    // modem device perspective
    bool acceptConnection();    // UC-1.1 creates UC-3
    bool transmitCharacter();   // UC-1.2 creates UC-5

protected:

private:
    // data members

};

#endif // CHARACTERTRANSMISSIONCONTROL_H
