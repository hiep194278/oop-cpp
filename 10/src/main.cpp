#include <iostream>
#include "document.h"

int main() {
    Document doc("  This   is   an Example   String  ");
    
    std::cout << "Original Text: " << doc.getText() << std::endl;
    
    doc.standardizeText();
    std::cout << "Standardized Text: " << doc.getText() << std::endl;
    
    std::cout << "Word Count: " << doc.countWords() << std::endl;
    std::cout << "Count of 'A' or 'a': " << doc.countA() << std::endl;

    return 0;
}
