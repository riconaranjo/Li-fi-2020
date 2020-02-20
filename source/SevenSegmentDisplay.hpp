#ifndef SEVENSEGMENTDISPLAY_H
#define SEVENSEGMENTDISPLAY_H

// include statements //

#include <string>         // std::string
#include "Display.hpp"
#include "Keyboard.hpp"

// structs //

// class //

// containter class for connection ID and source ID
class SevenSegmentDisplay: public Display {
public:
    // constructors
    SevenSegmentDisplay();

    // destructor
    ~SevenSegmentDisplay();

    // member functions
    std::string read();
    bool write(KeyboardInput);
    bool write(std::string);

protected:

private:

};

#endif // SEVENSEGMENTDISPLAY_H
