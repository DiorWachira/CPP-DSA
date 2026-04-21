//3. Program using functions to compute area and perimeter of a square
#include <iostream>
using namespace std;

double area(double side) {
    return side * side;
}

double perimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    cout << "Enter the side length of the square: ";
    cin >> side;

    cout << "Area of the square = " << area(side) << endl;
    cout << "Perimeter of the square = " << perimeter(side) << endl;

    return 0;
}
