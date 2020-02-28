#ifndef DATAMESSAGE_H
#define DATAMESSAGE_H

// include statements //

#include "Message.hpp"
#include "Data.hpp"

// structs //

// class //

// class for data messages:
// M2-4
class DataMessage: public Message {
public:
    // constructor
    DataMessage(DataHeader* header, Data* data);
    DataMessage();

    // destructor
    ~DataMessage();

    DataHeader& getHeader();
    Data& getData();
    String getDataString();

    SourceID& getSourceID();
    DestinationID& getDestinationID();

protected:

private:
    // data members
    DataHeader* header;
    Data* data;

};

#endif // DATAMESSAGE_H
