#include "student.h"
#include <iostream>

Student::Student(const string& name, int age, const string& hometown, const string& className)
    : fullName(name), age(age), hometown(hometown), className(className) {}

// Getters
string Student::getFullName() const { return fullName; }
int Student::getAge() const { return age; }
string Student::getHometown() const { return hometown; }
string Student::getClassName() const { return className; }

// Input method for Student class
void Student::inputStudent() {
    cout << "Enter full name: ";
    getline(cin, fullName);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); // To consume the newline character
    cout << "Enter hometown: ";
    getline(cin, hometown);
    cout << "Enter class name: ";
    getline(cin, className);
}

// Display method for Student class
void Student::displayStudent() const {
    cout << "Full Name: " << fullName
         << ", Age: " << age
         << ", Hometown: " << hometown
         << ", Class: " << className << endl;
}
