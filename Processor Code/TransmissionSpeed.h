#ifndef TRANSMISSIONSPEED_H
#define TRANSMISSIONSPEED_H

// include statements //

#include <vector>         // std::vector

// structs //

// class //

// entity class for data transmission speed
class TransmissionSpeed {
public:
    // constructors
    TransmissionSpeed();

    // destructor
    ~TransmissionSpeed();

    // member functions
    int getLatestSpeed();
    bool addLatestSpeed();
    std::vector<int> getAllSpeeds();

protected:

private:
    // data members
    std::vector<int> speed;

};

#endif // TRANSMISSIONSPEED_H
