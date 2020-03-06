#ifndef DATA_H
#define DATA_H

// include statements //

#include <bitset>         // std::bitset
#include <vector>         // std::vector
#include "Message.hpp"      // SourceID, DestinationID

// structs //

struct DataLength {
    std::bitset<12> length;

    DataLength(): length(std::bitset<12>()) { }
};

struct FragmentOffset {
    std::bitset<12> fragment;

    FragmentOffset(): fragment(std::bitset<12>()) { }
};

struct MoreFragments {
    std::bitset<1> moreFragments;

    MoreFragments(): moreFragments(std::bitset<1>()) { }
};

struct Security {
    std::bitset<1> security;

    Security(): security(std::bitset<1>()) { }
};

struct HeaderCRC {
    std::bitset<1> headerCRC;

    HeaderCRC(): headerCRC(std::bitset<1>()) { }
};

struct BinaryData {
    std::vector<char> data; // max size is 2^12 bits

    BinaryData(): data(std::vector<char>()) { }
};

struct DataHeader {
    SourceID source;
    DestinationID destination;
    DataLength length;
    FragmentOffset fragment;
    MoreFragments MF;
    Security security;
    HeaderCRC headerCRC; // set to 0s for transmission
};

// class //

// container class for actual data fragments to be transmitted or received
class Data {
public:
    // constructors
    Data(DataHeader* header, BinaryData* data);
    Data();

    // destructor
    ~Data();

    // member functions
    DataHeader& getHeader();
    BinaryData& getData();

protected:

private:
    // data members
    DataHeader* header;
    BinaryData* data;
};

#endif // DATA_H
