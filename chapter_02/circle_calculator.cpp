#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::pow;
using std::round;

int main() {
    cout << "Circle Calculator" << endl << endl;

    double radius;
    cout << "Enter radius:  ";
    cin >> radius;

    double pi = 3.14159;
    double diameter = 2 * radius;
    double circumference = diameter * pi;
    double area = pi * pow(radius, 2.0);

    circumference = round(circumference * 10) / 10;
    area = round(area * 10) / 10;

    cout << "Diameter:      " << diameter << endl
         << "Circumference: " << circumference << endl
         << "Area:          " << area << endl << endl
         << "Bye!" << endl;
    
    return 0;
}