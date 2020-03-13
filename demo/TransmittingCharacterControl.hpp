#ifndef TRANSMITTINGCHARACTERCONTROL_H
#define TRANSMITTINGCHARACTERCONTROL_H

// include statements //

#include "Modem.hpp"

// structs //

// class //

// class for control object for UC-5
// created by the Character Transmission control object CO-1
class TransmittingCharacterControl {
public:
    // constructors
    TransmittingCharacterControl(Modem*);

    // destructor
    ~TransmittingCharacterControl();

    // member functions
    
    // user device perspective
    void receiveDataMessageRequest();           // UC-5.2.2.1
    void acknowledgeDataMessageRequest();       // UC-5.2.2.1
    String* receiveDataMessage();               // UC-5.2.3.1
    void acknowledgeDataMessage();              // UC-5.2.3.1
    void displayDataMessage(String*);           // UC-5.2.4

    // modem device perspective    
    void sendDataMessageRequest();              // UC-5.2.2
    bool receiveDataMessageRequestResponse();   // UC-5.2.2.1
    void sendDataMessage(String*);              // UC-5.2.3
    bool receiveDataMessageResponse();          // UC-5.2.3.1
    void resendDataMessageRequest();            // UC-5.2.4
    void resendDataMessage(String*);            // UC-5.2.3

protected:

private:
    // data members
    Modem* modem;
    int ackNum;
};

#endif // TRANSMITTINGCHARACTERCONTROL_H
