// include statements //

#include "CharacterTransmissionControl.hpp"   // CO-5

// constructors
CharacterTransmissionControl::CharacterTransmissionControl(): AbstractController() {
    // Serial.print("CharacterTransmissionControl::CharacterTransmissionControl() not implemented\n");
}

// destructor
CharacterTransmissionControl::~CharacterTransmissionControl() {
    // Serial.print("CharacterTransmissionControl::~CharacterTransmissionControl() not implemented\n");
    delete connectControl;
    delete characterControl;
}

// member functions //

// user device perspective //

// UC-1.1 creates UC-3
// S1u - creates UC-3
bool CharacterTransmissionControl::initiateConnection() {
    // Serial.print("CharacterTransmissionControl::initiateConnection() not implemented\n");

    connectControl = new ConnectDevicesControl();

    connectControl->requestToConnect();
    bool response = connectControl->receiveConnectionResponse();

    return response;
}

// UC-1.2 creates UC-5
// S2u - handles connection signals
bool CharacterTransmissionControl::receiveCharacter() {
    // Serial.print("CharacterTransmissionControl::receiveCharacter() not implemented\n");

    // send heartbeat if it's been at least 30 s since last heart beat
    // TODO: heartbeat logic omitted for demo

    characterControl = new TransmittingCharacterControl();

    // S1u - receive data request
    characterControl.receiveDataMessageRequest(); // this is an infinite loop
    // S2u - send data request ack
    characterControl.acknowledgeDataMessageRequest();
    // S3u - wait for data message
    characterControl.receiveDataMessage();
    // S4u - send data ack
    characterControl.acknowledgeDataMessage();
    // S5u - display data
    characterControl.displayDataMessage();

    return false;

}

// UC-1.3
bool CharacterTransmissionControl::displayCharacter() {
    // Serial.print("CharacterTransmissionControl::displayCharacter() not implemented\n");
    return false;
}

// modem device perspective //

// UC-1.1 creates UC-3
// S1m - creates UC-3
bool CharacterTransmissionControl::acceptConnection() {
    connectControl = new ConnectDevicesControl();
    return false;
}

// UC-1.2
// S2m - handles connection signals
bool CharacterTransmissionControl::getKeyboardInput() {
    return modem->readKeyboardInput() != nullptr;
}

// UC-1.2 creates UC-5
bool CharacterTransmissionControl::transmitCharacter() {
    characterControl = TransmittingCharacterControl();

    // S1m - send data request
    characterControl.sendDataMessageRequest();

    // S2m - wait for data request response
    bool response = characterControl.receiveDataMessageRequestResponse();
    int attempts = 0;

    while (!response) {
        attempts++;
        if (attempts == 25) return false;

        delay(100);

        // S1m - resend data request
        characterControl.resendDataMessageRequest();

        // S2m - wait for data request response
        response = characterControl.receiveDataMessageRequestResponse();
    }

    // S3m - send data message
    characterControl.sendDataMessage();

    // S4m - wait for data message ack
    response = characterControl.receiveDataMessageResponse();
    attempts = 0;

    while (!response) {
        attempts++;
        if (attempts == 25) return false;

        delay(100);

        // S3m - resend data message
        characterControl.resendDataMessage();

        // S4m - wait for data message ack
        response = characterControl.receiveDataMessageResponse();
    }

    return true;
}
