#ifndef MESSAGE_H
#define MESSAGE_H

// include statements //

#include <bitset>         // std::bitset
#include <cstddef>        // std::byte
#include "Arduino.h"      // String
#include "constants.cpp"

// class //

/* Data format for demo is simply 16 characters (each is 1 byte) */
class Message {
public:
    // constructor
    Message();

    // destructor
    ~Message();

    void setData(String);

    // data members
    unsigned char data[MAX_STRING_SIZE];

protected:

private:

};

#endif // MESSAGE_H
