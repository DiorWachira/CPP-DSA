//2. Program to calculate the volume of a sphere
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, volume;
    const double pi = 3.14159;

    cout << "Enter the radius: ";
    cin >> radius;

    volume = (4.0 / 3.0) * pi * pow(radius, 3);

    cout << "Volume of the sphere = " << volume << endl;

    return 0;
}