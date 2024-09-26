#ifndef CANDIDATEA_H
#define CANDIDATEA_H

#include "candidate.h"
#include <string>

class CandidateA : public Candidate {
public:
    // Constructor
    CandidateA(const std::string& id, const std::string& name, 
              const std::string& address, int priorityLevel);

    void displayInfo() override;
};

#endif // CANDIDATEA_H