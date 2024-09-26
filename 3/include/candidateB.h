#ifndef CANDIDATEB_H
#define CANDIDATEB_H

#include "candidate.h"
#include <string>

class CandidateB : public Candidate {
public:
    // Constructor
    CandidateB(const std::string& id, const std::string& name, 
              const std::string& address, int priorityLevel);

    void displayInfo() override;
};

#endif // CANDIDATEB_H