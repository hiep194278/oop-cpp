#include <iostream>
#include "manager.h"
#include "officer.h"
#include "engineer.h"
#include "staff.h"
#include "worker.h"
#include <memory>  // For std::unique_ptr

#define NUM_CHOICE 4

// Function to display menu options
void displayMenu() {
    std::cout << "\n---------------------------------\n";
    std::cout << "Staff Management System\n";
    std::cout << "1. Add new officer\n";
    std::cout << "2. Search by name\n";
    std::cout << "3. Display officers\n";
    std::cout << "4. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    Manager manager;
    int choice;
    std::string name, address, task, branch;
    int age, officerType, level;
    Gender gender;

    do {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore();  // Clear newline character from input buffer

        switch (choice) {
            case 1: {
                std::cout << "Enter officer type:";
                std::cout << "(1 - Worker, 2 - Engineer, 3 - Staff): ";
                std::cin >> officerType;
                std::cin.ignore();  // Clear newline character

                std::cout << "Enter name: ";
                std::getline(std::cin, name);
                std::cout << "Enter address: ";
                std::getline(std::cin, address);
                std::cout << "Enter age: ";
                std::cin >> age;
                std::cin.ignore();  // Clear newline

                std::cout << "Enter gender (0 - Male, 1 - Female, 2 - Other): ";
                int genderInput;
                std::cin >> genderInput;
                gender = static_cast<Gender>(genderInput);
                std::cin.ignore();  // Clear newline

                if (officerType == 1) {
                    // Adding a Worker
                    std::cout << "Enter level: ";
                    std::cin >> level;
                    std::cin.ignore();
                    manager.addOfficer(std::make_unique<Worker>(name, address, age, gender, level));
                } else if (officerType == 2) {
                    // Adding an Engineer
                    std::cout << "Enter branch: ";
                    std::cin.ignore();
                    std::getline(std::cin, branch);
                    manager.addOfficer(std::make_unique<Engineer>(name, address, age, gender, branch));
                } else if (officerType == 3) {
                    // Adding a Staff member
                    std::cout << "Enter task: ";
                    std::cin.ignore();
                    std::getline(std::cin, task);
                    manager.addOfficer(std::make_unique<Staff>(name, address, age, gender, task));
                }
                break;
            }
            case 2: {
                std::cout << "Enter the name to search: ";
                std::getline(std::cin, name);

                Officer* foundOfficer = manager.searchByName(name);
                if (foundOfficer) {
                    std::cout << "Officer found:" << std::endl;
                    foundOfficer->displayInfo();
                } else {
                    std::cout << "Officer not found.\n";
                }
                break;
            }
            case 3: {
                manager.displayOfficers();
                break;
            }
            case 4: {
                manager.exitProgram();
                break;
            }
            default: {
                std::cout << "Invalid choice, try again.\n";
                break;
            }
        }
    } while (choice != NUM_CHOICE);

    return 0;
}
