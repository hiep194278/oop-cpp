#include "Manager.h"
#include <algorithm>
#include <iostream>

// Add a faculty to the system
void Manager::addFaculty(const std::string& facultyName) {
    faculties[facultyName] = Faculty(facultyName);
}

// Add a student to a faculty
void Manager::addStudentToFaculty(const std::string& facultyName, Student* student) {
    faculties[facultyName].addStudent(student);
}

// Get total number of full-time students in all faculties
int Manager::getTotalFullTimeStudentsInAllFaculties() const {
    int count = 0;
    for (const auto& [facultyName, faculty] : faculties) {
        count += faculty.getTotalFullTimeStudents();
    }
    return count;
}

// Find the student with the highest entrance score in a faculty
Student* Manager::findHighestEntranceScoreStudentInFaculty(const std::string& facultyName) {
    if (faculties.find(facultyName) != faculties.end()) {
        return faculties[facultyName].findHighestEntranceScoreStudent();
    }
    return nullptr;
}

// Find the student with the highest semester average score in a faculty
Student* Manager::findHighestSemesterScoreStudentInFaculty(const std::string& facultyName) {
    if (faculties.find(facultyName) != faculties.end()) {
        return faculties[facultyName].findHighestSemesterScoreStudent();
    }
    return nullptr;
}

// Get a list of part-time students at a given training location
std::vector<Student*> Manager::getPartTimeStudentsByLocation(const std::string& facultyName, const std::string& location) {
    if (faculties.find(facultyName) != faculties.end()) {
        return faculties[facultyName].getPartTimeStudentsByLocation(location);
    }
    return {};
}

// Sort students in a faculty by type and year of admission
void Manager::sortStudentsByTypeAndYear(const std::string& facultyName) {
    if (faculties.find(facultyName) != faculties.end()) {
        faculties[facultyName].sortStudentsByTypeAndYear();
    }
}

// Print all students in a faculty
void Manager::printFacultyStudents(const std::string& facultyName) {
    if (faculties.find(facultyName) != faculties.end()) {
        faculties[facultyName].printStudents();
    }
}

// Get students with an average score above a threshold in the last semester
std::vector<Student*> Manager::getStudentsWithAvgAboveThresholdInLastSemester(const std::string& facultyName, double threshold) {
    if (faculties.find(facultyName) != faculties.end()) {
        return faculties[facultyName].getStudentsWithAvgAboveThresholdInLastSemester(threshold);
    }
    return {};
}

// Count students by year of admission in a faculty
std::map<int, int> Manager::countStudentsByYear(const std::string& facultyName) {
    if (faculties.find(facultyName) != faculties.end()) {
        return faculties[facultyName].countStudentsByYear();
    }
    return {};
}
