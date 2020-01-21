#ifndef CONTROLMESSAGE_H
#define CONTROLMESSAGE_H

// include statements //

#include <bitset>         // std::bitset
#include "Message.h"

// structs //

struct MessageOptions
{
    std::bitset<12> options; // one bit high for each control message type
};

// class //

// class for control messages:
// M1-1, M1-2, M1-3, M2-1, M2-2, M2-3, M2-5, M2-6, M2-6, M3-1, M3-2, M4-1, M4-2
class ControlMessage: public Message {
public:
    // constructor
    ControlMessage(MessageOptions& options);

    // destructor
    virtual ~ControlMessage();

    // member functions
    MessageOptions& getOptions();

protected:

private:
    // data members
    MessageOptions& options;

};

#endif // CONTROLMESSAGE_H
