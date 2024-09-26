#pragma once
#include <string>
#include <vector>
#include "Certificate.h"

class Employee {
protected:
    static int Employee_count;
    int ID;
    std::string FullName;
    std::string BirthDay;
    std::string Phone;
    std::string Email;
    int Employee_type; // 0: Experience, 1: Fresher, 2: Intern
    std::vector<Certificate> certificates;

public:
    Employee(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, int empType);
    
    virtual ~Employee() = default;
    
    virtual void showInfo() const = 0;  // Pure virtual function for polymorphism

    // Getters and setters
    int getID() const;
    static int getEmployeeCount();

    void addCertificate(const Certificate& cert);
    const std::vector<Certificate>& getCertificates() const;

    // Virtual functions for edit and delete
    virtual void editInfo(std::string newName, std::string newPhone, std::string newEmail, std::string newBirthday);
};
