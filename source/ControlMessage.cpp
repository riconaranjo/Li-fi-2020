// include statements //

#include <bitset>         // std::bitset
#include <iostream>       // TODO: remove after testing
#include "Message.hpp"
#include "ControlMessage.hpp"

// class //

// constructor
ControlMessage::ControlMessage(SourceID source, DestinationID destination): Message(source, destination), options(MessageOptions()) {
    // Serial.Print("ControlMessage::ControlMessage(...) not implemented\n");
}

// default constructor
ControlMessage::ControlMessage(): Message() {
    // Serial.Print("ControlMessage::ControlMessage() not implemented\n");
}

// destructor
ControlMessage::~ControlMessage() {
    // Serial.Print("ControlMessage::~ControlMessage() not implemented\n");
}

// member functions //

MessageOptions& ControlMessage::getOptions() {
    return options;
}

SourceID& ControlMessage::getSourceID() {
    return sourceID;
}

DestinationID& ControlMessage::getDestinationID() {
    return destinationID;
}

// M1-1 connect
bool ControlMessage::setOptionAsM1_1() {
    setNthBitHigh(0);
    // Serial.Print("ControlMessage::setOptionAsM1_1() not implemented\n");
    return false;
}

// M1-2 ack_connect
bool ControlMessage::setOptionAsM1_2() {
    setNthBitHigh(0);
    // Serial.Print("ControlMessage::setOptionAsM1_2() not implemented\n");
    return false;
}

// M1-3 nack_connect
bool ControlMessage::setOptionAsM1_3() {
    setNthBitHigh(0);
    // Serial.Print("ControlMessage::setOptionAsM1_3() not implemented\n");
    return false;
}

// M2-1 request_data
bool ControlMessage::setOptionAsM2_1() {
    setNthBitHigh(0);
    // Serial.Print("ControlMessage::setOptionAsM2_1() not implemented\n");
    return false;
}

// M2-2 ack_request_data
bool ControlMessage::setOptionAsM2_2() {
    setNthBitHigh(0);
    // Serial.Print("ControlMessage::setOptionAsM2_2() not implemented\n");
    return false;
}

// M2-3 nack_request_data
bool ControlMessage::setOptionAsM2_3() {
    setNthBitHigh(0);
    // Serial.Print("ControlMessage::setOptionAsM2_3() not implemented\n");
    return false;
}

// M2-5 ack_data
bool ControlMessage::setOptionAsM2_5() {
    setNthBitHigh(0);
    // Serial.Print("ControlMessage::setOptionAsM2_5() not implemented\n");
    return false;
}

// M2-6 nack_data
bool ControlMessage::setOptionAsM2_6() {
    setNthBitHigh(0);
    // Serial.Print("ControlMessage::setOptionAsM2_6() not implemented\n");
    return false;
}

// M3-1 alive
bool ControlMessage::setOptionAsM3_1() {
    setNthBitHigh(0);
    // Serial.Print("ControlMessage::setOptionAsM3_1() not implemented\n");
    return false;
}

// M3-2 ack_alive
bool ControlMessage::setOptionAsM3_2() {
    setNthBitHigh(0);
    // Serial.Print("ControlMessage::setOptionAsM3_2() not implemented\n");
    return false;
}

// M4-1 disconnect
bool ControlMessage::setOptionAsM4_1() {
    setNthBitHigh(0);
    // Serial.Print("ControlMessage::setOptionAsM4_1() not implemented\n");
    return false;
}

// M4-2 ack_disconnect
bool ControlMessage::setOptionAsM4_2() {
    setNthBitHigh(0);
    // Serial.Print("ControlMessage::setOptionAsM4_2() not implemented\n");
    return false;
}

//
void ControlMessage::setNthBitHigh(int n) {
    options.options.reset();    // set all bits to zero
    options.options.set(n);     // set nth bit to one
}
