#ifndef KEYBOARD_H
#define KEYBOARD_H

// include statements //

#include <vector>         // std::vector
#include <ctime>          // std::time
#include <SerLCD.h>
#include "Arduino.h"

// structs //

struct KeyboardInput {
    String text;

    KeyboardInput(): text(String())  { }
};

// class //

// containter class for connection ID and source ID
class Keyboard {
public:
    // constructors
    Keyboard(SerLCD&);

    // destructor
    ~Keyboard();

    // member functions
    KeyboardInput* read();

protected:

private:
    SerLCD& display;
};

#endif // KEYBOARD_H
