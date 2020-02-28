#ifndef TRANSMITTINGCHARACTERCONTROL_H
#define TRANSMITTINGCHARACTERCONTROL_H

// include statements //

#include "AbstractController.hpp"
#include "Modem.hpp"

// structs //

// class //

// class for control object for UC-5
// created by the Character Transmission control object CO-1
class TransmittingCharacterControl: public AbstractController {
public:
    // constructors
    TransmittingCharacterControl();

    // destructor
    ~TransmittingCharacterControl();

    // member functions
    
    // user device perspective
    bool receiveDataMessageRequest();           // UC-5.2.2.1
    void acknowledgeDataMessageRequest();       // UC-5.2.2.1
    bool receiveDataMessage();                  // UC-5.2.3.1
    void acknowledgeDataMessage();              // UC-5.2.3.1
    void displayDataMessage();                  // UC-5.2.4

    // modem device perspective
    // bool readKeyboardInput();                   // UC-5.2 (already done in UC-1.2)
    // bool displayCharacter();                    // UC-5.2.1 (already done in UC-1.2)
    void sendDataMessageRequest();              // UC-5.2.2
    bool receiveDataMessageRequestResponse();   // UC-5.2.2.1
    void sendDataMessage();                     // UC-5.2.3
    bool receiveDataMessageResponse();          // UC-5.2.3.1
    void resendDataMessageRequest();            // UC-5.2.4
    void resendDataMessage();                   // UC-5.2.3

protected:

private:
    // data members

};

#endif // TRANSMITTINGCHARACTERCONTROL_H
