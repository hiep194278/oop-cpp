#ifndef WORKER_H
#define WORKER_H

#include "officer.h"

class Worker : public Officer {
private:
    int level;  // Level from 1 to 10

public:
    // Constructor
    Worker(const std::string& name, const std::string& address, int age, Gender gender, int level);

    // Getter and Setter for level
    int getLevel() const;
    void setLevel(int level);
    void displayInfo() override;
};

#endif // WORKER_H
