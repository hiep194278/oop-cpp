#include "candidateB.h"
#include <iostream>

CandidateB::CandidateB(const std::string& id, const std::string& name, 
    const std::string& address, int priorityLevel) 
    : Candidate(id, name, address, priorityLevel) {};

void CandidateB::displayInfo() {
    Candidate::displayInfo();
    std::cout << "Subjects: Maths, Chemistry, Biology" << std::endl;
}