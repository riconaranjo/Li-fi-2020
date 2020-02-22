#ifndef CONNECTION_H
#define CONNECTION_H

// include statements //

// #include <string>         // std::string TODO replaced with arduino String

// structs //

// class //

// containter class for connection ID and source ID,
// destination ID is not needed since it is this device
class Connection {
public:
    // constructors
    Connection(String connectionID, String sourceID);

    // destructor
    ~Connection();

    // member functions
    String getConnectionID(); // ID of this connection
    String getSourceID();     // ID of the other party in the connection

protected:

private:
    // data members
    String connectionID;
    String sourceID;

};

#endif // CONNECTION_H
