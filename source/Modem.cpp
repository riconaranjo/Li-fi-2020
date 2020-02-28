// include statements //

// #include <iostream>       // TODO: remove after testing
// #include <unordered_map>  // std::unordered_map
// #include <vector>         // std::vector
// #include "Connection.hpp"
// #include "ControlMessage.hpp"
// #include "DataMessage.hpp"
// #include "Keyboard.hpp"
#include "Modem.hpp"

// class //

// constructors
Modem::Modem(): fpga(new FPGA()) {
    // Serial.print("Modem::Modem() not implemented\n");
    std::unordered_map<std::string,Connection> connections = std::unordered_map<std::string,Connection>();
    std::vector<ControlMessage> controlMessages = std::vector<ControlMessage>();
    std::vector<DataMessage> dataMessages = std::vector<DataMessage>();

    // SevenSegmentDisplay sevenSegmentDisplay = SevenSegmentDisplay(); // TODO: abstract class??
    ExternalDisplay externalDisplay = ExternalDisplay();
}

// destructor
Modem::~Modem() {
    if (fpga) delete fpga;
    if (keyboard) delete keyboard;
    if (fpgaResponse) delete fpgaResponse;
    if (keyboardInput) delete keyboardInput;
}

// member functions //

void Modem::setupKeyboard(SerLCD& display) {
    keyboard = new Keyboard(display);
}

// sends the control message to the FPGA
bool Modem::sendControlMessage(ControlMessage& message) {
    Serial.print("Modem::sendControlMessage() not completed\n");
    return fpga->write(message);
}

// sends the data message to the FPGA
bool Modem::sendDataMessage(DataMessage& message) {
    Serial.print("Modem::sendDataMessage() not completed\n");
    return fpga->write(message);
}

// receives the control message from the FPGA
// message will be added to end of Modem::controlMessages
// if return value is true
bool Modem::receiveControlMessage() {
    Serial.print("Modem::receiveControlMessage() not complete\n");
    // TODO: finish this

    readFPGAInput();
    if (!fpgaResponse) return false;

    // message type M2-4 is data message
    if (fpgaResponse->type == MessageType::M2_4) return false;

    ControlMessage* message = fpgaResponse->message;
    // ControlMessage* message = (ControlMessage) fpgaResponse->message;
    controlMessages.push_back(message);

    return true;
}

// receives the data message to the FPGA
// message will be added to end of Modem::dataMessages
// if return value is true
bool Modem::receiveDataMessage() {
    Serial.print("Modem::receiveDataMessage() not completed\n");
    // TODO: finish this

    readFPGAInput();
    if (!fpgaResponse) return false;

    // message type M2-4 is data message
    if (fpgaResponse->type != MessageType::M2_4) return false;

    DataMessage* message = fpgaResponse->message;
    // DataMessage message = DataMessage(fpgaResponse->message);
    dataMessages.push_back(message);

    return true;
}

void Modem::displayDataMessage() {
    
    DataMessage* message = dataMessages.back();
    externalDisplay.write(message->getDataString());
}

bool Modem::addConnection(Connection& connection) {
    // Serial.print("Modem::addConnection() adding...\n");
    connections[connection.getConnectionID()] = connection;
    return true;
}

bool Modem::endConnection(Connection& connection) {
    // Serial.print("Modem::endConnection() removing...\n");
    connections.erase(connection.getConnectionID());
    return true;
}

KeyboardInput* Modem::readKeyboardInput() {

    KeyboardInput* input = keyboard->read();
    if (!input) return nullptr;

    if (keyboardInput) delete keyboardInput;
    keyboardInput = input;

    return keyboardInput;
}

FPGAResponse* Modem::readFPGAInput() {

    FPGAResponse* input = fpga->read();
    if (!input) return nullptr;

    if (fpgaResponse) delete fpgaResponse;
    fpgaResponse = input;

    return fpgaResponse;
}

void Modem::display(KeyboardInput* input) {
    externalDisplay.write(input->text);
}

void Modem::display(String text) {
    externalDisplay.write(text);
}

// modem member functions

// send M1-2 as modem
void Modem::SendModemAcceptRequestToConnect() {
    // Serial.print("Modem::SendModemAcceptRequestToConnect() not implemented\n");
}

// send M1-3 as modem
void Modem::SendModemRejectRequestToConnect() {
    // Serial.print("Modem::SendModemRejectRequestToConnect() not implemented\n");
}

// send M2-1 as modem
void Modem::SendModemRequestToSendDataMessage() {
    // Serial.print("Modem::SendModemRequestToSendDataMessage() not implemented\n");
}

// send M2-4 as modem
void Modem::SendModemDataMessage() {
    // Serial.print("Modem::SendModemDataMessage() not implemented\n");
}

// send M3-2 as modem
void Modem::SendModemHeartBeat() {
    // Serial.print("Modem::SendModemHeartBeat() not implemented\n");
}

// user member functions

// send M1-1 as user
void Modem::SendUserRequestToConnect() {
    // Serial.print("Modem::SendUserRequestToConnect() not implemented\n");
}

// send M2-2 as user
void Modem::SendUserAcceptRequestToSendDataMessage() {
    // Serial.print("Modem::SendUserAcceptRequestToSendDataMessage() not implemented\n");
}

// send M2-3 as user
void Modem::SendUserRejectRequestToSendDataMessage() {
    // Serial.print("Modem::SendUserRejectRequestToSendDataMessage() not implemented\n");
}

// send M2-5 as user
void Modem::SendUserDataMessageACK() {
    Serial.print("Modem::SendUserDataMessageACK() not implemented\n");
    // TODO: implement this
}

// send M2-6 as user
void Modem::SendUserDataMessageNACK() {
    // Serial.print("Modem::SendUserDataMessageNACK() not implemented\n");
}

// send M3-1 as user
void Modem::SendUserHeartBeat() {
    // Serial.print("Modem::SendUserHeartBeat() not implemented\n");
}
