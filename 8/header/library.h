#ifndef LIBRARY_H
#define LIBRARY_H

#include "card.h"
#include <vector>

class Library {
private:
    vector<Card> cards;

public:
    // Add, delete, and display methods
    void addCard();
    void deleteCardByCode(const string& code);
    void displayAllCards() const;
};

#endif
