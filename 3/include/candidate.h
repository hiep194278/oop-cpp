#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <string>

class Candidate {
protected:
    std::string id;
    std::string name;
    std::string address;
    int priorityLevel;
    
public:
    // Constructor
    Candidate(const std::string& id, const std::string& name, 
              const std::string& address, int priorityLevel);

    // Getters
    std::string getId() const;
    std::string getName() const;
    std::string getAddress() const;
    int getPriorityLevel() const;

    // Setters
    void setId(const std::string& id);
    void setName(const std::string& name);
    void setAddress(const std::string& address);
    void setPriorityLevel(int priorityLevel);
    virtual void displayInfo();
};

#endif // CANDIDATE_H