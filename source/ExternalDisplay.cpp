// include statements //

// #include <string>         // std::string TODO replaced with arduino String
#include "ExternalDisplay.hpp"

// class //

// constructors
ExternalDisplay::ExternalDisplay(): Display() {
    // Serial.print("ExternalDisplay::ExternalDisplay() not implemented\n");
}

// destructor
ExternalDisplay::~ExternalDisplay() {
    // Serial.print("ExternalDisplay::~ExternalDisplay() not implemented\n");

}

// member functions//

String ExternalDisplay::read() {
    // Serial.print("ExternalDisplay::read() not implemented\n");
    text = "";
    return text;
}

bool ExternalDisplay::write(String text) {
    // Serial.print("ExternalDisplay::write() not implemented\n");

    // TODO: implement writing to external display

    this->text = text;
    return false;
}
