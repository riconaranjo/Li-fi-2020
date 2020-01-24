#ifndef SPEEDTRANSMISSIONCONTROL_H
#define SPEEDTRANSMISSIONCONTROL_H

// include statements //
#include "ConnectDevicesControl.h"      // CO-3
#include "TransmittingDataControl.h"    // CO-6

// structs //

// class //

// class for control object for UC-2
// created by the keyboard object BO-1
class SpeedTransmissionControl {
public:
    // constructors
    SpeedTransmissionControl();

    // destructor
    ~SpeedTransmissionControl();

    // member functions
    
    // user device perspective
    bool initiateConnection();  // UC-2.1 creates UC-3
    bool receiveData();         // UC-2.2 creates UC-6
    bool displayDataSpeed();    // UC-2.3

    // modem device perspective
    bool acceptConnection();    // UC-2.1 creates UC-3
    bool transmitCharacter();   // UC-2.2 creates UC-6

protected:

private:
    // data members
    TransmittingDataControl dataControl;
    ConnectDevicesControl connectControl;
};

#endif // SPEEDTRANSMISSIONCONTROL_H
