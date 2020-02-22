// include statements //

#include <iostream>       // TODO: remove after testing
#include <string>         // std::string
#include "Display.hpp"
#include "SevenSegmentDisplay.hpp"

// class //

// constructors
SevenSegmentDisplay::SevenSegmentDisplay(): Display() {
    Serial.Print("SevenSegmentDisplay::SevenSegmentDisplay() not implemented\n");
}

// destructor
SevenSegmentDisplay::~SevenSegmentDisplay() {
    Serial.Print("SevenSegmentDisplay::~SevenSegmentDisplay() not implemented\n");
}

// member functions //

std::string SevenSegmentDisplay::read() {
    Serial.Print("SevenSegmentDisplay::read() not implemented\n");

    return "";
}

bool SevenSegmentDisplay::write(KeyboardInput) {
    Serial.Print("SevenSegmentDisplay::write(KeyboardInput) not implemented\n");

    return false;
}

bool SevenSegmentDisplay::write(std::string) {
    Serial.Print("SevenSegmentDisplay::write(std::string) not implemented\n");

    return false;
}
