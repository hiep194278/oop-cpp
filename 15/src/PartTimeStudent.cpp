#include "PartTimeStudent.h"
#include <iostream>

PartTimeStudent::PartTimeStudent(const std::string& code, const std::string& name, const std::string& dob, 
                                 int year, double score, const std::string& trainingLocation)
    : Student(code, name, dob, year, score), trainingAssociation(trainingLocation) {}

// Getter
std::string PartTimeStudent::getTrainingAssociation() const {
    return trainingAssociation;
}

// Setter
void PartTimeStudent::setTrainingAssociation(const std::string& location) {
    trainingAssociation = location;
}

bool PartTimeStudent::isFullTime() const {
    return false;
}

void PartTimeStudent::input() {
    Student::input();
    std::cout << "Enter training location: ";
    std::cin.ignore();
    std::getline(std::cin, trainingAssociation);
}

void PartTimeStudent::output() const {
    Student::output();
    std::cout << "Training Association: " << trainingAssociation << std::endl;
    std::cout << "Type: Part-time" << std::endl;
}
