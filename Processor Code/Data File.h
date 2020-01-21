#ifndef DATAFILE_H
#define DATAFILE_H

// include statements //

#include <bitset>         // std::bitset
#include <vector>         // std::vector
#include "Data.h"

// structs //

// class //

// container class for actual data fragments to be transmitted or received
class DataFile {
public:
    // constructors
    DataFile(std::vector<char> data);

    // destructor
    virtual ~DataFile();

protected:

private:
    // data members
    std::vector<char> data;
    Data fragments[];
};

#endif // DATAFILE_H
