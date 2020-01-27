#ifndef INTEGRATIONTESTS_H
#define INTEGRATIONTESTS_H

#include "CharacterTransmissionControl.cpp"
#include "CharacterTransmissionControl.h"
#include "ConnectDevicesControl.cpp"
#include "ConnectDevicesControl.h"
#include "Connection.cpp"
#include "Connection.h"
#include "ControlMessage.cpp"
#include "ControlMessage.h"
#include "Data.cpp"
#include "Data.h"
#include "DataFile.cpp"
#include "DataFile.h"
#include "DataMessage.cpp"
#include "DataMessage.h"
#include "DisconnectDevicesControl.cpp"
#include "DisconnectDevicesControl.h"
#include "Display.cpp"
#include "Display.h"
#include "ExternalDisplay.cpp"
#include "ExternalDisplay.h"
#include "FPGA.cpp"
#include "FPGA.h"
#include "Keyboard.cpp"
#include "Keyboard.h"
#include "Message.cpp"
#include "Message.h"
#include "Modem.cpp"
#include "Modem.h"
#include "SevenSegmentDisplay.cpp"
#include "SevenSegmentDisplay.h"
#include "SpeedTransmissionControl.cpp"
#include "SpeedTransmissionControl.h"
#include "TransmissionSpeed.cpp"
#include "TransmissionSpeed.h"
#include "TransmittingCharacterControl.cpp"
#include "TransmittingCharacterControl.h"
#include "TransmittingDataControl.cpp"
#include "TransmittingDataControl.h"

class IntegrationTests {
public:
    // constructor
    IntegrationTests();
    // destructor
    ~IntegrationTests();

    // tests //

    void runAll();
    // void setUpTest();

    bool CharacterTransmissionTest();   // UC-1
    bool SpeedTransmissionTest();       // UC-2
    bool ConnectDevicesTest();          // UC-3
    bool DisconnectDevicesTest();       // UC-4
    bool TransmittingCharactersTest();  // UC-5
    bool TransmittingDataTest();        // UC-6
};


#endif // INTEGRATIONTESTS_H
