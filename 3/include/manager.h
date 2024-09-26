#ifndef MANAGER_H
#define MANAGER_H

#include <vector>
#include <memory>  // For smart pointers
#include <string>
#include "candidate.h"

class Manager {
private:
    std::vector<std::unique_ptr<Candidate>> candidates;  // Use smart pointers to manage Candidate objects

public:
    // Method to add new candidates
    void addCandidate(std::unique_ptr<Candidate> candidate);

    // Method to search for a candidate by id
    Candidate* searchById(const std::string& id) const;

    // Method to display the list of all candidates
    void displayCandidates() const;

    // Method to exit the program
    void exitProgram();
};

#endif // MANAGER_H
