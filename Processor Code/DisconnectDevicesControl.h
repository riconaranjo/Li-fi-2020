#ifndef DISCONNECTDEVICESCONTROL_H
#define DISCONNECTDEVICESCONTROL_H

// include statements //

// structs //

// class //

// class for control object for UC-4
// created by the FPGA object BO-2
class DisconnectDevicesControl {
public:
    // constructors
    DisconnectDevicesControl();

    // destructor
    virtual ~DisconnectDevicesControl();

    // member functions
    
    // device A perspective
    bool initiateEndConnection();          // UC-4.1
    bool receiveEndConnectionResponse();   // UC-4.3

    // device B perspective
    bool receiveEndConnectionRequest();    // UC-4.2
    bool acknowledgeEndConnection();       // UC-4.2.1

protected:

private:
    // data members

};

#endif // DISCONNECTDEVICESCONTROL_H
