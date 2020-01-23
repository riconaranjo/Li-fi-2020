#ifndef FPGA_H
#define FPGA_H

// include statements //

#include <string>         // std::string
#include <vector>         // std::vector
#include "ConnectDevicesControl.h"      // CO-3
#include "DisconnectDevicesControl.h"   // CO-4
#include "Message.h"

// structs //

// class //

// class for interfacing with FPGA
class FPGA {
public:
    // constructors
    FPGA();

    // destructor
    virtual ~FPGA();

    // member functions
    bool write(Message& message);
    Message& read();

protected:

private:

};

#endif // FPGA_H
