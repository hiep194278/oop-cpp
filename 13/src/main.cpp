// main.cpp
#include <iostream>
#include "Manager.h"
#include "Experience.h"
#include "Fresher.h"
#include "Intern.h"
#include <memory> // For std::unique_ptr

int main() {
    Manager manager;

    try {
        // Add employees using std::make_unique for convenience
        manager.addEmployee(std::make_unique<Experience>(1, "John Doe", "1985-05-10", "1234567890", "john@example.com", 10, "C++"));
        manager.addEmployee(std::make_unique<Fresher>(2, "Jane Doe", "1995-05-10", "0987654321", "jane@example.com", "2020-07-15", "A", "Harvard"));
        manager.addEmployee(std::make_unique<Intern>(3, "Jack Doe", "2002-05-10", "1122334455", "jack@example.com", "Computer Science", "3rd Semester", "MIT"));
        
        // Show all employees
        manager.showAllEmployees();

        // Edit an employee
        manager.editEmployee(2);

        // Delete an employee
        manager.deleteEmployee(1);

        // Show remaining employees
        manager.showAllEmployees();

        // Find all interns
        std::cout << "Finding all interns...\n";
        manager.findAllInterns();

        // Find all freshers
        std::cout << "Finding all freshers...\n";
        manager.findAllFreshers();

        // Find all experienced employees
        std::cout << "Finding all experienced employees...\n";
        manager.findAllExperienced();
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
