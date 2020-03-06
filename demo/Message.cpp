// include statements //

// #include <bitset>         // std::bitset
#include "Message.hpp"
#include "constants.cpp"

// class //

// constructor
Message::Message() { }

// destructor
Message::~Message() { }

void Message::setData(String text) {
    // extra character for the null terminator
    int length = text.length() + 1; 
    text.toCharArray(data, length);
}
