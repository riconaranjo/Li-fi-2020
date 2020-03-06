#ifndef MESSAGE_H
#define MESSAGE_H

// include statements //

#include <bitset>         // std::bitset
#include <cstddef>        // std::byte
#include "Arduino.h"      // String

// class //

/* Data format for demo is simply 16 characters (each is 1 byte) */
class Message {
public:
    // constructor
    Message();

    // destructor
    ~Message();

    void setData(String);

protected:

private:
    // data members
    unsigned char data[16];
};

#endif // MESSAGE_H
