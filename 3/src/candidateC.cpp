#include "candidateC.h"
#include <iostream>

CandidateC::CandidateC(const std::string& id, const std::string& name, 
    const std::string& address, int priorityLevel) 
    : Candidate(id, name, address, priorityLevel) {};

void CandidateC::displayInfo() {
    Candidate::displayInfo();
    std::cout << "Subjects: Literature, History, Geography" << std::endl;
}