// include statements //

// #include <string>         // std::string TODO: replaced with arduino String
#include <vector>         // std::vector
#include "Keyboard.hpp"
#include "Constants.cpp"

// class //

// constructors
Keyboard::Keyboard() {
    // Serial.print("Keyboard::Keyboard() not implemented\n");
}

// destructor
Keyboard::~Keyboard() {
    // Serial.print("Keyboard::~Keyboard() not implemented\n");
}

// member functions
KeyboardInput* Keyboard::read() {
    // Serial.print("Keyboard::read() not implemented\n");

    if (!Serial.available()) return nullptr;

    int characters[MAX_STRING_SIZE];
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
