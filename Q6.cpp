//6. C++ program to input 5 values into an array and calculate the average
#include <iostream>
using namespace std;
int main() {
    int values[5];
    int sum = 0;
    double average;
    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
        sum = sum + values[i];
    }
    average = sum / 5.0;
    cout << "Average = " << average << endl;
    return 0;
}