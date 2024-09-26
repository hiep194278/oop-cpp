#include "candidateA.h"
#include <iostream>

CandidateA::CandidateA(const std::string& id, const std::string& name, 
    const std::string& address, int priorityLevel) 
    : Candidate(id, name, address, priorityLevel) {};

void CandidateA::displayInfo() {
    Candidate::displayInfo();
    std::cout << "Subjects: Maths, Physics, Chemistry" << std::endl;
}