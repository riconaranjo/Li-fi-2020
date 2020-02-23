#ifndef KEYBOARD_H
#define KEYBOARD_H

// include statements //

#include <vector>         // std::vector
#include <ctime>          // std::time
#include "Arduino.h"

// structs //

struct KeyboardInput {
    String text;
    std::time_t time;

    KeyboardInput(): text(String()), time(std::time_t())  { }
};

// class //

// containter class for connection ID and source ID
class Keyboard {
public:
    // constructors
    Keyboard();

    // destructor
    ~Keyboard();

    // member functions
    KeyboardInput* read();

protected:

private:

};

#endif // KEYBOARD_H
