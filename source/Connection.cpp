// include statements //

#include <string>         // std::string
#include <iostream>       // TODO: remove after testing
#include "Connection.hpp"

// class //

// constructors
Connection::Connection(std::string connectionID, std::string sourceID) {
    // Serial.Print("Connection::Connection() not implemented\n");
}

// destructor
Connection::~Connection() {
    // Serial.Print("Connection::~Connection() not implemented\n");
}

// member functions //

// ID of this connection
std::string Connection::getConnectionID() {
    // Serial.Print("Connection::getConnectionID() not implemented\n");
    return "";
}

// ID of the other party in the connection
std::string Connection::getSourceID() {
    // Serial.Print("Connection::getSourceID() not implemented\n");
    return "";
}

