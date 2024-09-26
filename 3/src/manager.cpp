#include "manager.h"
#include <iostream>

// Method to add a new officer using smart pointers
void Manager::addCandidate(std::unique_ptr<Candidate> candidate) {
    candidates.push_back(std::move(candidate));  // Move the smart pointer
                                             // to the vector cause
                                             // std::unique_ptr is 
                                             // non-copyable
}

// Method to search for an officer by name
Candidate* Manager::searchById(const std::string& id) const {
    for (const auto& candidate : candidates) {
        if (candidate->getId() == id) {
            return candidate.get();  // Return the raw pointer managed by 
                                   // std::unique_ptr
        }
    }
    return nullptr;
}

// Method to display the list of officers
void Manager::displayCandidates() const {
    if (candidates.empty()) {
        std::cout << "No officers found.\n";
        return;
    }

    for (const auto& candidate : candidates) {
        candidate->displayInfo();
        std::cout << std::endl;
    }
}

// Method to exit the program
void Manager::exitProgram() {
    std::cout << "Exiting program...\n";
    // No need to explicitly delete officers
    // smart pointers handle it automatically
}
