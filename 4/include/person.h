#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <unordered_set>
using namespace std;

class Person {
private:
    string fullName;
    int age;
    string occupation;
    string idCardNumber;
    
    // Static unordered_set to track unique ID card numbers
    static unordered_set<string> usedIdCards;

public:
    // Constructor
    Person(const string& name = "", int age = 0, const string& occupation = "", const string& idCard = "");
    
    // Getters
    string getFullName() const;
    int getAge() const;
    string getOccupation() const;
    string getIdCardNumber() const;

    // Methods
    void inputPerson();
    void displayPerson() const;

    // Static method to check if the ID is unique
    static bool isUniqueId(const string& idCard);
};

#endif
