#include "Card.h"
#include <iostream>

Card::Card(const string& code, int borrowDate, int returnDate, int storeNumber)
    : borrowingCode(code), borrowingDate(borrowDate), returnDeadline(returnDate), bookStoreNumber(storeNumber) {}

// Get the borrowing code (used for searching/deleting)
string Card::getBorrowingCode() const { 
    return borrowingCode; 
}

// Input method
void Card::inputCard() {
    cout << "Enter borrowing code: ";
    getline(cin, borrowingCode);
    cout << "Enter borrowing date (integer): ";
    cin >> borrowingDate;
    cout << "Enter return deadline (integer): ";
    cin >> returnDeadline;
    cout << "Enter bookstore number: ";
    cin >> bookStoreNumber;
    cin.ignore(); // Handle newline before entering student info

    cout << "Enter student information:\n";
    student.inputStudent();
}

// Display method
void Card::displayCard() const {
    cout << "Borrowing Code: " << borrowingCode
         << ", Borrowing Date: " << borrowingDate
         << ", Return Deadline: " << returnDeadline
         << ", Bookstore Number: " << bookStoreNumber << endl;
    student.displayStudent();
}
