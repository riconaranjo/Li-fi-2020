// include statements //

#include <bitset>         // std::bitset
#include <vector>         // std::vecto
#include <iostream>       // TODO: remove after testing
#include "DataFile.hpp"

// structs //

// class //

// constructors
DataFile::DataFile(std::vector<char>& data): data(data) {
    // Serial.print("DataFile::DataFile() not implemented\n");
    fragmentData(0);
}

// destructor
DataFile::~DataFile() {
    // Serial.print("DataFile::~DataFile() not implemented\n");
}

// n is number of fragments
bool DataFile::fragmentData(int n) {
    fragments = std::vector<Data>();
    // Serial.print("DataFile::fragmentData() not implemented\n");
    return false;
}
