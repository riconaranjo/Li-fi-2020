#ifndef CONTROLMESSAGE_H
#define CONTROLMESSAGE_H

// include statements //

#include <bitset>         // std::bitset
#include "Message.h"

// structs //

struct MessageOptions {
    std::bitset<12> options; // one bit high for each control message type, default bit value is zero
};

// class //

// class for control messages:
// M1-1, M1-2, M1-3, M2-1, M2-2, M2-3, M2-5, M2-6, M2-6, M3-1, M3-2, M4-1, M4-2
class ControlMessage: public Message {
public:
    // constructor
    ControlMessage(SourceID& source, DestinationID& destination);

    // destructor
    ~ControlMessage();

    // member functions
    MessageOptions& getOptions();

    bool setOptionAsM1_1();     // M1-1 connect
    bool setOptionAsM1_2();     // M1-2 ack_connect
    bool setOptionAsM1_3();     // M1-3 nack_connect
    bool setOptionAsM2_1();     // M2-1 request_data
    bool setOptionAsM2_2();     // M2-2 ack_request_data
    bool setOptionAsM2_3();     // M2-3 nack_request_data
    bool setOptionAsM2_5();     // M2-5 ack_data
    bool setOptionAsM2_6();     // M2-6 nack_data
    bool setOptionAsM3_1();     // M3-1 alive
    bool setOptionAsM3_2();     // M3-2 ack_alive
    bool setOptionAsM4_1();     // M4-1 disconnect
    bool setOptionAsM4_2();     // M4-2 ack_disconnect

protected:

private:
    void setNthBitHigh(int n);
    
    // data members
    MessageOptions options;
};

#endif // CONTROLMESSAGE_H
