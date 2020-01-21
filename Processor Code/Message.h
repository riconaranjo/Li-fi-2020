#ifndef MESSAGE_H
#define MESSAGE_H

// include statements //

#include <bitset>         // std::bitset

// structs //

struct SourceID {
    std::bitset<8> id; // identifier code for message source
};

struct DestinationID {
    std::bitset<8> id; // identifier code for message destination
};

// class //

// this is the abstract message class all message objects inherit from
class Message {
public:
    // constructor
    Message(SourceID* source, DestinationID* destination);

    // destructor
    virtual ~Message();

    SourceID& getSourceID();
    DestinationID& getDestinationID();

protected:

private:
    // data members
    SourceID& sourceID;
    DestinationID& destinationID;

};

#endif // MESSAGE_H
