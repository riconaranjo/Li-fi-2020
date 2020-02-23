#ifndef CONNECTION_H
#define CONNECTION_H

// include statements //

#include <string>         // std::string
#include "Arduino.h"
#include "Constants.cpp"

// structs //

// class //

// containter class for connection ID and source ID,
// destination ID is not needed since it is this device
class Connection {
public:
    // constructors
    Connection();
    Connection(String connectionID, String sourceID);

    // destructor
    ~Connection();

    // member functions
    String getConnectionID_a(); // ID of this connection
    String getSourceID_a();     // ID of the other party in the connection
    std::string getSourceID();
    std::string getConnectionID();

protected:

private:
    // data members
    char connectionID[MAX_STRING_SIZE];
    char sourceID[MAX_STRING_SIZE];

};

#endif // CONNECTION_H
