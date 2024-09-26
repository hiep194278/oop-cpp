#ifndef FACULTY_H
#define FACULTY_H

#include <vector>
#include <map>
#include <string>
#include "Student.h"

class Faculty {
private:
    std::string facultyName;
    std::vector<Student*> students;

public:
    Faculty() = default;
    Faculty(const std::string& name);

    void addStudent(Student* student);
    int getTotalFullTimeStudents() const;

    Student* findHighestEntranceScoreStudent() const;
    Student* findHighestSemesterScoreStudent() const;
    std::vector<Student*> getPartTimeStudentsByLocation(const std::string& location) const;
    void sortStudentsByTypeAndYear();
    void printStudents() const;
    std::vector<Student*> getStudentsWithAvgAboveThresholdInLastSemester(double threshold) const;
    std::map<int, int> countStudentsByYear() const;
};

#endif
