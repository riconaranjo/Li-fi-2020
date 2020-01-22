#ifndef KEYBOARD_H
#define KEYBOARD_H

// include statements //

#include <vector>         // std::vector
#include "CharacterTransmissionControl.h"   // CO-1
#include "SpeedTransmissionControl.h"       // CO-2

// structs //

struct KeyboardInput {
    std::vector<char> text;
};

// class //

// containter class for connection ID and source ID
class Keyboard {
public:
    // constructors
    Keyboard();

    // destructor
    virtual ~Keyboard();

    // member functions
    KeyboardInput read();

protected:

private:
    // member functions
    bool initiateConnectionRequest();      // UC-1.1 creates UC-3
    bool initiateCharacterTransmission();  // UC-1.2 creates UC-5
    bool initiateSpeedTransmission();      // UC-2.2 creates UC-6

    CharacterTransmissionControl characterControl;
    CharacterTransmissionControl characterControl;
};

#endif // KEYBOARD_H
