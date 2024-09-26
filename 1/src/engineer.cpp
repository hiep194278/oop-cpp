#include "engineer.h"
#include <iostream>

// Constructor
Engineer::Engineer(const std::string& name, const std::string& address, 
                   int age, Gender gender, const std::string& branch)
    : Officer(name, address, age, gender), branch(branch) {}

// Getter for level
std::string Engineer::getBranch() const {
    return branch;
}

// Setter for branch
void Engineer::setBranch(const std::string& branch) {
    this->branch = branch;
}

void Engineer::displayInfo() {
    Officer::displayInfo();
    std::cout << "Engineer - ";
    std::cout << "Branch: " << getBranch() << std::endl;
}