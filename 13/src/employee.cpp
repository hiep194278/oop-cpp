#include "employee.h"
#include <iostream>

int Employee::Employee_count = 0; // Initialize the static variable

Employee::Employee(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, int empType)
    : ID(id), FullName(fullName), BirthDay(birthDay), Phone(phone), Email(email), Employee_type(empType) {
    Employee_count++;
}

int Employee::getID() const {
    return ID;
}

int Employee::getEmployeeCount() {
    return Employee_count;
}

void Employee::addCertificate(const Certificate& cert) {
    certificates.push_back(cert);
}

const std::vector<Certificate>& Employee::getCertificates() const {
    return certificates;
}

void Employee::editInfo(std::string newName, std::string newPhone, std::string newEmail, std::string newBirthday) {
    FullName = newName;
    Phone = newPhone;
    Email = newEmail;
    BirthDay = newBirthday;
}
