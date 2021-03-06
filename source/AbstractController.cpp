// include statements //

#include "AbstractController.hpp"

// class //

// constructor
AbstractController::AbstractController() {
    if(!modem) modem = new Modem();

    // TODO: remove
    Serial.println("abstract done...");
    delay(1000);
}

// destructor
AbstractController::~AbstractController() {
    delete modem;
}

// setter for bool isModem
void AbstractController::setIsModem(bool isModem) {
    this->isModem = isModem;
}

// initialize static members
Modem* AbstractController::modem = nullptr;

bool AbstractController::isModem = false;


