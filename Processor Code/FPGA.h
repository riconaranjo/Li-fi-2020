#ifndef FPGA_H
#define FPGA_H

// include statements //

#include <string>         // std::string
#include "Message.h"

// structs //

// class //

// containter class for connection ID and source ID
class FPGA {
public:
    // constructors
    FPGA();

    // destructor
    virtual ~FPGA();

    // member functions
    Message& write();
    Message& read();

protected:

private:

};

#endif // FPGA_H
