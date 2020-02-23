// include statements //

// #include <string>         // std::string TODO: replaced with arduino String
#include "SevenSegmentDisplay.hpp"

// class //

// constructors
SevenSegmentDisplay::SevenSegmentDisplay(): Display() {
    // Serial.print("SevenSegmentDisplay::SevenSegmentDisplay() not implemented\n");
}

// destructor
SevenSegmentDisplay::~SevenSegmentDisplay() {
    // Serial.print("SevenSegmentDisplay::~SevenSegmentDisplay() not implemented\n");
}

// member functions //

String SevenSegmentDisplay::read() {
    // Serial.print("SevenSegmentDisplay::read() not implemented\n");

    return "";
}

bool SevenSegmentDisplay::write(String) {
    // Serial.print("SevenSegmentDisplay::write(String) not implemented\n");

    return false;
}
