#ifndef SEVENSEGMENTDISPLAY_H
#define SEVENSEGMENTDISPLAY_H

// include statements //

#include <string>         // std::string
#include "Display.h"

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
    bool write();

protected:

private:

};

#endif // SEVENSEGMENTDISPLAY_H
