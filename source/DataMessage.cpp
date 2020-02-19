// include statements //

#include <iostream>       // TODO: remove after testing
#include "DataMessage.h"
#include "Message.h"

// class //

// constructor
DataMessage::DataMessage(DataHeader* header, Data* data): Message(header->source, header->destination), header(header), data(data) {
    std::cout << "DataMessage::Data(...) not implemented\n";
}

DataMessage::DataMessage(): Message(), header(new DataHeader()), data(new Data()) {
    std::cout << "DataMessage::Data() not implemented\n";
}

// destructor
DataMessage::~DataMessage() {
    std::cout << "DataMessage::~DataMessage() not implemented\n";
}

DataHeader& DataMessage::getHeader() {
    return *header;
}

Data& DataMessage::getData() {
    return *data;
}

SourceID& DataMessage::getSourceID() {
    return sourceID;
}

DestinationID& DataMessage::getDestinationID() {
    return destinationID;
}
