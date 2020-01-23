#ifndef EXTERNALDISPLAY_H
#define EXTERNALDISPLAY_H

// include statements //

#include <string>         // std::string
#include "Display.h"

// structs //

// class //

// class for interfacing with external display
class ExternalDisplay: Display {
public:
    // constructors
    ExternalDisplay();

    // destructor
    virtual ~ExternalDisplay();

    // member functions
    std::string read();
    bool write();

protected:

private:

};

#endif // EXTERNALDISPLAY_H
