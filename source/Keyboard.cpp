// include statements //

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

// member functions //

KeyboardInput* Keyboard::read() {

    if (!Serial.available()) return nullptr;

    char characters[MAX_STRING_SIZE];
    int length = 0;
    characters[0] = Serial.read();  // will not be -1 since available

    for (length = 1; Serial.available() && length < MAX_STRING_SIZE ; length++) {
        characters[length] = Serial.read();
        if (characters[length] == 10) break;
    }

    String input = "";
    // exclude last ASCII character `10` 
    for (int j = 0; j < length; j++) {
      input += String(characters[j]);
    }

    Serial.println(input);  // TODO: remove after debugging

    display.clear();
    display.print(input);

    KeyboardInput* keyboard = new KeyboardInput();
    keyboard->text = input;

    delay(2000);

    display.clear();
    return keyboard;
}
