// include statements //

#include <iostream>       // TODO: remove after testing
#include <vector>         // std::vector
#include <ctime>          // std::time
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::milliseconds
#include "Controller.h"
#include "Keyboard.h"
#include "FPGA.h"

// class //

// constructor
void Controller::Controller(): {
    modem = Modem();
    isModem = false;
    inCharacterTransmissionMode = false
    inDataTransmissionMode = false;
}

// destructor
void Controller::~Controller() {
}

void Controller::LaunchModem() {
    KeyboardInput* last_input = nullptr;
    while (true) {
        // check for fpga input for general messages
        modem.readFPGAInput(); // TODO: do something with this

        // error checking
        if (inCharacterTransmissionMode && inDataTransmissionMode) {
            throw "cannot not be in both character and data transmission modes at the same time!"
        }

        if (inCharacterTransmissionMode) {
            // check for new keyboard input
            KeyboardInput* new_input = modem.readKeyboardInput();
            if (!new_input) continue; // if no new input, skip
            last_input = new_input;
            CharacterTransmissionMode();
        } else if (inDataTransmissionMode) {
            DataTransmissionMode();
        }
    } // end while
}


// UC-5: character transmission mode logic
void Controller::CharacterTransmissionMode() {
    // display keyboard input on 7-segment display
    modem.sevenSegmentDisplay.write(last_input);
    
    // send M2-1 request to send data
    modem.SendModemRequestToSendDataMessage();

    // wait for response: M2-2 or M2-3
    // if M2-3: retransmit after 0.1 sec (up to 25 times)
    // if M2-2: transmit data message M2-4
    bool data_not_sent = true;
    int count = 0;
    while(data_not_sent) {
        if (count >= 25) break;
        FPGAResponse response = modem.readFPGAInput();

        // if no message or , try again
        if (response.type == MessageType.NONE) {
            count++;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        if (response.type == MessageType.M2_3) {
            count++;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        } else if (response.type == MessageType.M2_2) {
            modem.SendModemDataMessage(); // send M2-4
            data_not_sent = false;

            // TODO...
            // wait for response: M2-5 or M2-6
            while(no_response) {
                if (count >= 25) break;
                FPGAResponse response = modem.readFPGAInput();

                // if no message or , try again
                if (response.type == MessageType.NONE) {
                    count++;
                    std::this_thread::sleep_for(std::chrono::milliseconds(100));
                } else if (response.type == MessageType.M2_2) {
                    modem.SendModemDataMessage(); // send M2-4
                    data_not_sent = false;
                }
            }
        }
    }

    // if M2-6: retransmit data message M2-4
    // if M2-5: read keyboard again...repeat
}

// UC-6: data transmission mode logic
void Controller::DataTransmissionMode() {
    // loop: read keyboard
    // display keyboard input on 7-segment display
    // send M2-1 request to send data
    // wait for response: M2-2 or M2-3
    // if M2-3: retransmit after 0.1 sec (up to 25 times)
    // if M2-2: transmit data message M2-4
    // wait for response: M2-5 or M2-6
    // if M2-6: retransmit data message M2-4
    // if M2-5: read keyboard again...repeat
}