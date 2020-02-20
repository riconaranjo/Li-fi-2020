// include statements //

#include <iostream>       // TODO: remove after testing
#include <string>         // std::string
#include "Display.hpp"
#include "SevenSegmentDisplay.hpp"

// class //

// constructors
SevenSegmentDisplay::SevenSegmentDisplay(): Display() {
    std::cout << "SevenSegmentDisplay::SevenSegmentDisplay() not implemented\n";
}

// destructor
SevenSegmentDisplay::~SevenSegmentDisplay() {
    std::cout << "SevenSegmentDisplay::~SevenSegmentDisplay() not implemented\n";
}

// member functions //

std::string SevenSegmentDisplay::read() {
    std::cout << "SevenSegmentDisplay::read() not implemented\n";

    return "";
}

bool SevenSegmentDisplay::write(KeyboardInput) {
    std::cout << "SevenSegmentDisplay::write(KeyboardInput) not implemented\n";

    return false;
}

bool SevenSegmentDisplay::write(std::string) {
    std::cout << "SevenSegmentDisplay::write(std::string) not implemented\n";

    return false;
}
