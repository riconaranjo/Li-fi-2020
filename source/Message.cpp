// include statements //

#include <bitset>         // std::bitset
#include <iostream>       // todo: remove after testing
#include "Message.h"

// class //

// constructor
Message::Message(SourceID source, DestinationID destination) {
    std::cout << "Message::Message() not implemented\n";
    sourceID = source;
    destinationID = destination;
}
