#ifndef MANAGER_H
#define MANAGER_H

#include <unordered_map>
#include <vector>
#include <string>
#include "Student.h"
#include "Faculty.h"

class Manager {
private:
    std::unordered_map<std::string, Faculty> faculties;

public:
    void addFaculty(const std::string& facultyName);
    void addStudentToFaculty(const std::string& facultyName, Student* student);

    int getTotalFullTimeStudentsInAllFaculties() const;

    Student* findHighestEntranceScoreStudentInFaculty(const std::string& facultyName);
    Student* findHighestSemesterScoreStudentInFaculty(const std::string& facultyName);
    std::vector<Student*> getPartTimeStudentsByLocation(const std::string& facultyName, const std::string& location);
    void sortStudentsByTypeAndYear(const std::string& facultyName);
    void printFacultyStudents(const std::string& facultyName);
    std::vector<Student*> getStudentsWithAvgAboveThresholdInLastSemester(const std::string& facultyName, double threshold);
    std::map<int, int> countStudentsByYear(const std::string& facultyName);
};

#endif
