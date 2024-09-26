#include "worker.h"
#include <iostream>
#include <stdexcept>

// Constructor
Worker::Worker(const std::string& name, const std::string& address, int age, Gender gender, int level)
    : Officer(name, address, age, gender) {
    if (level < 1 || level > 10) {
        throw std::out_of_range("Level must be between 1 and 10.");
    }
    this->level = level;
}

// Getter for level
int Worker::getLevel() const {
    return level;
}

// Setter for level
void Worker::setLevel(int level) {
    if (level < 1 || level > 10) {
        throw std::out_of_range("Level must be between 1 and 10.");
    }
    this->level = level;
}

void Worker::displayInfo() {
    Officer::displayInfo();
    std::cout << "Worker - ";
    std::cout << "Level: " << getLevel() << std::endl;
}