#ifndef INTEGRATIONTESTS_H
#define INTEGRATIONTESTS_H

#include "CharacterTransmissionControl.cpp"
#include "CharacterTransmissionControl.hpp"
#include "ConnectDevicesControl.cpp"
#include "ConnectDevicesControl.hpp"
#include "Connection.cpp"
#include "Connection.hpp"
#include "ControlMessage.cpp"
#include "ControlMessage.hpp"
#include "Data.cpp"
#include "Data.hpp"
#include "DataFile.cpp"
#include "DataFile.hpp"
#include "DataMessage.cpp"
#include "DataMessage.hpp"
#include "DisconnectDevicesControl.cpp"
#include "DisconnectDevicesControl.hpp"
#include "Display.cpp"
#include "Display.hpp"
#include "ExternalDisplay.cpp"
#include "ExternalDisplay.hpp"
#include "FPGA.cpp"
#include "FPGA.hpp"
#include "Keyboard.cpp"
#include "Keyboard.hpp"
#include "Message.cpp"
#include "Message.hpp"
#include "Modem.cpp"
#include "Modem.hpp"
#include "SevenSegmentDisplay.cpp"
#include "SevenSegmentDisplay.hpp"
#include "SpeedTransmissionControl.cpp"
#include "SpeedTransmissionControl.hpp"
#include "TransmissionSpeed.cpp"
#include "TransmissionSpeed.hpp"
#include "TransmittingCharacterControl.cpp"
#include "TransmittingCharacterControl.hpp"
#include "TransmittingDataControl.cpp"
#include "TransmittingDataControl.hpp"

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

private:
    bool DisplayTransmittedCharacter();
    bool DisplayTransmissionSpeed();
    bool PowerOnModemDevice();
    bool PowerOnUserDevice();
    bool UserRequestToConnect();
    bool ModemReceivesUserRequestToTransmit();
    bool ModemAcceptsUserRequestToTransmit();
    bool UserReceivesConnectionRequestResponse();
    bool UserSendsHeartbeat();
    bool ModemReceivesHeartbeat();
    bool ModemSendsHeartbeat();
    bool UserReceivesHeartbeat();
    bool ModemSendsRequestToDisconnect();
    bool UserReceivesRequestToDisconnect();
    bool UserAcceptsRequestToDisconnect();
    bool ModemReceivesRequestToDisconnect();
    bool ModemSetToTransmitCharacters();
    bool ModemReadsKeyboard();
    bool ModemDisplaysKeyboardInput();
    bool ModemSendsDataMessageRequest();
    bool UserReceivesDataMessageRequest();
    bool UserRejectsDataMessageRequest()
    bool ModemReceivesDataMessageRequestRejection();
    bool ModemSendsDataMessageRequest();
    bool UserReceivesDataMessageRequest();
    bool UserAcceptsDataMessageRequest();
    bool ModemReceivesDataMessageRequestAcceptance();
    bool ModemSendsDataMessage();
    bool UserReceivesDataMessage();
    bool UserSendsDataMessageNACK();
    bool ModemReceivesDataMessageNACK();
};


#endif // INTEGRATIONTESTS_H
