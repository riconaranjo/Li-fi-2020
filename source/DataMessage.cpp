// include statements //

#include "DataMessage.hpp"
#include <bitset>         // std::bitset
#include <vector>         // std::vector
#include "Message.hpp"

// class //

// constructors
DataMessage::DataMessage(DataHeader* header, Data* data): Message(header->source, header->destination), header(header), data(data) { }

DataMessage::DataMessage(): Message(), header(new DataHeader()), data(new Data()) {
    this->setUpDataMessage();
}

// destructor
DataMessage::~DataMessage() {
    // Serial.print("DataMessage::~DataMessage() not implemented\n");
}

DataHeader& DataMessage::getHeader() {
    return *header;
}

Data& DataMessage::getData() {
    return *data;
}

String DataMessage::getDataString() {
    std::vector<char> characters = data->getData().data;
    String text = "";

    for(uint i = 0; i < characters.size(); i++) {
        text += String(characters[i]);
    }

    return text;
}

SourceID& DataMessage::getSourceID() {
    return sourceID;
}

DestinationID& DataMessage::getDestinationID() {
    return destinationID;
}

bool DataMessage::setUpDataMessage() {
    // TODO: actual values omitted for demo

    header->source.id.set(); // set all bits high
    header->destination.id.reset(); // set all bits low
    header->length.length.set(); // high
    header->fragment.fragment.reset(); // low
    header->MF.moreFragments.set(); // high
    header->security.security.reset(); // low
    header->headerCRC.headerCRC.set(); // high

    return false;
}
