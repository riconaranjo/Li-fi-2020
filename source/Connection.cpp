// include statements //

// #include <string>         // std::string TODO: replaced with arduino String
// #include <iostream>       // TODO: remove after testing
#include "Connection.hpp"

// class //

// constructors
Connection::Connection() { }

Connection::Connection(String connectionID, String sourceID) {
    connectionID.toCharArray(this->connectionID, connectionID.length());
    sourceID.toCharArray(this->sourceID, sourceID.length());

    // Serial.print("Connection::Connection() not implemented\n");
}

// destructor
Connection::~Connection() {
    // Serial.print("Connection::~Connection() not implemented\n");
}

// member functions //

// ID of this connection
String Connection::getConnectionID_a() {
    // Serial.print("Connection::getConnectionID() not implemented\n");
    return String(connectionID);
}

// ID of the other party in the connection
String Connection::getSourceID_a() {
    // Serial.print("Connection::getSourceID() not implemented\n");
    return String(sourceID);
}

// ID of this connection
std::string Connection::getConnectionID() {
    // Serial.print("Connection::getConnectionID() not implemented\n");
    return "";
}

// ID of the other party in the connection
std::string Connection::getSourceID() {
    // Serial.print("Connection::getSourceID() not implemented\n");
    return "";
}