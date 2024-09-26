#include <iostream>
#include "manager.h"
#include "candidate.h"
#include "candidateA.h"
#include "candidateB.h"
#include "candidateC.h"
#include <memory>  // For std::unique_ptr

#define NUM_CHOICE 4

// Function to display menu options
void displayMenu() {
    std::cout << "\n---------------------------------\n";
    std::cout << "Candidate Management System\n";
    std::cout << "1. Add new candidate\n";
    std::cout << "2. Search by id\n";
    std::cout << "3. Display candidates\n";
    std::cout << "4. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    Manager manager;
    int choice;
    std::string id, name, address;
    int priorityLevel, candidateType;

    do {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore();  // Clear newline character from input buffer

        switch (choice) {
            case 1: {
                std::cout << "Enter candidate type:";
                std::cout << "(1 - A, 2 - B, 3 - C): ";
                std::cin >> candidateType;
                std::cin.ignore();  // Clear newline character

                std::cout << "Enter id: ";
                std::getline(std::cin, id);
                std::cout << "Enter name: ";
                std::getline(std::cin, name);
                std::cout << "Enter address: ";
                std::getline(std::cin, address);
                std::cout << "Enter priority level: ";
                std::cin >> priorityLevel;
                std::cin.ignore();  // Clear newline

                if (candidateType == 1) {
                    // Adding a candidate of Type A
                    manager.addCandidate(std::make_unique<CandidateA>(id, name, address, priorityLevel));
                } else if (candidateType == 2) {
                    // Adding a candidate of Type B
                    manager.addCandidate(std::make_unique<CandidateB>(id, name, address, priorityLevel));
                } else if (candidateType == 3) {
                    // Adding a candidate of Type C
                    manager.addCandidate(std::make_unique<CandidateC>(id, name, address, priorityLevel));
                }
                break;
            }
            case 2: {
                std::cout << "Enter the id to search: ";
                std::getline(std::cin, id);

                Candidate* foundCandidate = manager.searchById(id);
                if (foundCandidate) {
                    std::cout << "Candidate found:" << std::endl;
                    foundCandidate->displayInfo();
                } else {
                    std::cout << "Candidate not found.\n";
                }
                break;
            }
            case 3: {
                manager.displayCandidates();
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
