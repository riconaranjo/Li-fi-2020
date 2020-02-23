#ifndef DISPLAY_H
#define DISPLAY_H

// include statements //

#include <Arduino.h>
// #include <string>         // std::string // TODO replaced with arduino String

// structs //

// class //

// interface display objects
class Display {
public:
    // constructor
    Display();
    // destructor
    ~Display();

    // abstract member functions
    virtual String read() = 0;
    virtual bool write(String) = 0;

protected:
    // data members
    String text;

private:

};

#endif // DISPLAY_H
