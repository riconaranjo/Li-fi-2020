#ifndef ABSTRACTCONTROL_H
#define ABSTRACTCONTROL_H

// include statements //

// #include <Arduino.h>
#include "Modem.hpp"

// class Modem;

// structs //

// class //

// class for control object CO-1 for UC-1
// created by Controller object
class AbstractController {
public:
    // constructors
    AbstractController();

    // destructor
    ~AbstractController();

    // member functions
    void setIsModem(bool);

protected:
    // data members
    static Modem* modem;
    static bool isModem;

private:

};

#endif // ABSTRACTCONTROL_H
