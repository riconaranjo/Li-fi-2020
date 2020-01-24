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
