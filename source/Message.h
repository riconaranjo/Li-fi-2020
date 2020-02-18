#ifndef MESSAGE_H
#define MESSAGE_H

// include statements //

#include <bitset>         // std::bitset

// enums //

enum MessageType {
    M1_1,   // M1-1 - connect
    M1_2,   // M1-2 - ack_connect
    M1_3,   // M1-3 - nack_connect
    M2_1,   // M2-1 - request_data
    M2_2,   // M2-2 - ack_request_data
    M2_3,   // M2-3 - nack_request_data
    M2_4,   // M2-4 - data
    M2_5,   // M2-5 - ack_data
    M2_6,   // M2-6 - nack_data
    M3_1,   // M3-1 - alive
    M3_2,   // M3-2 - ack_alive
    M4_1,   // M4-1 - disconnect
    M4_2,   // M4-2 - ack_disconnect
    NONE
};

// structs //

struct SourceID {
    std::bitset<8> id; // identifier code for message source
};

struct DestinationID {
    std::bitset<8> id; // identifier code for message destination
};

// class //

// interface for control and data message classes
class Message {
public:
    // constructor
    Message(SourceID source, DestinationID destination);

    // destructor
    virtual ~Message();

    virtual SourceID& getSourceID() = 0;
    virtual DestinationID& getDestinationID() = 0;

protected:
    // data members
    SourceID sourceID;
    DestinationID destinationID;

private:

};

#endif // MESSAGE_H
