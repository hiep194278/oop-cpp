#include "neighborhood.h"
#include <iostream>

int main() {
    // Create a Neighborhood object
    Neighborhood neighborhood;

    // Input households into the neighborhood
    cout << "Enter the details for the neighborhood:\n";
    neighborhood.inputNeighborhood();

    // Display information about the neighborhood
    cout << "\nDisplaying neighborhood information:\n";
    neighborhood.displayNeighborhood();

    return 0;
}
