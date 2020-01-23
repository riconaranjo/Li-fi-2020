#ifndef DISPLAY_H
#define DISPLAY_H

// include statements //

#include <string>         // std::string

// structs //

// class //

// interface display objects
class Display {
public:
    // destructor
    virtual ~Display();

    // abstract member functions
    virtual std::string read() = 0;
    virtual bool write() = 0;

protected:

private:
    // data members
    std::string text;
};

#endif // DISPLAY_H
