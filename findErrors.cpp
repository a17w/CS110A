#include <iostream>
using namespace std;

int main() {
        int num1, num2;
        double average;

// Input 2 integers
        cout << "Enter two integers separated by one or more spaces: \n";
        cin >> num1 >> num2;
//Find and display their average
        average = (num1 + num2) / 2;
        cout << "The average of these 2 numbers is " << average << endl;
        return 0;
}
