// include statements //

#include <iostream>       // todo: remove after testing
#include <vector>         // std::vector
#include "TransmissionSpeed.h"

// class //

    // constructors
TransmissionSpeed::TransmissionSpeed(): speed(std::vector<int>()) {
    std::cout << "TransmissionSpeed::TransmissionSpeed() not implemented\n";
}

// destructor
~TransmissionSpeed::TransmissionSpeed() {
    std::cout << "TransmissionSpeed::~TransmissionSpeed() not implemented\n";
}

// member functions
int TransmissionSpeed::getLatestSpeed() {
    std::cout << "TransmissionSpeed::getLatestSpeed() not implemented\n";
    return -1;
}

bool TransmissionSpeed::addLatestSpeed() {
    std::cout << "TransmissionSpeed::addLatestSpeed() not implemented\n";
    return false;
}

std::vector<int> TransmissionSpeed::getAllSpeeds() {
    std::cout << "TransmissionSpeed::getAllSpeeds() not implemented\n";
    return speed;
}
