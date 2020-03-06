// include statements //

#include "Arduino.h"      // String
#include "FPGA.hpp"

// class //

// constructors
FPGA::FPGA() { }

// destructor
FPGA::~FPGA() { }

// member functions //

bool FPGA::write(Message* message) {
    Serial.print("FPGA::write() not implemented\n");
    delay(100);
    // TODO: figure out how to actually write data to FPGA
    return false;
}


// 33 Bytes
// [0..31] - characters
// [32]    - sequence number
// last 7 bits are all zeroes
String* FPGA::read() {

    if (!Serial3.available()) return nullptr;

    for(int x = 0; x < 50; x++) Serial.println();   // TODO: remove clear monitor
    Serial.println("FPGA input:");

    char characters[MAX_STRING_SIZE];
    characters[0] = Serial3.read();  // will not be -1

    display.clear();

    Serial.print(characters[0]);    // TODO: remove
    display.print(characters[0]);

    for (size = 1; size < MAX_STRING_SIZE; size++) {

        if (!Serial3.available()) {
            size--;
            continue;
        }

        char input = Serial3.read();
        characters[size] = input;

        Serial.print(characters[size]); // TODO: remove
        display.print(characters[size]);
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
