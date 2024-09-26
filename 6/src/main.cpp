#include <iostream>
#include "School.h"
using namespace std;

int main() {
    School school;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add new student\n";
        cout << "2. Display students 20 years old\n";
        cout << "3. Show number of students aged 23 from DN\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Consume newline character

        switch (choice) {
            case 1:
                school.addNewStudent();
                break;
            case 2:
                school.displayStudents20YearsOld();
                break;
            case 3:
                cout << "Number of students aged 23 from DN: " 
                     << school.countStudents23YearsOldFromDN() << endl;
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
