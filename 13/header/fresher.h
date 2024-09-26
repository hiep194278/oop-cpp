#pragma once
#include "employee.h"

class Fresher : public Employee {
private:
    std::string graduationDate;
    std::string graduationRank;
    std::string graduationSchool;

public:
    Fresher(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, std::string gradDate, std::string gradRank, std::string gradSchool);

    void showInfo() const override;
};
