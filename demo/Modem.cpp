// include statements //

#include "Arduino.h"      // String
#include "Modem.hpp"

// class //

// constructors
Modem::Modem(PS2Keyboard& kb, SerLCD& display): fpga(nullptr), keyboard(kb), display(display) { }

// destructor
Modem::~Modem() { }

// member functions //

void Modem::setupFPGA() {
    if (fpga) return;
    fpga = new FPGA();
}

void Modem::setupKeyboard(PS2Keyboard& kb) {
    // if (keyboard) return;
    // keyboard = new Keyboard(display, kb);
}

String* Modem::readFPGAInput() {
    // TODO: remove
    Serial.println("Modem::readFPGAInput()");
    delay(100);

    String* input = fpga->read();
    if (!input) return nullptr;

    return input;
}

void Modem::print(String text) {
    display.clear();
    display.print(text);
}

// modem member functions

String* Modem::readKeyboardInput() {


    if (!keyboard.available()) return nullptr;

    for(int x = 0; x < 50; x++) Serial.println();   // TODO: remove clear monitor
    Serial.println("keyboard input:");

    int size;
    char characters[MAX_STRING_SIZE];
    characters[0] = keyboard.read();  // will not be -1

    display.clear();

    Serial.print(characters[0]);    // TODO: remove
    display.print(characters[0]);

    for (size = 1; size < MAX_STRING_SIZE; size++) {

        if (!keyboard.available()) {
            size--;
            continue;
        }

        char input = keyboard.read();

        if (input == PS2_DELETE) {
            // make sure size doesn't become negative
            // if size > 1, reduce by 2 because size++
            // if size < 2. reduce to -1 so it's 0 after size++
            size = size > 1 ? size - 2 : -1;

            for(int x = 0; x < 50; x++) Serial.println();   // TODO: remove clear monitor
            display.clear();
            for (int j = 0; j <= size; j++) {
                Serial.print(characters[j]); // TODO: remove
                display.print(characters[j]);
            }
            continue;

        }

        characters[size] = input;

        Serial.print(characters[size]); // TODO: remove
        display.print(characters[size]);

        if (characters[size] == PS2_ENTER) break;
    }

    // convert to String object
    String* input = new String(); 
    for (int j = 0; j < size; j++) {
      *input += String(characters[j]);
    }

    // TODO: remove after debugging
    for(int x = 0; x < 50; x++) Serial.println();   // clear monitor
    Serial.print("keyboard input:  ");
    Serial.println(*input);

    return input;
}

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
