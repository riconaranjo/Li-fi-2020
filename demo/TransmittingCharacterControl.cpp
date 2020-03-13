// include statements //

#include "TransmittingCharacterControl.hpp"

// class //

// constructors
TransmittingCharacterControl::TransmittingCharacterControl(Modem* m): modem(m), ackNum(0) {
    // Serial.print("TransmittingCharacterControl::TransmittingCharacterControl() not implemented\n");
}

// destructor
TransmittingCharacterControl::~TransmittingCharacterControl() {
    // Serial.print("TransmittingCharacterControl::~TransmittingCharacterControl() not implemented\n");
}

// member functions //

// user device perspective //

// UC-5.2.2.1
void TransmittingCharacterControl::receiveDataMessageRequest() {
    Serial.print("TransmittingCharacterControl::receiveDataMessageRequest()\n");
    delay(10);
    
    String* response;
    // int attempts = 0;
    // while (attempts < 25) {
    while (true) {
        // attempts++;
        response = modem->readFPGAInput();
        // if (response && *response == 0xAAAACCDDAAAACCDDAAAACCDDAAAACCDDAAAACCDDAAAACCDDAAAACCDDAAAACCDD) {
        if (response) {
            // TODO: remove after debug
            Serial.print("data message request received!");
            delay(10);
            Serial.print(*response);
            delay(10);
            
            delete response;
            return;
        }
        
        Serial.print("waiting for data message request...");
        delay(10);
    }
}

// UC-5.2.2.1
void TransmittingCharacterControl::acknowledgeDataMessageRequest() {
    Serial.print("TransmittingCharacterControl::acknowledgeDataMessageRequest()\n");
    delay(10);
    modem->sendUserAcceptRequestToSendDataMessage();
}

// UC-5.2.3.1
String* TransmittingCharacterControl::receiveDataMessage() {
    Serial.print("TransmittingCharacterControl::acknowledgeDataMessageRequest() not implemented\n");
    delay(10);
    String* response = modem->readFPGAInput();
    return response;
}

// UC-5.2.3.1 -> implemented in fpga
void TransmittingCharacterControl::acknowledgeDataMessage() {
    Serial.print("TransmittingCharacterControl::acknowledgeDataMessage() not implemented\n");
    delay(10);
    // modem->sendUserDataMessageACK();
}

// UC-5.2.4
void TransmittingCharacterControl::displayDataMessage(String* message) {
    Serial.print("TransmittingCharacterControl::displayDataMessage()\n");
    delay(10);
    modem->print(*message);
}

// modem device perspective //

// UC-5.2.2
void TransmittingCharacterControl::sendDataMessageRequest() {
    Serial.print("TransmittingCharacterControl::sendDataMessageRequest()\n");
    delay(10);

    modem->sendModemRequestToSendDataMessage();
}

// UC-5.2.2.1
bool TransmittingCharacterControl::receiveDataMessageRequestResponse() {
    Serial.print("TransmittingCharacterControl::receiveDataMessageRequestResponse()\n");
    delay(10);
    
    String* response;
    int attempts = 0;
    while (attempts < 25) {
        attempts++;
        response = modem->readFPGAInput();
        // if (response && *response == 0xFFFFCCDDFFFFCCDDFFFFCCDDFFFFCCDDFFFFCCDDFFFFCCDDFFFFCCDDFFFFCCDD) {
        if (response) {
            // TODO: remove after debug
            Serial.print("received!");
            delay(10);
            Serial.print(*response);
            delay(10);
            
            delete response;
            return true;
        }
        
        Serial.print("waiting for data message request response...");
        delay(10);
    }

    return false;
}

// UC-5.2.3
void TransmittingCharacterControl::sendDataMessage(String* message) {
    Serial.print("TransmittingCharacterControl::sendDataMessage() not implemented\n");
    delay(10);
    modem->sendModemDataMessage(message);
}

// UC-5.2.3.1
bool TransmittingCharacterControl::receiveDataMessageResponse() {
    Serial.print("TransmittingCharacterControl::receiveDataMessageResponse() not implemented\n");
    delay(10);
    
    String* response;
    int attempts = 0;
    while (attempts < 25) {
        attempts++;
        response = modem->readFPGAInput();
        if (response) {
            // if(ackNum == 0 && *response == 0xAABBCCDDAABBCCDDAABBCCDDAABBCCDDAABBCCDDAABBCCDDAABBCCDDAABBCCDD) {
            //     // TODO: remove after debug
            //     Serial.print("received ack0!");
            //     delay(10);
            // } else if(ackNum == 1 && *response == 0xFF88CCDDFF88CCDDFF88CCDDFF88CCDDFF88CCDDFF88CCDDFF88CCDDFF88CCDD) {
            //     // TODO: remove after debug
            //     Serial.print("received ack1!");
            //     delay(10);
            // } else {
            //     Serial.print("received wrong response...");
            //     delay(10);
            //     continue;
            // }
            
            Serial.print("data message response received...");
            delay(10);
            Serial.print(*response);
            delay(10);

            // TODO: omitted for now
            // ackNum = ackNum == 0 ? 1 : 0; // toggle ackNum to increment sequence number
            delete response;
            return true;
        }
        
        Serial.print("waiting for data message request response...");
        delay(10);
    }

    return false;
}

// UC-5.2.4
void TransmittingCharacterControl::resendDataMessageRequest() {
    Serial.print("TransmittingCharacterControl::resendDataMessageRequest() not implemented\n");
    delay(10);
    this->sendDataMessageRequest();
}

// UC-5.2.3
void TransmittingCharacterControl::resendDataMessage(String* message) {
    Serial.print("TransmittingCharacterControl::resendDataMessage() not implemented\n");
    delay(10);
    this->sendDataMessage(message);
}

