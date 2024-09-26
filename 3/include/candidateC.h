#ifndef CANDIDATEC_H
#define CANDIDATEC_H

#include "candidate.h"
#include <string>

class CandidateC : public Candidate {
public:
    // Constructor
    CandidateC(const std::string& id, const std::string& name, 
              const std::string& address, int priorityLevel);

    void displayInfo() override;
};

#endif // CANDIDATEC_H