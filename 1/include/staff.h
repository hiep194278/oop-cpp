#ifndef STAFF_H
#define STAFF_H

#include "officer.h"
#include <string>

class Staff : public Officer {
private:
    std::string task; 

public:
    // Constructor
    Staff(const std::string& name, const std::string& address, int age, Gender gender, const std::string& task);

    // Getter for task
    std::string getTask() const;

    // Setter for task
    void setTask(const std::string& task);
    void displayInfo() override;
};

#endif // STAFF_H
