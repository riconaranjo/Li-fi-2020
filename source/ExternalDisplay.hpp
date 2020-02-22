#ifndef EXTERNALDISPLAY_H
#define EXTERNALDISPLAY_H

// include statements //

// #include <string>         // std::string TODO replaced with arduino string
#include "Display.hpp"

// structs //

// class //

// class for interfacing with external display
class ExternalDisplay: Display {
public:
    // constructors
    ExternalDisplay();

    // destructor
    ~ExternalDisplay();

    // member functions
    String read();
    bool write();

protected:

private:

};

#endif // EXTERNALDISPLAY_H
