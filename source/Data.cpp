// include statements //

#include <bitset>         // std::bitset
#include <vector>         // std::vector
#include <iostream>       // TODO: remove after testing
#include "Message.hpp"      // SourceID, DestinationID
#include "Data.hpp"

// class //

// constructors
Data::Data(DataHeader* header, BinaryData* data): header(header), data(data) {
    // Serial.Print("Data::Data() not implemented\n");
}

Data::Data(): header(nullptr), data(nullptr) {
    // Serial.Print("Data::Data() not implemented\n");
}

// destructor
Data::~Data() {
    // Serial.Print("Data::~Data() not implemented\n");
}

// member functions //

DataHeader& Data::getHeader() {
    return *header;
}

BinaryData& Data::getData() {
    return *data;
}
