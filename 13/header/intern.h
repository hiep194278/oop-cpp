#pragma once
#include "employee.h"

class Intern : public Employee {
private:
    std::string major_;
    std::string semester;
    std::string university;

public:
    Intern(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, std::string major, std::string semester, std::string university);

    void showInfo() const override;
};
