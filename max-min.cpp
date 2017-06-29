// Write a program that asks the user to enter two numbers. The program should use the con-
// ditional operator to determine which number is the smaller and which is the larger.

#include <iostream>
using namespace std;

int main() {
  int num1, num2;

//Get two numbers from the users
cout << "Please enter a number: ";
cin >> num1;

cout << "Please enter a number: ";
cin >> num2;

//conditional statements
if (num1 > num2) {
  cout << num1 << " is " << "greater than " << num2 << endl;
} else if (num1 < num2) {
  cout << num1 << " is " << "less than " << num2 << endl;
}
  else
  cout << num1 << " and " << num2 << " are equal to one another." << endl;
  return 0;
}
