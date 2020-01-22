#ifndef DATAMESSAGE_H
#define DATAMESSAGE_H

// include statements //

#include "Message.h"
#include "Data.h"

// structs //

// class //

// class for data messages:
// M2-4
class DataMessage: public Message {
public:
    // constructor
    DataMessage(DataHeader& header, Data& data);

    // destructor
    ~DataMessage();

    DataHeader& getHeader();
    Data& getData();

protected:

private:
    // data members
    DataHeader& header;
    Data& data;

};

#endif // DATAMESSAGE_H
