#ifndef MANAGER_H
#define MANAGER_H

#include <vector>
#include <memory>  // For smart pointers
#include <string>
#include "officer.h"

class Manager {
private:
    std::vector<std::unique_ptr<Officer>> officers;  // Use smart pointers to manage Officer objects

public:
    // Method to add new officers
    void addOfficer(std::unique_ptr<Officer> officer);

    // Method to search for an officer by name
    Officer* searchByName(const std::string& name) const;

    // Method to display the list of all officers
    void displayOfficers() const;

    // Method to exit the program
    void exitProgram();
};

#endif // MANAGER_H
