// include statements //

#include <iostream>       // TODO: remove after testing
#include "DataMessage.hpp"
#include "Message.hpp"

// class //

// constructor
DataMessage::DataMessage(DataHeader* header, Data* data): Message(header->source, header->destination), header(header), data(data) {
    // Serial.Print("DataMessage::Data(...) not implemented\n");
}

DataMessage::DataMessage(): Message(), header(new DataHeader()), data(new Data()) {
    // Serial.Print("DataMessage::Data() not implemented\n");
}

// destructor
DataMessage::~DataMessage() {
    // Serial.Print("DataMessage::~DataMessage() not implemented\n");
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
