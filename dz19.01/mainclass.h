#include <iostream>

using namespace std;


class Transport {
public:
    Transport(int capacity) : capacity(capacity) {}

    virtual void calculateTimeAndCost(int passengers, int cargo) const = 0;

protected:
    int capacity; 
};