#ifndef ENGINEER_H
#define ENGINEER_H

#include "officer.h"
#include <string>

class Engineer : public Officer {
private:
    std::string branch; 

public:
    // Constructor
    Engineer(const std::string& name, const std::string& address, int age, Gender gender, const std::string& branch);

    // Getter and Setter for level
    std::string getBranch() const;
    void setBranch(const std::string& address);
    void displayInfo() override;
};

#endif // ENGINEER_H
