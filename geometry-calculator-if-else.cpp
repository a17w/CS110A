#include <iostream>
#include <cmath>
using namespace std;

int main() {
 int choice;
 double area;
 const double PI = 3.14159;

//menu
cout << "Geometry Calculator" << endl;
cout << "1. Calculate the area of a circle" << endl;
cout << "2. Calculate the area of a rectangle" << endl;
cout << "3. Calculate the area of a triangle" << endl;
cout << "4. Quit" << endl;

cout << "Please enter a number: ";
cin >> choice;

//for circle
 if (choice == 1) {
   double r;
   cout << "Please enter the radius: ";
   cin >> r;
   area = PI*r*r;
   if (r < 0) {
     cout << "Invalid input. The value of radius must be greater than 0. \n";
     cout << "Please enter the radius: ";
     cin >> r;
     area = PI*r*r;
     cout << "The area of the circle is " << area << "." << endl;
   } else {
   cout << "The area of the circle is " << area << "." << endl;
 }

//for rectangle
 } else if (choice == 2) {
   int length, width;
   cout << "Please enter the length: ";
   cin >> length;
   cout << "Please enter the width: ";
   cin >> width;
   area = length*width;
   if (length < 0 || width < 0) {
     cout << "Invalid input. The values of length and width must be greater than 0. \n";
     cout << "Please enter length: ";
     cin >> length;
     cout << "Please enter width: ";
     cin >> width;
     area = length*width;
     cout << "The area of the rectangle is " << area << "." << endl;
   } else {
   cout << "The area of the rectangle is " << area << "." << endl;
 }

//for triangle
 } else if (choice == 3) {
   int base, height;
   cout << "Please enter the base: ";
   cin >> base;
   cout << "Please enter the height: ";
   cin >> height;
   area = base*height*.5;
   if (base < 0 || height < 0) {
     cout << "Invalid input. The values of base and height must be greater than 0. \n";
     cout << "Please enter base: ";
     cin >> base;
     cout << "Please enter height: ";
     cin >> height;
     area = base*height*.5;
   cout << "The area of the triangle is " << area << "." << endl;
 } else {
   cout << "The area of the triangle is " << area << "." << endl;
 }
 
//quit program
 } else if (choice == 4) {
   cout << "Quit program" << endl;
 } else {
   cout << "Invalid input. Please enter a number between 1 to 4"<< endl;
 }
  return 0;
}
