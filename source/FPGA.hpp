#ifndef FPGA_H
#define FPGA_H

// include statements //

// #include <string>         // std::string TODO: replaced with arduino String
#include <vector>         // std::vector
#include "ConnectDevicesControl.hpp"      // CO-3
#include "DisconnectDevicesControl.hpp"   // CO-4
#include "Message.hpp"

// structs //

struct FPGAResponse {
    MessageType type;
    Message* message; // TODO: this reference may not work

    FPGAResponse() : type(MessageType::NONE), message(NULL) {}    
};

// class //

// class for interfacing with FPGA
class FPGA {
public:
    // constructors
    FPGA();

    // destructor
    ~FPGA();

    // member functions
    bool write(Message& message);
    Message& read();

protected:

private:

};

#endif // FPGA_H
