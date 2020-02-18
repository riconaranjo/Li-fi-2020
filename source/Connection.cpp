// include statements //

#include <string>         // std::string
#include <iostream>       // TODO: remove after testing
#include "Connection.h"

// class //

// constructors
Connection::Connection(std::string connectionID, std::string sourceID) {
    std::cout << "Connection::Connection() not implemented\n";
}

// destructor
Connection::~Connection() {
    std::cout << "Connection::~Connection() not implemented\n";
}

// member functions //

// ID of this connection
std::string Connection::getConnectionID() {
    std::cout << "Connection::getConnectionID() not implemented\n";
    return "";
}

// ID of the other party in the connection
std::string Connection::getSourceID() {
    std::cout << "Connection::getSourceID() not implemented\n";
    return "";
}

