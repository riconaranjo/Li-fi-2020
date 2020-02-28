// include statements //

#include "DataMessage.hpp"
#include "Message.hpp"

// class //

// constructor
DataMessage::DataMessage(DataHeader* header, Data* data): Message(header->source, header->destination), header(header), data(data) {
    // Serial.print("DataMessage::Data(...) not implemented\n");
}

DataMessage::DataMessage(): Message(), header(new DataHeader()), data(new Data()) {
    // Serial.print("DataMessage::Data() not implemented\n");
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
