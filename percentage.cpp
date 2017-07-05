// Lab 3 percentage.cpp
// This program will determine the percentage of answers a student got correct on a test.
// Annie Wong

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
        string name;
        int numQuestions, numCorrect;
        double percentage;

        // Get student's test data
        cout << "Enter student's first and last name: ";
        getline(cin,name); //captures multiple-word string input from the keyboard
        cout << "Number of questions on the test: ";
        cin  >> numQuestions;
        cout << "Number of answers the student got correct: ";
        cin  >> numCorrect;

        cout << setprecision(1) << fixed; // setting decimal place after number
        percentage = (static_cast<double>(numCorrect) / (numQuestions)) * 100; //calculating percentage

        cout << name << " has received a score of " << percentage << "% on her test.\n"; // displays name and percentage statement

        cout << name << setw(10) << percentage << "%" << endl; // displays name and percentage

        return 0;
}
