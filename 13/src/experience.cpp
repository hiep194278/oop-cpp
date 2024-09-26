#include "Experience.h"
#include <iostream>

Experience::Experience(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, int years, std::string skill)
    : Employee(id, fullName, birthDay, phone, email, 0), yearsOfExperience(years), professionalSkill(skill) {}

void Experience::showInfo() const {
    std::cout << "ID: " << ID << "\nName: " << FullName << "\nBirthday: " << BirthDay 
              << "\nPhone: " << Phone << "\nEmail: " << Email << "\nType: Experience"
              << "\nYears of Experience: " << yearsOfExperience << "\nSkill: " << professionalSkill << std::endl;
}
