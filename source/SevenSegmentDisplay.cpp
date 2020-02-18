// include statements //

#include <iostream>       // TODO: remove after testing
#include <string>         // std::string
#include "Display.h"
#include "SevenSegmentDisplay.h"

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
}

bool SevenSegmentDisplay::write(KeyboardInput) {
    std::cout << "SevenSegmentDisplay::write(KeyboardInput) not implemented\n";
}

bool SevenSegmentDisplay::write(std::string) {
    std::cout << "SevenSegmentDisplay::write(std::string) not implemented\n";
}
