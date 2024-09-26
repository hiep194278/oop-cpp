#ifndef CARD_H
#define CARD_H

#include "Student.h"
#include <string>
using namespace std;

class Card {
private:
    string borrowingCode;
    int borrowingDate;
    int returnDeadline;
    int bookStoreNumber;
    Student student;

public:
    // Constructor
    Card(const string& code = "", int borrowDate = 0, int returnDate = 0, int storeNumber = 0);

    // Getters
    string getBorrowingCode() const;

    // Input and display methods
    void inputCard();
    void displayCard() const;
};

#endif
