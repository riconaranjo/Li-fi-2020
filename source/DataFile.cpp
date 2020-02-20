// include statements //

#include <bitset>         // std::bitset
#include <vector>         // std::vecto
#include <iostream>       // TODO: remove after testing
#include "DataFile.hpp"

// structs //

// class //

// constructors
DataFile::DataFile(std::vector<char>& data): data(data) {
    std::cout << "DataFile::DataFile() not implemented\n";
    fragmentData(0);
}

// destructor
DataFile::~DataFile() {
    std::cout << "DataFile::~DataFile() not implemented\n";
}

// n is number of fragments
bool DataFile::fragmentData(int n) {
    fragments = std::vector<Data>();
    std::cout << "DataFile::fragmentData() not implemented\n";
    return false;
}
