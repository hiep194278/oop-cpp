#include "School.h"
#include <iostream>

// Add a new student to the school
void School::addNewStudent() {
    Student student;
    student.inputStudent();
    students.push_back(student);
}

// Display students who are 20 years old
void School::displayStudents20YearsOld() const {
    cout << "\nStudents aged 20:\n";
    for (const auto& student : students) {
        if (student.getAge() == 20) {
            student.displayStudent();
        }
    }
}

// Count students who are 23 years old and from DN
int School::countStudents23YearsOldFromDN() const {
    int count = 0;
    for (const auto& student : students) {
        if (student.getAge() == 23 && student.getHometown() == "DN") {
            ++count;
        }
    }
    return count;
}
