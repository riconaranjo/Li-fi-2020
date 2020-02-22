// include statements //

// #include <string>         // std::string TODO replaced with arduino String
#include <iostream>       // TODO: remove after testing
#include "ExternalDisplay.hpp"

// class //

// constructors
ExternalDisplay::ExternalDisplay(): Display() {
    // Serial.Print("ExternalDisplay::ExternalDisplay() not implemented\n");
}

// destructor
ExternalDisplay::~ExternalDisplay() {
    // Serial.Print("ExternalDisplay::~ExternalDisplay() not implemented\n");

}

// member functions//

String ExternalDisplay::read() {
    // Serial.Print("ExternalDisplay::read() not implemented\n");
    text = "";
    return text;
}

bool ExternalDisplay::write() {
    // Serial.Print("ExternalDisplay::write() not implemented\n");
    return false;
}
