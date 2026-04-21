//1. Program to convert days to seconds
#include <iostream>
using namespace std;

int main() {
    int days;
    int seconds;

    cout << "Enter number of days: ";
    cin >> days;

    seconds = days * 24 * 60 * 60;

    cout << "Number of seconds in " << days << " day(s) = " << seconds << endl;

    return 0;
}