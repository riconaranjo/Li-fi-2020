#ifndef CONNECTDEVICESCONTROL_H
#define CONNECTDEVICESCONTROL_H

// include statements //

// structs //

// class //

// class for control object for UC-3
// created by the FPGA object BO-2
class ConnectDevicesControl {
public:
    // constructors
    ConnectDevicesControl();

    // destructor
    ~ConnectDevicesControl();

    // member functions
    
    // user device perspective
    bool requestToConnect();            // UC-3.3
    bool receiveConnectionResponse();   // UC-3.4
    bool sendHeartbeat();               // UC-3.5
    bool receiveHeartbeatResponse();    // UC-3.5

    // modem device perspective
    bool receiveConnectionRequest();    // UC-3.3.1
    bool respondToConnectionRequest();  // UC-3.3.2
    bool receiveHeartbeat();            // UC-3.5.1
    bool acknowledgeHeartbeat();        // UC-3.5.2

protected:

private:
    // data members

};

#endif // CONNECTDEVICESCONTROL_H
