// include statements //

#include <iostream>       // todo: remove after testing
#include "DataMessage.h"

// class //

// constructor
DataMessage::DataMessage(DataHeader header, Data data): header(header), data(data) {
    std::cout << "DataMessage::Data() not implemented\n";
}

// destructor
DataMessage::~DataMessage() {
    std::cout << "DataMessage::~DataMessage() not implemented\n";
}

DataHeader& DataMessage::getHeader() {
    return header;
}

Data& DataMessage::getData() {
    return data;
}

SourceID& DataMessage::getSourceID() {
    return sourceID;
}

DestinationID& DataMessage::getDestinationID() {
    return destinationID;
}