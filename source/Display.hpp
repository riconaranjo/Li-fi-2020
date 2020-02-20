#ifndef DISPLAY_H
#define DISPLAY_H

// include statements //

#include <string>         // std::string

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
    virtual std::string read() = 0;
    virtual bool write() = 0;

protected:
    // data members
    std::string text;

private:

};

#endif // DISPLAY_H
