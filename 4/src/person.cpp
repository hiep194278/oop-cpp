#include "person.h"
#include <iostream>

// Initialize the static unordered_set
unordered_set<string> Person::usedIdCards;

// Constructor using const references
Person::Person(const string& name, int age, const string& occupation, const string& idCard)
    : fullName(name), age(age), occupation(occupation), idCardNumber(idCard) {}

// Getters
string Person::getFullName() const { 
    return fullName; 
}

int Person::getAge() const { 
    return age; 
}

string Person::getOccupation() const { 
    return occupation; 
}

string Person::getIdCardNumber() const { 
    return idCardNumber; 
}

// Static method to check if the ID card is unique
bool Person::isUniqueId(const string& idCard) {
    return usedIdCards.find(idCard) == usedIdCards.end();
}

// Input method for Person class
void Person::inputPerson() {
    cout << "Enter full name: ";
    getline(cin, fullName);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter occupation: ";
    getline(cin, occupation);

    // Loop until a unique ID card number is entered
    while (true) {
        cout << "Enter ID card number: ";
        getline(cin, idCardNumber);

        if (isUniqueId(idCardNumber)) {
            // Add ID card number to the set if it's unique
            usedIdCards.insert(idCardNumber);
            break;
        } else {
            cout << "ID card number already exists. Please enter a unique ID card number.\n";
        }
    }
}

// Display method for Person class
void Person::displayPerson() const {
    cout << "Full Name: " << fullName << ", Age: " << age
         << ", Occupation: " << occupation << ", ID Card Number: " << idCardNumber << endl;
}
