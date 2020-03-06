// include statements //

#include "Keyboard.hpp"
#include "Constants.cpp"

// class //

// constructors
Keyboard::Keyboard(SerLCD& lcd, PS2Keyboard& kb): display(lcd), keyboard(kb) { }

// destructor
Keyboard::~Keyboard() { }

// member functions //

KeyboardInput* Keyboard::read() {

    Serial.println("reading keyboard?");

    if (!keyboard.available()) return nullptr;

    for(int x = 0; x < 50; x++) Serial.println();   // TODO: remove clear monitor

    int size;
    char characters[MAX_STRING_SIZE];
    characters[0] = keyboard.read();  // will not be -1

    display.clear();

    Serial.print(characters[0]);    // TODO: remove
    display.print(characters[0]);

    for (size = 1; true && size < MAX_STRING_SIZE; size++) {

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
        } else {
            characters[size] = input;
        }

        // print current string to display
        for(int x = 0; x < 50; x++) Serial.println();   // TODO: remove clear monitor

        display.clear();
        for (int j = 0; j <= size; j++) {
            Serial.print(characters[j]); // TODO: remove
            display.print(characters[j]);
        }

        if (characters[size] == PS2_ENTER) break;
    }

    String input = ""; 
    for (int j = 0; j < size; j++) {
      input += String(characters[j]);
    }

    // TODO: remove after debugging
    for(int x = 0; x < 50; x++) Serial.println();   // clear monitor
    Serial.print("input:  ");
    Serial.println(input);

    display.clear();
    display.print(input);

    KeyboardInput* keyboardInput = new KeyboardInput();
    keyboardInput->text = input;

    // delay(1000);
    // display.clear();
    return keyboardInput;
}
