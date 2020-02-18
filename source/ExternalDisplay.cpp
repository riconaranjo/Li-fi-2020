// include statements //

#include <string>         // std::string
#include <iostream>       // TODO: remove after testing
#include "ExternalDisplay.h"

// class //

// constructors
ExternalDisplay::ExternalDisplay(): Display() {
    std::cout << "ExternalDisplay::ExternalDisplay() not implemented\n";
}

// destructor
ExternalDisplay::~ExternalDisplay() {
    std::cout << "ExternalDisplay::~ExternalDisplay() not implemented\n";

}

// member functions//

std::string ExternalDisplay::read() {
    std::cout << "ExternalDisplay::read() not implemented\n";
    text = "";
    return "";
}

bool ExternalDisplay::write() {
    std::cout << "ExternalDisplay::write() not implemented\n";
    return false;
}
