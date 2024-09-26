#include "library.h"
#include <iostream>
#include <algorithm>

// Add a new borrowing card
void Library::addCard() {
    Card card;
    card.inputCard();
    cards.push_back(card);
}

// Delete a card by borrowing code
void Library::deleteCardByCode(const string& code) {
    auto it = remove_if(cards.begin(), cards.end(), [&code](const Card& card) {
        return card.getBorrowingCode() == code;
    });
    
    if (it != cards.end()) {
        cards.erase(it, cards.end());
        cout << "Card with code " << code << " has been deleted.\n";
    } else {
        cout << "No card found with code " << code << ".\n";
    }
}

// Display all cards
void Library::displayAllCards() const {
    for (const auto& card : cards) {
        card.displayCard();
        cout << "-------------------\n";
    }
}
