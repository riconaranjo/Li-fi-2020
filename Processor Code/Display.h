#ifndef DISPLAY_H
#define DISPLAY_H

// include statements //

#include <string>         // std::string

// structs //

// class //

// containter class for connection ID and source ID
class Display {
public:
    // constructors
    Display();

    // destructor
    virtual ~Display();

    // abstract member functions
    std::string read();
    bool write();

protected:

private:
    // data members
    std::string text;

};

#endif // DISPLAY_H
