#include <iostream>

using namespace std;

int main() {
    cout << "Gallons Converter" << endl << endl;

    double gallons;
    cout << "Enter gallons: ";
    cin >> gallons;

    double liters = gallons * 3.8754;

    cout << "Liters:\t" << liters << endl << endl << "Bye!" << endl << endl;

    return 0;
    
}