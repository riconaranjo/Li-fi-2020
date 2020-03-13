// include statements //

#include "Arduino.h"      // String
#include "CharacterTransmissionControl.hpp"   // CO-5

// constructors
CharacterTransmissionControl::CharacterTransmissionControl(Modem* m): modem(m) {
    // Serial.print("CharacterTransmissionControl::CharacterTransmissionControl() not implemented\n");
}

// destructor
CharacterTransmissionControl::~CharacterTransmissionControl() {
}

// member functions //

// user device perspective //

// UC-1.1 creates UC-3
// S1u - creates UC-3
bool CharacterTransmissionControl::initiateConnection() {
    Serial.print("CharacterTransmissionControl::initiateConnection() not implemented\n");
    delay(10);

    return false;

    // connectControl = new ConnectDevicesControl();

    // connectControl.requestToConnect();
    // bool response = connectControl.receiveConnectionResponse();

    // return response;
}

// UC-1.2 creates UC-5
// S2u - handles connection signals
bool CharacterTransmissionControl::receiveCharacter() {
    Serial.print("CharacterTransmissionControl::receiveCharacter() not implemented\n");
    delay(10);

    // TODO: heartbeat logic omitted for demo
    // send heartbeat if it's been at least 30 s since last heart beat

    TransmittingCharacterControl characterControl = TransmittingCharacterControl(modem);

    // S1u - receive data request
    characterControl.receiveDataMessageRequest(); // this is an infinite loop
    // S2u - send data request ack
    characterControl.acknowledgeDataMessageRequest();
    // S3u - wait for data message
    String* message = characterControl.receiveDataMessage();
    // S4u - send data ack -> implemented in fpga
    // characterControl.acknowledgeDataMessage();
    // S5u - display data
    characterControl.displayDataMessage(message);

    delete message;
    return true;
}

// UC-1.3
bool CharacterTransmissionControl::displayCharacter() {
    Serial.print("CharacterTransmissionControl::displayCharacter() not implemented\n");
    delay(10);

    return false;
}

// modem device perspective //

// UC-1.1 creates UC-3
// S1m - creates UC-3
bool CharacterTransmissionControl::acceptConnection() {
    // TODO: omitted for demo
    return true;

    // Serial.println("CharacterTransmissionControl::acceptConnection()");
    // delay(10);
    // connectControl = ConnectDevicesControl();

    // bool response = connectControl.respondToConnectionRequest();
    
    // Serial.println("CharacterTransmissionControl::acceptConnection() done");
    // delay(10);

    // return response;
}

// UC-1.2
// S2m - handles connection signals
String* CharacterTransmissionControl::getKeyboardInput() {
    return modem->readKeyboardInput();
}

// UC-1.2 creates UC-5
bool CharacterTransmissionControl::transmitCharacter(String* message) {
    Serial.print("> start CharacterTransmissionControl::transmitCharacter() not implemented\n");
    delay(10);
    
    TransmittingCharacterControl characterControl = TransmittingCharacterControl(modem);

    // S1m - send data request
    characterControl.sendDataMessageRequest();

    // S2m - wait for data request response
    bool response = characterControl.receiveDataMessageRequestResponse();
    int attempts = 0;

    while (!response) {
        attempts++;
        if (attempts == 25) return false;

        delay(10);

        // S1m - resend data request
        characterControl.resendDataMessageRequest();

        // S2m - wait for data request response
        response = characterControl.receiveDataMessageRequestResponse();
    }

    // S3m - send data message
    characterControl.sendDataMessage(message);

    // S4m - wait for data message ack
    response = characterControl.receiveDataMessageResponse();
    attempts = 0;

    while (!response) {
        attempts++;
        if (attempts == 25) return false;

        delay(10);

        // S3m - resend data message
        characterControl.resendDataMessage(message);

        // S4m - wait for data message ack
        response = characterControl.receiveDataMessageResponse();
    }

    Serial.print("> done CharacterTransmissionControl::transmitCharacter()\n");
    delay(10);
    return true;
}
