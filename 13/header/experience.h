#pragma once
#include "employee.h"

class Experience : public Employee {
private:
    int yearsOfExperience;
    std::string professionalSkill;

public:
    Experience(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, int years, std::string skill);

    void showInfo() const override;
};
