#include "candidate.h"
#include <iostream>

// Constructor
Candidate::Candidate(const std::string& id, const std::string& name, 
            const std::string& address, int priorityLevel)
    : id(id), name(name), address(address), priorityLevel(priorityLevel) {};

// Getters
std::string Candidate::getId() const {
    return id;
};

std::string Candidate::getName() const {
    return name;
};

std::string Candidate::getAddress() const {
    return address;
};

int Candidate::getPriorityLevel() const {
    return priorityLevel;
};

// Setters
void Candidate::setId(const std::string& id) {
    this->id = id;
};

void Candidate::setName(const std::string& name) {
    this->name = name;
};

void Candidate::setAddress(const std::string& address) {
    this->address = address;
};

void Candidate::setPriorityLevel(int priorityLevel) {
    this->priorityLevel = priorityLevel;
};

void Candidate::displayInfo() {
    std::cout << "ID: " << getId() 
              << ", Name: " << getName()
              << ", Address: " << getAddress()
              << ", Priority Level: " << getPriorityLevel() << std::endl;
};