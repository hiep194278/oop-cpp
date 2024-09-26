#include "officer.h"
#include <iostream>

// Constructor
Officer::Officer(const std::string& name, const std::string& address, 
                 int age, Gender gender)
    : name(name), address(address), age(age), gender(gender) {}

// Getters
std::string Officer::getName() const {
    return name;
}

std::string Officer::getAddress() const {
    return address;
}

int Officer::getAge() const {
    return age;
}

Gender Officer::getGender() const {
    return gender;
}

// Setters
void Officer::setName(const std::string& name) {
    this->name = name;
}

void Officer::setAddress(const std::string& address) {
    this->address = address;
}
void Officer::setAge(int age) {
    this->age = age;
}

void Officer::setGender(Gender gender) {
    this->gender = gender;
}

void Officer::displayInfo() {
    std::cout << "Name: " << getName() 
                << ", Age: " << getAge()
                << ", Gender: " << (getGender() == 
                Gender::Male ? "Male" : getGender() == 
                Gender::Female ? "Female" : "Other")
                << ", Address: " << getAddress() << std::endl;
}

