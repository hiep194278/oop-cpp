#include "Faculty.h"
#include "FullTimeStudent.h"
#include "PartTimeStudent.h"
#include <algorithm>
#include <iostream>

// Constructor
Faculty::Faculty(const std::string& name) : facultyName(name) {}

// Add a student to the faculty
void Faculty::addStudent(Student* student) {
    students.push_back(student);
}

// Get the total number of full-time students in the faculty
int Faculty::getTotalFullTimeStudents() const {
    int count = 0;
    for (const auto& student : students) {
        if (dynamic_cast<FullTimeStudent*>(student)) {
            count++;
        }
    }
    return count;
}

// Find the student with the highest entrance score
Student* Faculty::findHighestEntranceScoreStudent() const {
    if (students.empty()) return nullptr;
    
    return *std::max_element(students.begin(), students.end(), [](Student* a, Student* b) {
        return a->getEntranceScore() < b->getEntranceScore();
    });
}

// Find the student with the highest semester score
Student* Faculty::findHighestSemesterScoreStudent() const {
    if (students.empty()) return nullptr;

    return *std::max_element(students.begin(), students.end(), [](Student* a, Student* b) {
        return a->getHighestSemesterScore() < b->getHighestSemesterScore();
    });
}

// Get part-time students by training location
std::vector<Student*> Faculty::getPartTimeStudentsByLocation(const std::string& location) const {
    std::vector<Student*> partTimeStudents;
    for (const auto& student : students) {
        PartTimeStudent* ptStudent = dynamic_cast<PartTimeStudent*>(student);
        if (ptStudent && ptStudent->getTrainingAssociation() == location) {
            partTimeStudents.push_back(ptStudent);
        }
    }
    return partTimeStudents;
}

// Sort students by type (FullTime/PartTime) and year of admission
void Faculty::sortStudentsByTypeAndYear() {
    std::sort(students.begin(), students.end(), [](Student* a, Student* b) {
        if (dynamic_cast<FullTimeStudent*>(a) && dynamic_cast<PartTimeStudent*>(b)) return true;
        if (dynamic_cast<PartTimeStudent*>(a) && dynamic_cast<FullTimeStudent*>(b)) return false;
        return a->getYearOfAdmission() > b->getYearOfAdmission();
    });
}

// Print all students
void Faculty::printStudents() const {
    for (const auto& student : students) {
        student->output();
    }
}

// Get students with an average score above a threshold in their last semester
std::vector<Student*> Faculty::getStudentsWithAvgAboveThresholdInLastSemester(double threshold) const {
    std::vector<Student*> topScorers;
    for (const auto& student : students) {
        double lastSemesterScore = student->getLastSemesterScore();
        if (lastSemesterScore >= threshold) {
            topScorers.push_back(student);
        }
    }
    return topScorers;
}

// Count students by year of admission
std::map<int, int> Faculty::countStudentsByYear() const {
    std::map<int, int> countByYear;
    for (const auto& student : students) {
        int year = student->getYearOfAdmission();
        countByYear[year]++;
    }
    return countByYear;
}
