#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string fullName;
    int age;
    string className;

public:
    // Constructor
    Student(const string& name = "", int age = 0, const string& className = "");

    // Getters
    string getFullName() const;
    int getAge() const;
    string getClassName() const;

    // Input and display methods
    void inputStudent();
    void displayStudent() const;
};

#endif
