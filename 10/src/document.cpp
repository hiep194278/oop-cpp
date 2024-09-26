#include "document.h"
#include <sstream>   // For std::istringstream
#include <algorithm> // For std::count and std::remove_if

// Constructor
Document::Document(std::string st) : text(st) {}

// Count the number of words
int Document::countWords() {
    // An istringstream object (iss) is created, which allows us to treat 
    // the text string like a stream (similar to reading input from a file 
    // or console).
    // This stream allows us to extract words one by one, separated by 
    // spaces or other whitespace characters.
    std::istringstream iss(text);
    std::string word;
    int wordCount = 0;

    // This is a loop that runs as long as there are words left to extract
    //  from the stream.
    // The iss >> word statement extracts the next word from the stream 
    // into the word variable.
    // The extraction operator (>>) automatically skips any whitespace 
    // between words.
    while (iss >> word) {
        wordCount++;
    }
    return wordCount;
}

// Count the number of 'A' characters (case-insensitive)
int Document::countA() {
    int count = 0;
    for (char ch : text) {
        if (tolower(ch) == 'a') {
            count++;
        }
    }
    return count;
}

// Standardize the text
void Document::standardizeText() {
    // Remove leading and trailing whitespaces
    // This function searches the text string 
    // from the beginning (index 0) and finds 
    // the first character that is not a space
    text.erase(0, text.find_first_not_of(' '));
    // erase() function removes characters from 
    // the string starting at a given index (0 
    // in this case) for a specified number of 
    // characters (index here)
    text.erase(text.find_last_not_of(' ') + 1); // find_last_not_of() 
    // searches the text string from the end and finds the last character
    // that is not a space.
    // erase() removes all characters from the string starting at the 
    // index index + 1

    // Remove multiple spaces between words
    std::string result;
    bool inSpace = false;
    for (char ch : text) {
        if (ch == ' ') {
            if (!inSpace) {
                result += ch;
                inSpace = true;
            }
        } else {
            result += ch;
            inSpace = false;
        }
    }
    text = result;
}

// Get the text for display
std::string Document::getText() const {
    return text;
}
