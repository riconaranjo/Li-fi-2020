#ifndef DATAFILE_H
#define DATAFILE_H

// include statements //

#include <bitset>         // std::bitset
#include <vector>         // std::vector
#include "Data.hpp"

// structs //

// class //

// container class for actual data fragments to be transmitted or received
class DataFile {
public:
    // constructors
    DataFile(std::vector<char>& data);

    // destructor
    ~DataFile();

protected:

private:
    bool fragmentData(int n);

    // data members
    std::vector<char>& data;
    std::vector<Data> fragments;
};

#endif // DATAFILE_H
