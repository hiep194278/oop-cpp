#include <iostream>
#include "Library.h"
using namespace std;

int main() {
    Library library;
    int choice;

    do {
        cout << "\nLibrary Menu:\n";
        cout << "1. Add new borrowing card\n";
        cout << "2. Delete card by borrowing code\n";
        cout << "3. Display all borrowing cards\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Handle newline

        switch (choice) {
            case 1:
                library.addCard();
                break;
            case 2: {
                string code;
                cout << "Enter borrowing code to delete: ";
                getline(cin, code);
                library.deleteCardByCode(code);
                break;
            }
            case 3:
                library.displayAllCards();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
