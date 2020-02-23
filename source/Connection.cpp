// include statements //

// #include <string>         // std::string TODO: replaced with arduino String
// #include <iostream>       // TODO: remove after testing
#include "Connection.hpp"

// class //

// constructors
Connection::Connection(String connectionID, String sourceID) {
    // Serial.print("Connection::Connection() not implemented\n");
}

// destructor
Connection::~Connection() {
    // Serial.print("Connection::~Connection() not implemented\n");
}

// member functions //

// ID of this connection
String Connection::getConnectionID() {
    // Serial.print("Connection::getConnectionID() not implemented\n");
    return "";
}

// ID of the other party in the connection
String Connection::getSourceID() {
    // Serial.print("Connection::getSourceID() not implemented\n");
    return "";
}

