#ifndef SPEEDTRANSMISSIONCONTROL_H
#define SPEEDTRANSMISSIONCONTROL_H

// include statements //
#include "AbstractController.hpp"
#include "Modem.hpp"
#include "ConnectDevicesControl.hpp"      // CO-3
#include "TransmittingDataControl.hpp"    // CO-6

// structs //

// class //

// class for control object for UC-2
// created by the Controller object
class SpeedTransmissionControl: public AbstractController {
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
    bool waitForCue();          // UC-2.2
    bool transmitData();        // UC-2.2 creates UC-6

protected:

private:
    // data members
    ConnectDevicesControl* connectControl = nullptr;
    TransmittingDataControl* dataControl = nullptr;
};

#endif // SPEEDTRANSMISSIONCONTROL_H
