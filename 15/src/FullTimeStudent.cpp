#include "FullTimeStudent.h"
#include <iostream>

FullTimeStudent::FullTimeStudent(const std::string& code, const std::string& name, const std::string& dob, 
                                 int year, double score)
    : Student(code, name, dob, year, score) {}

bool FullTimeStudent::isFullTime() const {
    return true;
}

void FullTimeStudent::output() const {
    Student::output();
    std::cout << "Type: Full-time" << std::endl;
}