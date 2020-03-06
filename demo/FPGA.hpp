#ifndef FPGA_H
#define FPGA_H

// include statements //

#include <vector>         // std::vector
#include "Message.hpp"
#include "constants.cpp"

// structs //

struct FPGAResponse {
    MessageType type;
    Message* message;

    FPGAResponse() : type(MessageType::NONE), message(nullptr) {}    
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
    bool write(Message* message);
    FPGAResponse* read();

protected:

private:

};

#endif // FPGA_H
