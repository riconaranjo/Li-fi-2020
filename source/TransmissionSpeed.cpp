// include statements //

#include <iostream>       // TODO: remove after testing
#include <vector>         // std::vector
#include "TransmissionSpeed.hpp"

// class //

    // constructors
TransmissionSpeed::TransmissionSpeed(): speed(std::vector<int>()) {
    // Serial.print("TransmissionSpeed::TransmissionSpeed() not implemented\n");
}

// destructor
TransmissionSpeed::~TransmissionSpeed() {
    // Serial.print("TransmissionSpeed::~TransmissionSpeed() not implemented\n");
}

// member functions
int TransmissionSpeed::getLatestSpeed() {
    // Serial.print("TransmissionSpeed::getLatestSpeed() not implemented\n");
    return -1;
}

bool TransmissionSpeed::addLatestSpeed() {
    // Serial.print("TransmissionSpeed::addLatestSpeed() not implemented\n");
    return false;
}

std::vector<int> TransmissionSpeed::getAllSpeeds() {
    // Serial.print("TransmissionSpeed::getAllSpeeds() not implemented\n");
    return speed;
}
