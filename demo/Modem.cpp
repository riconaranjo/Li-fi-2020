// include statements //

#include "Arduino.h"      // String
#include "Modem.hpp"

// class //

// constructors
Modem::Modem(PS2Keyboard& kb, SerLCD& display): keyboard(kb), display(display) { }

// destructor
Modem::~Modem() { }

// member functions //

String* Modem::readFPGAInput() {
    // TODO: remove
    Serial.println("Modem::readFPGAInput()");
    delay(10);

    if (!Serial3.available()) return nullptr;

    for(int x = 0; x < 50; x++) Serial.println();   // TODO: remove clear monitor
    Serial.println("FPGA input:");

    int size;
    char characters[MAX_STRING_SIZE];
    characters[0] = Serial3.read();  // will not be -1

    // display.clear();

    Serial.print(characters[0]);    // TODO: remove
    // display.print(characters[0]);

    for (size = 1; size < MAX_STRING_SIZE; size++) {

        if (!Serial3.available()) {
            size--;
            continue;
        }

        char input = Serial3.read();
        characters[size] = input;

        Serial.print(characters[size]); // TODO: remove
        // display.print(characters[size]);
    }

    // convert to String object
    String* input = new String(); 
    for (int j = 0; j < size; j++) {
      *input += String(characters[j]);
    }    

    // TODO: remove after debugging
    for(int x = 0; x < 50; x++) Serial.println();   // clear monitor
    Serial.print("FPGA input:  ");
    Serial.println(*input);

    return input;
}

void Modem::print(String text) {
    display.clear();
    display.print(text);
}

void Modem::print(String* text) {
    display.clear();
    display.print(*text);
}


String* Modem::readKeyboardInput() {

    if (!keyboard.available()) return nullptr;

    for(int x = 0; x < 50; x++) Serial.println();   // TODO: remove clear monitor
    Serial.println("keyboard input:");

    int size;
    char characters[MAX_STRING_SIZE+1];
    characters[0] = keyboard.read();  // will not be -1

    display.clear();

    Serial.print(characters[0]);    // TODO: remove
    display.print(characters[0]);

    for (size = 1; size < MAX_STRING_SIZE+1; size++) {

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

// user member functions //

// send M1-1 as user -> omitted for demo
void Modem::sendUserRequestToConnect() {
    // Serial.print("Modem::SendUserRequestToConnect() not implemented\n");
}

// send M2-2 as user
void Modem::sendUserAcceptRequestToSendDataMessage() {
    Serial.print("Modem::SendUserAcceptRequestToSendDataMessage()\n");
    delay(10);

    // TODO: convert to char array
    // unsigned char request = 0xFFFFCCDDFFFFCCDDFFFFCCDDFFFFCCDDFFFFCCDDFFFFCCDDFFFFCCDDFFFFCCDD;
    unsigned char request = 2;

    Serial3.print(request);
}

// send M2-3 as user -> omitted for demo
void Modem::sendUserRejectRequestToSendDataMessage() {
    // Serial.print("Modem::SendUserRejectRequestToSendDataMessage() not implemented\n");
}

// send M3-1 as user -> omitted
void Modem::sendUserHeartBeat() {
    // Serial.print("Modem::SendUserHeartBeat() not implemented\n");
    // omitted for demo
}

// modem member functions //

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
    Serial.print("Modem::SendModemRequestToSendDataMessage()\n");
    delay(10);

    // TODO: convert to char array
    // unsigned char request = 0xAAAACCDDAAAACCDDAAAACCDDAAAACCDDAAAACCDDAAAACCDDAAAACCDDAAAACCDD;
    unsigned char request = 1;

    Serial3.print(request);
}

// send M2-4 as modem
void Modem::sendModemDataMessage(String* message) {
    Serial.println("Modem::SendModemDataMessage()");
    Serial.print("sending: ");
    Serial.print(*message);
    delay(10);

    Serial3.print(*message);
    delay(10);
}

// send M3-2 as modem -> omitted
void Modem::sendModemHeartBeat() {
    // Serial.print("Modem::SendModemHeartBeat() not implemented\n");
}
