#include "student.h"
#include <iostream>

Student::Student(const string& name, int age, const string& className)
    : fullName(name), age(age), className(className) {}

// Getters
string Student::getFullName() const { return fullName; }
int Student::getAge() const { return age; }
string Student::getClassName() const { return className; }

// Input method
void Student::inputStudent() {
    cout << "Enter full name: ";
    getline(cin, fullName);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); // To handle the newline character
    cout << "Enter class: ";
    getline(cin, className);
}

// Display method
void Student::displayStudent() const {
    cout << "Full Name: " << fullName
         << ", Age: " << age
         << ", Class: " << className << endl;
}
