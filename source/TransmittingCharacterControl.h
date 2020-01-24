#ifndef TRANSMITTINGCHARACTERCONTROL_H
#define TRANSMITTINGCHARACTERCONTROL_H

// include statements //

// structs //

// class //

// class for control object for UC-5
// created by the Character Transmission control object CO-1
class TransmittingCharacterControl {
public:
    // constructors
    TransmittingCharacterControl();

    // destructor
    ~TransmittingCharacterControl();

    // member functions
    
    // user device perspective
    bool receiveDataMessageRequest();           // UC-5.2.2.1
    bool acknowledgeDataMessageRequest();       // UC-5.2.2.1
    bool receiveDataMessage();                  // UC-5.2.3.1
    bool acknowledgeDataMessage();              // UC-5.2.3.1
    bool displayDataMessage();                  // UC-5.2.4

    // modem device perspective
    bool readKeyboardInput();                   // UC-5.2
    bool displayCharacter();                    // UC-5.2.1
    bool sendDataMessageRequest();              // UC-5.2.2
    bool receiveDataMessageRequestResponse();   // UC-5.2.2.1
    bool sendDataMessage();                     // UC-5.2.3
    bool receiveDataMessageResponse();          // UC-5.2.3.1
    bool reattemptDataMessageRequest();         // UC-5.2.4
    bool receiveDataMessageResponse();          // UC-5.2.3
    bool resendDataMessage();                   // UC-5.2.3

protected:

private:
    // data members

};

#endif // TRANSMITTINGCHARACTERCONTROL_H
