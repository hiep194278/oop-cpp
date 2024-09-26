#ifndef SCHOOL_H
#define SCHOOL_H

#include <vector>
#include "student.h"

class School {
private:
    vector<Student> students;

public:
    // Add new student to the school
    void addNewStudent();

    // Display students who are 20 years old
    void displayStudents20YearsOld() const;

    // Show number of students who are 23 years old and from DN
    int countStudents23YearsOldFromDN() const;
};

#endif
