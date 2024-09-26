#ifndef HOUSEHOLD_H
#define HOUSEHOLD_H

#include <vector>
#include "person.h"
using namespace std;

class Household {
private:
    int houseNumber;
    vector<Person> familyMembers;

public:
    Household(int number = 0);

    // Methods
    void inputHousehold();
    void addPerson(const Person& person);
    void displayHousehold() const;
};

#endif
