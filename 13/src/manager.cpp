#include "manager.h"
#include "experience.h"
#include "fresher.h"
#include "intern.h"
#include <iostream>

void Manager::addEmployee(std::unique_ptr<Employee> employee) {
    employees.push_back(std::move(employee));
    std::cout << "Employee added successfully.\n";
}

void Manager::editEmployee(int id) {
    for (const auto& employee : employees) {
        if (employee->getID() == id) {
            std::string newName, newPhone, newEmail, newBirthday;
            std::cout << "Enter new details for the employee: \n";
            std::cout << "Name: "; std::cin >> newName;
            std::cout << "Phone: "; std::cin >> newPhone;
            std::cout << "Email: "; std::cin >> newEmail;
            std::cout << "Birthday (YYYY-MM-DD): "; std::cin >> newBirthday;
            
            employee->editInfo(newName, newPhone, newEmail, newBirthday);
            std::cout << "Employee edited successfully.\n";
            return;
        }
    }
    std::cout << "Employee not found.\n";
}

void Manager::deleteEmployee(int id) {
    for (auto it = employees.begin(); it != employees.end(); ++it) {
        if ((*it)->getID() == id) {
            employees.erase(it);  // Automatically deletes the object when unique_ptr is erased
            std::cout << "Employee deleted successfully.\n";
            return;
        }
    }
    std::cout << "Employee not found.\n";
}

void Manager::showAllEmployees() const {
    for (const auto& employee : employees) {
        employee->showInfo();
        std::cout << "---------------\n";
    }
}

void Manager::findAllInterns() const {
    for (const auto& employee : employees) {
        if (dynamic_cast<Intern*>(employee.get())) {
            employee->showInfo();
        }
    }
}

void Manager::findAllFreshers() const {
    for (const auto& employee : employees) {
        if (dynamic_cast<Fresher*>(employee.get())) {
            employee->showInfo();
        }
    }
}

void Manager::findAllExperienced() const {
    for (const auto& employee : employees) {
        if (dynamic_cast<Experience*>(employee.get())) {
            employee->showInfo();
        }
    }
}
