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
    try {
        bool result = false;

        std::cout << "IntegrationTests::SpeedTransmissionTest() not implemented\n";

        // 1. User connects user device to modem device (includes UC-3).
        result = ConnectDevicesTest();
        assert(assert && "- UC-2.1: user device was unable to connect to modem device");

        // 2. User transmits large data file from modem device to user device (includes UC-6).
        result = TransmittingDataTest();
        assert(assert && "- UC-2.2: data was unable to be transmitted");

        // 3. User device displays final transmission speed.
        result = DisplayTransmissionSpeed();
        assert(assert && "- UC-2.3: transmitted speed was unable to be displayed");
    } catch {
        std::cout << "- SpeedTransmissionTest (UC-2) failed\n"
        return false;
    }

    std::cout << "+ SpeedTransmissionTest (UC-2) passed\n"
    return true;
}

// UC-3
bool IntegrationTests::ConnectDevicesTest() {
    try {
        bool result = false;

        std::cout << "IntegrationTests::ConnectDevicesTest() not implemented\n";

        // 1. User turns on modem device.
        result = PowerOnModemDevice();
        assert(assert && "- UC-3.1: modem device did not power on");

        // 2. User turns on user device.
        result = PowerOnUserDevice();
        assert(assert && "- UC-3.2: user device did not power on");

        // 3. User device transmits request to connect (M1-1). 
        result = UserRequestToConnect();
        assert(assert && "- UC-3.3: user device was unable to send connection request M1-1");

        // 3.1. Modem device receives and processes user message (M1-1).
        result = ModemReceivesUserRequestToTransmit();
        assert(assert && "- UC-3.3.1: modem device was unable to receive connection request M1-1");

        // 3.2. Modem device transmits response to initiate or not the connection (M1-2, M1-3).
        result = ModemAcceptsUserRequestToTransmit();
        assert(assert && "- UC-3.3.2: modem device was unable to send connection request response M1-2");

        // 4. User device receives connection request response (M1-2, M1-3).
        result = UserReceivesConnectionRequestResponse();
        assert(assert && "- UC-3.4: user device did not receive connection request response M1-2");
        
        // 5. User device sends message (M3-1) to modem device to indicate connection is still valid, every 30 seconds.
        result = UserSendsHeartbeat();
        assert(assert && "- UC-3.5: user device did not send connection alive signal M3-1");

        // 5.1. Modem device receives the message (M3-1).
        result = ModemReceivesHeartbeat();
        assert(assert && "- UC-3.5.1: modem device did not receive connection alive signal M3-1");
        
        // 5.2. Modem device acknowledges the message (M3-2).
        result = ModemSendsHeartbeat();
        assert(assert && "- UC-3.5.2: modem device did not send connection alive signal M3-2");

        // 5.3. User device receives the message (M3-2).
        result = UserReceivesHeartbeat();
        assert(assert && "- UC-3.5.3: user device did not receive connection alive signal M3-2");
    } catch {
        std::cout << "- ConnectDevicesTest (UC-3) failed\n"
        return false;
    }

    std::cout << "+ ConnectDevicesTest (UC-3) passed\n"
    return true;
}

// UC-4
bool IntegrationTests::DisconnectDevicesTest() {
    // devices must already be connected
    try {
        bool result = false;

        std::cout << "IntegrationTests::DisconnectDevicesTest() not implemented\n";

        // 1. User sets device A (modem) to end connection

        // 2. Device A (modem) sends request (M4-1) to end connection to device B (user).
        result = ModemSendsRequestToDisconnect();
        assert(assert && "- UC-4.2: modem device did not send request to disconnect M4-1");

        // 2.1. Device B (user) receives the request to end connection (M4-1).
        result = UserReceivesRequestToDisconnect();
        assert(assert && "- UC-4.2.1: user device did not receive request to disconnect M4-1");

        // 2.2. Device B (user) responds with acknowledgement  (M4-2) to end connection. 
        result = UserAcceptsRequestToDisconnect();
        assert(assert && "- UC-4.2.2: user device was unable to send response for request to disconnect M4-2");

        // 2.3. Device A (modem) receives with acknowledgement  (M4-2) to end connection. 
        result = ModemReceivesRequestToDisconnect();
        assert(assert && "- UC-4.2.3: modem device was unable to receive response for request to disconnect M4-2");
    } catch {
        std::cout << "- DisconnectDevicesTest (UC-4) failed\n"
    } else {
        std::cout << "+ DisconnectDevicesTest (UC-4) passed\n"
    }
        return false;
    }

    std::cout << "+ DisconnectDevicesTest (UC-4) passed\n"
    return true;
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
    return false;
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
    return false;
}

bool IntegrationTests::DisplayTransmittedCharacter() {
    bool result = false;

    std::cout << "IntegrationTests::DisplayTransmittedCharacter() not implemented\n";

    return false;
}

bool IntegrationTests::DisplayTransmissionSpeed() {
    bool result = false;

    std::cout << "IntegrationTests::DisplayTransmissionSpeed() not implemented\n";

    return false;
}