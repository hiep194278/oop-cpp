#include "Student.h"
#include <iostream>
#include <algorithm>

Student::Student(const std::string& code, const std::string& name, const std::string& dob, 
                 int year, double score)
    : studentCode(code), fullName(name), dateOfBirth(dob), yearOfAdmission(year), entranceScore(score) {}

// Getters
std::string Student::getStudentCode() const { return studentCode; }
std::string Student::getFullName() const { return fullName; }
std::string Student::getDateOfBirth() const { return dateOfBirth; }
int Student::getYearOfAdmission() const { return yearOfAdmission; }
double Student::getEntranceScore() const { return entranceScore; }
std::map<std::string, double> Student::getLearningOutcomes() const { return learningOutcomes; }

// Find the highest semester score from learning outcomes
double Student::getHighestSemesterScore() const {
    if (learningOutcomes.empty()) {
        return 0.0; // No semesters available
    }

    // Find the maximum average score from the learningOutcomes map
    auto maxElement = std::max_element(learningOutcomes.begin(), learningOutcomes.end(),
                                       [](const auto& a, const auto& b) {
                                           return a.second < b.second;
                                       });
    return maxElement->second;
}

// Get the score of the last semester in the learningOutcomes map
double Student::getLastSemesterScore() const {
    if (learningOutcomes.empty()) {
        return 0.0; // No semesters available
    }

    // The last semester is the one with the highest semester name (lexicographically)
    auto lastSemester = std::prev(learningOutcomes.end());
    return lastSemester->second;
}

// Setters
void Student::setStudentCode(const std::string& code) { studentCode = code; }
void Student::setFullName(const std::string& name) { fullName = name; }
void Student::setDateOfBirth(const std::string& dob) { dateOfBirth = dob; }
void Student::setYearOfAdmission(int year) { yearOfAdmission = year; }
void Student::setEntranceScore(double score) { entranceScore = score; }
void Student::setLearningOutcomes(const std::map<std::string, double>& outcomes) { learningOutcomes = outcomes; }

void Student::input() {
    try {
        std::cout << "Enter student code: ";
        std::cin >> studentCode;
        std::cout << "Enter full name: ";
        std::cin.ignore();
        std::getline(std::cin, fullName);
        std::cout << "Enter date of birth (YYYY-MM-DD): ";
        std::cin >> dateOfBirth;
        std::cout << "Enter year of admission: ";
        std::cin >> yearOfAdmission;

        if (yearOfAdmission < 2000 || yearOfAdmission > 2024) {
            throw std::invalid_argument("Invalid year of admission!");
        }

        std::cout << "Enter entrance score: ";
        std::cin >> entranceScore;
        if (entranceScore < 0.0 || entranceScore > 100.0) {
            throw std::out_of_range("Entrance score must be between 0 and 100.");
        }

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        std::cout << "Please enter valid data." << std::endl;
        input();  // Retry input
    }
}

// Output method
void Student::output() const {
    std::cout << "Student Code: " << studentCode << std::endl;
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Date of Birth: " << dateOfBirth << std::endl;
    std::cout << "Year of Admission: " << yearOfAdmission << std::endl;
    std::cout << "Entrance Score: " << entranceScore << std::endl;
}

void Student::addLearningOutcome(const std::string& semester, double avgScore) {
    learningOutcomes[semester] = avgScore;
}

double Student::getAverageScoreBySemester(const std::string& semester) const {
    auto it = learningOutcomes.find(semester);
    if (it != learningOutcomes.end()) {
        return it->second;
    } else {
        throw std::invalid_argument("Semester not found.");
    }
}

void Student::display() const {
    std::cout << "Student Code: " << studentCode << "\n";
    std::cout << "Full Name: " << fullName << "\n";
    std::cout << "Date of Birth: " << dateOfBirth << "\n";
    std::cout << "Year of Admission: " << yearOfAdmission << "\n";
    std::cout << "Entrance Score: " << entranceScore << "\n";
}
