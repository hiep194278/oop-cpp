#include "intern.h"
#include <iostream>

Intern::Intern(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, std::string major_, std::string semester, std::string university)
    : Employee(id, fullName, birthDay, phone, email, 2), major_(major_), semester(semester), university(university) {}

void Intern::showInfo() const {
    std::cout << "ID: " << ID << "\nName: " << FullName << "\nBirthday: " << BirthDay 
              << "\nPhone: " << Phone << "\nEmail: " << Email << "\nType: Intern"
              << "\nMajor: " << major_ << "\nSemester: " << semester << "\nUniversity: " << university << std::endl;
}
