#ifndef NEIGHBORHOOD_H
#define NEIGHBORHOOD_H

#include <vector>
#include "household.h"
using namespace std;

class Neighborhood {
private:
    vector<Household> households;

public:
    // Methods
    void inputNeighborhood();
    void displayNeighborhood() const;
};

#endif
