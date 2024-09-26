#include "manager.h"
#include <iostream>

// Method to add a new officer using smart pointers
void Manager::addOfficer(std::unique_ptr<Officer> officer) {
    officers.push_back(std::move(officer));  // Move the smart pointer
                                             // to the vector cause
                                             // std::unique_ptr is 
                                             // non-copyable
}

// Method to search for an officer by name
Officer* Manager::searchByName(const std::string& name) const {
    for (const auto& officer : officers) {
        if (officer->getName() == name) {
            return officer.get();  // Return the raw pointer managed by 
                                   // std::unique_ptr
        }
    }
    return nullptr;
}

// Method to display the list of officers
void Manager::displayOfficers() const {
    if (officers.empty()) {
        std::cout << "No officers found.\n";
        return;
    }

    for (const auto& officer : officers) {
        officer->displayInfo();
        std::cout << std::endl;
    }
}

// Method to exit the program
void Manager::exitProgram() {
    std::cout << "Exiting program...\n";
    // No need to explicitly delete officers
    // smart pointers handle it automatically
}
