#pragma once
#include <vector>
#include <memory> // For smart pointers
#include "employee.h"

class Manager {
private:
    std::vector<std::unique_ptr<Employee>> employees;

public:
    Manager() = default;
    ~Manager() = default;  // Destructor not needed anymore as unique_ptr manages memory

    void addEmployee(std::unique_ptr<Employee> employee);
    void editEmployee(int id);
    void deleteEmployee(int id);
    void showAllEmployees() const;

    void findAllInterns() const;
    void findAllFreshers() const;
    void findAllExperienced() const;
};
