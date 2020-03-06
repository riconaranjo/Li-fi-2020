// include statements //

#include "Modem.hpp"

// class //

// constructors
Modem::Modem(SerLCD& display): fpga(nullptr), keyboard(nullptr), display(display) { }

// destructor
Modem::~Modem() { }

// member functions //

void Modem::setupFPGA() {
    if (fpga) return;
    fpga = new FPGA();
}

void Modem::setupKeyboard(PS2Keyboard& kb) {
    if (keyboard) return;
    keyboard = new Keyboard(display, kb);
}

KeyboardInput* Modem::readKeyboardInput() {
    // TODO: remove
    Serial.println("Modem::readKeyboardInput()");
    delay(100);

    KeyboardInput* input = keyboard->read();
    if (!input) return nullptr;

    return input;
}

FPGAResponse* Modem::readFPGAInput() {
    // TODO: remove
    Serial.println("Modem::readFPGAInput()");
    delay(100);

    FPGAResponse* input = fpga->read();
    if (!input) return nullptr;

    return input;
}

void Modem::print(String text) {
    display.clear();
    display.print(text);
}

// modem member functions

// send M1-2 as modem
void Modem::sendModemAcceptRequestToConnect() {
    // Serial.print("Modem::SendModemAcceptRequestToConnect() not implemented\n");
}

// send M1-3 as modem
void Modem::sendModemRejectRequestToConnect() {
    // Serial.print("Modem::SendModemRejectRequestToConnect() not implemented\n");
}

// send M2-1 as modem
void Modem::sendModemRequestToSendDataMessage() {
    // Serial.print("Modem::SendModemRequestToSendDataMessage() not implemented\n");
}

// send M2-4 as modem
void Modem::sendModemDataMessage() {
    Serial.print("Modem::SendModemDataMessage() not implemented\n");
    // TODO: implement this
}

// send M3-2 as modem
void Modem::sendModemHeartBeat() {
    // Serial.print("Modem::SendModemHeartBeat() not implemented\n");
}

// user member functions //

// send M1-1 as user
void Modem::sendUserRequestToConnect() {
    // Serial.print("Modem::SendUserRequestToConnect() not implemented\n");
}

// send M2-2 as user
void Modem::sendUserAcceptRequestToSendDataMessage() {
    Serial.print("Modem::SendUserAcceptRequestToSendDataMessage() not implemented\n");
}

// send M2-3 as user
void Modem::sendUserRejectRequestToSendDataMessage() {
    // Serial.print("Modem::SendUserRejectRequestToSendDataMessage() not implemented\n");
}

// send M2-5 as user
void Modem::sendUserDataMessageACK() {
    Serial.print("Modem::SendUserDataMessageACK() not implemented\n");
    // TODO: implement this
}

// send M2-6 as user
void Modem::sendUserDataMessageNACK() {
    // Serial.print("Modem::SendUserDataMessageNACK() not implemented\n");
}

// send M3-1 as user
void Modem::sendUserHeartBeat() {
    // Serial.print("Modem::SendUserHeartBeat() not implemented\n");
    // omitted for demo
}
