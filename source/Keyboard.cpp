// include statements //

// #include <string>         // std::string TODO: replaced with arduino String
#include <iostream>       // TODO: remove after testing
#include <vector>         // std::vector
#include "CharacterTransmissionControl.hpp"   // CO-1
#include "Keyboard.hpp"
#include "SpeedTransmissionControl.hpp"       // CO-2

// class //

// constructors
Keyboard::Keyboard() {
    // Serial.Print("Keyboard::Keyboard() not implemented\n");
}

// destructor
Keyboard::~Keyboard() {
    // Serial.Print("Keyboard::~Keyboard() not implemented\n");
}

// member functions
KeyboardInput* Keyboard::read() {
    // Serial.Print("Keyboard::read() not implemented\n");

    if (!Serial.available()) return nullptr;

    int characters[25];
    int length = 0;
    
    characters[0] = Serial.read();  // will not be -1

    for (length = 1; Serial.available(); length++) {
        characters[length] = Serial.read();
        if (characters[length] == 10) break;
    }

    String input = "";
    for (int j = 0; j <= length; j++) {
      input += String(characters[j], DEC);
      input += " ";
    }

    // TODO: remove after debugging
    Serial.print(input);

    // add timestamp to each keypress
    std::time_t current_time = std::time(nullptr);

    KeyboardInput* keyboard = new KeyboardInput();
    keyboard->text = input;
    keyboard->time = current_time;

    return keyboard;
}

// member functions
// UC-1.1 creates UC-3
bool Keyboard::initiateConnectionRequest() {
    // Serial.Print("Keyboard::initiateConnectionRequest() not implemented\n");

    return false;
}

// UC-1.2 creates UC-5
bool Keyboard::initiateCharacterTransmission() {
    // Serial.Print("Keyboard::initiateCharacterTransmission() not implemented\n");
    characterControl = CharacterTransmissionControl();

    return false;
}

// UC-2.2 creates UC-6
bool Keyboard::initiateSpeedTransmission() {
    // Serial.Print("Keyboard::initiateSpeedTransmission() not implemented\n");
    speedControl = SpeedTransmissionControl();

    return false;
}
