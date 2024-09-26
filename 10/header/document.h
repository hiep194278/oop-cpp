#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

class Document {
private:
    std::string text;

public:
    // Constructor
    Document(std::string st);

    // Count the number of words
    int countWords();

    // Count the number of 'A' characters (case-insensitive)
    int countA();

    // Standardize the text
    void standardizeText();

    // Get the text for display
    std::string getText() const;
};

#endif // DOCUMENT_H
