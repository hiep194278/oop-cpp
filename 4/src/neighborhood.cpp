#include "neighborhood.h"
#include <iostream>

void Neighborhood::inputNeighborhood() {
    int n;
    cout << "Enter number of households: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; ++i) {
        cout << "\nEntering details for household " << i + 1 << ":\n";
        Household household;
        household.inputHousehold();
        households.push_back(household);
    }
}

void Neighborhood::displayNeighborhood() const {
    for (size_t i = 0; i < households.size(); ++i) {
        cout << "\nHousehold " << i + 1 << ":\n";
        households[i].displayHousehold();
    }
}
