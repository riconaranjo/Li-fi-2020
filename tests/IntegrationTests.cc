// include statements //

#include <iostream>       // std::cout
#include <assert.h>       // assert
#include "IntegrationTests.h"

// constructor
IntegrationTests::IntegrationTests() {

}

// destructor
IntegrationTests::~IntegrationTests() {

}

// tests //

void IntegrationTests::runAll() {
    CharacterTransmissionTest();    // UC-1
    SpeedTransmissionTest();        // UC-2
    ConnectDevicesTest();           // UC-3
    DisconnectDevicesTest();        // UC-4
    TransmittingCharactersTest();   // UC-5
    TransmittingDataTest();         // UC-6
}

// UC-1
bool IntegrationTests::CharacterTransmissionTest() {
    try {
        bool result = false;

        std::cout << "IntegrationTests::CharacterTransmissionTest() not implemented\n";

        // 1. User connects user device to modem device (includes UC-3).
        result = ConnectDevicesTest();
        assert(assert && "- UC-1.1: user device was unable to connect to modem device");

        // 2. User transmits keyboard character from modem device to user device (includes UC-5) by pressing on keyboard keys.

        result = TransmittingCharactersTest();
        assert(assert && "- UC-1.2: keyboard character was unable to be transmitted");

        // 3. User device displays transmitted characters.

        result = DisplayTransmittedCharacter();
        assert(assert && "- UC-1.3: transmitted character was unable to be displayed");
        
    } catch {
        std::cout << "- CharacterTransmissionTest (UC-1) failed\n"
        return false;
    }

    std::cout << "+ CharacterTransmissionTest (UC-1) passed\n"
    return true;
}

// UC-2
bool IntegrationTests::SpeedTransmissionTest() {
    bool result = false;

    std::cout << "IntegrationTests::SpeedTransmissionTest() not implemented\n";

    if (result) {
        std::cout << "- SpeedTransmissionTest (UC-2) failed\n"
    } else {
        std::cout << "+ SpeedTransmissionTest (UC-2) passed\n"
    }
}

// UC-3
bool IntegrationTests::ConnectDevicesTest() {
    bool result = false;

    std::cout << "IntegrationTests::ConnectDevicesTest() not implemented\n";

    if (result) {
        std::cout << "- ConnectDevicesTest (UC-3) failed\n"
    } else {
        std::cout << "+ ConnectDevicesTest (UC-3) passed\n"
    }
}

// UC-4
bool IntegrationTests::DisconnectDevicesTest() {
    bool result = false;

    std::cout << "IntegrationTests::DisconnectDevicesTest() not implemented\n";

    if (result) {
        std::cout << "- DisconnectDevicesTest (UC-4) failed\n"
    } else {
        std::cout << "+ DisconnectDevicesTest (UC-4) passed\n"
    }
}

// UC-5
bool IntegrationTests::TransmittingCharactersTest() {
    bool result = false;

    std::cout << "IntegrationTests::TransmittingCharactersTest() not implemented\n";

    if (result) {
        std::cout << "- TransmittingCharactersTest (UC-5) failed\n"
    } else {
        std::cout << "+ TransmittingCharactersTest (UC-5) passed\n"
    }
}

// UC-6
bool IntegrationTests::TransmittingDataTest() {
    bool result = false;

    std::cout << "IntegrationTests::TransmittingDataTest() not implemented\n";

    if (result) {
        std::cout << "- TransmittingDataTest (UC-6) failed\n"
    } else {
        std::cout << "+ TransmittingDataTest (UC-6) passed\n"
    }
}