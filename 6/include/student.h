#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string fullName;
    int age;
    string hometown;
    string className; // Class information

public:
    // Constructor
    Student(const string& name = "", int age = 0, const string& hometown = "", const string& className = "");

    // Getters
    string getFullName() const;
    int getAge() const;
    string getHometown() const;
    string getClassName() const;

    // Methods to add and display information
    void inputStudent();
    void displayStudent() const;
};

#endif
