#include "fresher.h"
#include <iostream>

Fresher::Fresher(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, std::string gradDate, std::string gradRank, std::string gradSchool)
    : Employee(id, fullName, birthDay, phone, email, 1), graduationDate(gradDate), graduationRank(gradRank), graduationSchool(gradSchool) {}

void Fresher::showInfo() const {
    std::cout << "ID: " << ID << "\nName: " << FullName << "\nBirthday: " << BirthDay 
              << "\nPhone: " << Phone << "\nEmail: " << Email << "\nType: Fresher"
              << "\nGraduation Date: " << graduationDate << "\nRank: " << graduationRank 
              << "\nSchool: " << graduationSchool << std::endl;
}
