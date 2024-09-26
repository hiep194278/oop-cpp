#include "Staff.h"
#include <iostream>

// Constructor definition
Staff::Staff(const std::string& name, const std::string& address, int age, Gender gender, const std::string& task)
    : Officer(name, address, age, gender), task(task) {}

// Getter for task
std::string Staff::getTask() const {
    return task;
}

// Setter for task
void Staff::setTask(const std::string& task) {
    this->task = task;
}

void Staff::displayInfo() {
    Officer::displayInfo();
    std::cout << "Staff - ";
    std::cout << "Task: " << getTask() << std::endl;
}