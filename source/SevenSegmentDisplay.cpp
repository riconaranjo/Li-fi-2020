// include statements //

#include <iostream>       // TODO: remove after testing
// #include <string>         // std::string TODO: replaced with arduino String
#include "Display.hpp"
#include "SevenSegmentDisplay.hpp"

// class //

// constructors
SevenSegmentDisplay::SevenSegmentDisplay(): Display() {
    // Serial.Print("SevenSegmentDisplay::SevenSegmentDisplay() not implemented\n");
}

// destructor
SevenSegmentDisplay::~SevenSegmentDisplay() {
    // Serial.Print("SevenSegmentDisplay::~SevenSegmentDisplay() not implemented\n");
}

// member functions //

String SevenSegmentDisplay::read() {
    // Serial.Print("SevenSegmentDisplay::read() not implemented\n");

    return "";
}

bool SevenSegmentDisplay::write(KeyboardInput) {
    // Serial.Print("SevenSegmentDisplay::write(KeyboardInput) not implemented\n");

    return false;
}

bool SevenSegmentDisplay::write(String) {
    // Serial.Print("SevenSegmentDisplay::write(String) not implemented\n");

    return false;
}
