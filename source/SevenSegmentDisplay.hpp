#ifndef SEVENSEGMENTDISPLAY_H
#define SEVENSEGMENTDISPLAY_H

// include statements //

// #include <string>         // std::string TODO: replaced with Arduino String
#include "Display.hpp"

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
    String read();
    bool write(String);

protected:

private:

};

#endif // SEVENSEGMENTDISPLAY_H
