// include statements //

#include <bitset>         // std::bitset
#include <vector>         // std::vector
#include <iostream>       // todo: remove after testing
#include "Message.h"      // SourceID, DestinationID
#include "Data.h"

// class //

// constructors
Data::Data(DataHeader& header, BinaryData& data): header(header), data(data) {
    std::cout << "Data::Data() not implemented\n";
}

// destructor
Data::~Data() {
    std::cout << "Data::~Data() not implemented\n";
}

// member functions //

DataHeader& Data::getHeader() {
    return header;
}

BinaryData& Data::getData() {
    return data;
}
