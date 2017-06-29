#include <iostream>
using namespace std;

int main() {
  int choice;
  double area;
  const double PI = 3.14159;

  //menu
  cout << "Geometry Calculator";
  cout << "1. Calculate the area of a circle.";
  cout << "2. Calculate the area of a rectangle.";
  cout << "3. Calculate the area of a triangle.";
  cout << "4. Quit" << endl;

  cout << "Enter 1, 2, 3 or 4: ";
  cin >> choice;
  switch (choice)
  {
    //circle
    case 1:
    double r;
    cout << "Please enter the radius: ";
    cin >> r;
    if (r < 0) {
     cout << "Invalid input. The value of radius must be greater than 0. \n";
     cout << "Please enter the radius: ";
     cin >> r;
    }
     area = PI*r*r;
     cout << "The area of the circle is " << area << ".\n";
    break;

    //rectangle
    case 2:
    double length, width;
    cout << "Please enter the length: ";
    cin >> length;
    cout << "Please enter the width: ";
    cin >> width;
    if (length < 0 || width < 0) {
     cout << "Invalid input. The values of length and width must be greater than 0. \n";
     cout << "Please enter length: ";
     cin >> length;
     cout << "Please enter width: ";
     cin >> width;
    }
     area = length*width;
     cout << "The area of the rectangle is " << area << ".\n";
    break;

    //triangle
    case 3:
    double base, height;
    cout << "Please enter the base: ";
    cin >> base;
    cout << "Please enter the height: ";
    cin >> height;
    if (base < 0 || height < 0) {
     cout << "Invalid input. The values of base and height must be greater than 0. \n";
     cout << "Please enter base: ";
     cin >> base;
     cout << "Please enter height: ";
     cin >> height;
    }
    area = base*height*.5;
    cout << "The area of the triangle is " << area << ".\n";
    break;

    //quit program
    case 4:
      cout << "Quit program.\n";
    break;

    default:
      cout << "Please enter choice 1, 2, 3 or 4!";
  };

  return 0;
}
