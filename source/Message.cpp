// include statements //

// #include <bitset>         // std::bitset
#include <iostream>       // TODO: remove after testing
#include "Message.hpp"

// class //

// constructor
Message::Message(SourceID& source, DestinationID& destination) {
    // Serial.print("Message::Message() not implemented\n");
    sourceID = source;
    destinationID = destination;
}

// default constructor
Message::Message() { }

// destructor
Message::~Message() { }
