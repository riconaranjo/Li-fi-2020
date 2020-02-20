#ifndef TRANSMITTINGDATACONTROL_H
#define TRANSMITTINGDATACONTROL_H

// include statements //

// structs //

// class //

// class for control object for UC-6
// created by the Speed Transmission control object CO-2
class TransmittingDataControl {
public:
    // constructors
    TransmittingDataControl();

    // destructor
    ~TransmittingDataControl();

    // member functions
    
    // user device perspective
    bool receiveDataMessageRequest();      // UC-6.2.1
    bool acknowledgeDataMessageRequest();  // UC-6.2.1
    bool receiveDataMessage();             // UC-6.3.1
    bool acknowledgeDataMessage();         // UC-6.3.1
    bool reconstructDataMessage();         // UC-6.6
    bool displayTransmissionSpeed();       // UC-6.7

    // modem device perspective
    bool sendDataMessageRequest();         // UC-6.2
    bool sendDataMessage();                // UC-6.3
    bool receiveDataMessageResponse();     // UC-6.3.2
    bool resendDataMessage();              // UC-6.3.2
    bool reattemptDataMessageRequest();    // UC-6.4

protected:

private:
    // data members

};

#endif // TRANSMITTINGDATACONTROL_H
