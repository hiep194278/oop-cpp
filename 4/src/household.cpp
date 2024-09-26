#include "household.h"
#include <iostream>

Household::Household(int number) : houseNumber(number) {}

void Household::addPerson(const Person& person) {
    familyMembers.push_back(person);
}

void Household::inputHousehold() {
    int numMembers;
    cout << "Enter house number: ";
    cin >> houseNumber;
    cin.ignore();
    cout << "Enter number of family members: ";
    cin >> numMembers;
    cin.ignore();

    for (int i = 0; i < numMembers; ++i) {
        cout << "Enter information for family member " << i + 1 << ":\n";
        Person person;
        person.inputPerson();
        addPerson(person);
    }
}

void Household::displayHousehold() const {
    cout << "House Number: " << houseNumber << endl;
    cout << "Family Members:\n";
    for (size_t i = 0; i < familyMembers.size(); ++i) {
        cout << "Member " << i + 1 << ": ";
        familyMembers[i].displayPerson();
    }
}
