#ifndef CONNECTION_H
#define CONNECTION_H

// include statements //

#include <string>         // std::string

// structs //

// class //

// containter class for connection ID and source ID,
// destination ID is not needed since it is this device
class Connection {
public:
    // constructors
    Connection(std::string connectionID, std::string sourceID);

    // destructor
    virtual ~Connection();

    // member functions
    std::string getConnectionID; // ID of this connection
    std::string getSourceID;     // ID of the other party in the connection

protected:

private:
    // data members
    std::string connectionID;
    std::string sourceID;

};

#endif // CONNECTION_H
