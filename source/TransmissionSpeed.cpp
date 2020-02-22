// include statements //

#include <iostream>       // TODO: remove after testing
#include <vector>         // std::vector
#include "TransmissionSpeed.hpp"

// class //

    // constructors
TransmissionSpeed::TransmissionSpeed(): speed(std::vector<int>()) {
    Serial.Print("TransmissionSpeed::TransmissionSpeed() not implemented\n");
}

// destructor
TransmissionSpeed::~TransmissionSpeed() {
    Serial.Print("TransmissionSpeed::~TransmissionSpeed() not implemented\n");
}

// member functions
int TransmissionSpeed::getLatestSpeed() {
    Serial.Print("TransmissionSpeed::getLatestSpeed() not implemented\n");
    return -1;
}

bool TransmissionSpeed::addLatestSpeed() {
    Serial.Print("TransmissionSpeed::addLatestSpeed() not implemented\n");
    return false;
}

std::vector<int> TransmissionSpeed::getAllSpeeds() {
    Serial.Print("TransmissionSpeed::getAllSpeeds() not implemented\n");
    return speed;
}
